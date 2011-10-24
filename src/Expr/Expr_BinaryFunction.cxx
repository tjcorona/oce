//static const char* sccsid = "@(#)Expr_BinaryFunction.cxx	3.2 95/01/10"; // Do not delete this line. Used by sccs.
// Copyright: 	Matra-Datavision 1991
// File:	Expr_BinaryFunction.cxx
// Created:	Thu May 30 09:15:26 1991
// Author:	Arnaud BOUZY
//		<adn>

#ifndef DEB
#define No_Standard_RangeError
#define No_Standard_OutOfRange
#endif

#include <Expr_BinaryFunction.ixx>
#include <Expr_InvalidFunction.hxx>
#include <Expr_Array1OfNamedUnknown.hxx>
#include <Expr_Array1OfGeneralExpression.hxx>
#include <Expr_FunctionDerivative.hxx>
#include <Expr_Product.hxx>
#include <Expr_Sum.hxx>
#include <Expr_Operators.hxx>
#include <Expr.hxx>

Expr_BinaryFunction::Expr_BinaryFunction (const Handle(Expr_GeneralFunction)& func, const Handle(Expr_GeneralExpression)& exp1, const Handle(Expr_GeneralExpression)& exp2)
{
  if (func->NbOfVariables() != 2) {
    Expr_InvalidFunction::Raise();
  }
  myFunction = func;
  CreateFirstOperand(exp1);
  CreateSecondOperand(exp2);
}

Handle(Expr_GeneralExpression) Expr_BinaryFunction::ShallowSimplified () const
{
  if (FirstOperand()->IsKind(STANDARD_TYPE(Expr_NumericValue))) {
    if (SecondOperand()->IsKind(STANDARD_TYPE(Expr_NumericValue))) {
      TColStd_Array1OfReal tabval(1,2);
      tabval(1) = Handle(Expr_NumericValue)::DownCast(FirstOperand())->GetValue();
      tabval(2) = Handle(Expr_NumericValue)::DownCast(SecondOperand())->GetValue();
      Expr_Array1OfNamedUnknown vars(1,2);
      vars(1) = myFunction->Variable(1);
      vars(2) = myFunction->Variable(2);
      Standard_Real res = myFunction->Evaluate(vars,tabval);
      return new Expr_NumericValue(res);
    }
  }
  Handle(Expr_BinaryFunction) me = this;
  return me;
}

Handle(Expr_GeneralExpression) Expr_BinaryFunction::Copy () const
{
  return new Expr_BinaryFunction(myFunction,
				 Expr::CopyShare(FirstOperand()),
				 Expr::CopyShare(SecondOperand()));
}

Standard_Boolean Expr_BinaryFunction::IsIdentical (const Handle(Expr_GeneralExpression)& Other) const
{
  if (!Other->IsKind(STANDARD_TYPE(Expr_BinaryFunction))) {
    return Standard_False;
  }
  Handle(Expr_BinaryFunction) fother = Handle(Expr_BinaryFunction)::DownCast(Other);
  Handle(Expr_GeneralExpression) otherexp = fother->FirstOperand();
  if (otherexp->IsIdentical(FirstOperand())) {
    otherexp = fother->SecondOperand();
    if (otherexp->IsIdentical(SecondOperand())) {
      if (myFunction->IsIdentical(fother->Function())) {
	return Standard_True;
      }
    }
  }
  return Standard_False;
}

Standard_Boolean Expr_BinaryFunction::IsLinear () const
{
  if (!ContainsUnknowns()) {
    return Standard_True;
  }
  if (!FirstOperand()->IsLinear()) {
    return Standard_False;
  }
  if (!SecondOperand()->IsLinear()) {
    return Standard_False;
  }
  if (!myFunction->IsLinearOnVariable(1)) {
    return Standard_False;
  }
  return myFunction->IsLinearOnVariable(2);
}

Handle(Expr_GeneralExpression) Expr_BinaryFunction::Derivative (const Handle(Expr_NamedUnknown)& X) const
{
  Handle(Expr_NamedUnknown) myvar1 = myFunction->Variable(1);
  Handle(Expr_NamedUnknown) myvar2 = myFunction->Variable(2);
  Handle(Expr_GeneralExpression) myfop = FirstOperand();
  Handle(Expr_GeneralExpression) mysop = SecondOperand();
  Handle(Expr_GeneralExpression) myexpder1 = myfop->Derivative(X);
  Handle(Expr_GeneralExpression) myexpder2 = mysop->Derivative(X);

  Handle(Expr_GeneralFunction) myfuncder1 = myFunction->Derivative(myvar1);
  Handle(Expr_BinaryFunction) firstpart 
    = new Expr_BinaryFunction(myfuncder1,
			      Expr::CopyShare(myfop),
			      Expr::CopyShare(mysop));

  Handle(Expr_GeneralExpression) fpart = firstpart->ShallowSimplified() * myexpder1;

  Handle(Expr_GeneralFunction) myfuncder2 = myFunction->Derivative(myvar2);
  Handle(Expr_BinaryFunction) secondpart 
    = new Expr_BinaryFunction(myfuncder2,
			      Expr::CopyShare(myfop),
			      Expr::CopyShare(mysop));

  Handle(Expr_GeneralExpression) spart = secondpart->ShallowSimplified() * myexpder2;

  fpart = fpart->ShallowSimplified();
  spart = spart->ShallowSimplified();
  return (fpart + spart)->ShallowSimplified();
}

Handle(Expr_GeneralFunction) Expr_BinaryFunction::Function () const
{
  return myFunction;
}

Standard_Real Expr_BinaryFunction::Evaluate(const Expr_Array1OfNamedUnknown& vars, const TColStd_Array1OfReal& vals) const
{
  Expr_Array1OfNamedUnknown varsfunc(1,2);
  varsfunc(1) = myFunction->Variable(1);
  varsfunc(2) = myFunction->Variable(2);
  TColStd_Array1OfReal valsfunc(1,2);
  valsfunc(1) = FirstOperand()->Evaluate(vars,vals);
  valsfunc(2) = SecondOperand()->Evaluate(vars,vals);
  return myFunction->Evaluate(varsfunc,valsfunc);
}

TCollection_AsciiString Expr_BinaryFunction::String() const
{
  TCollection_AsciiString res = myFunction->GetStringName();
  res += TCollection_AsciiString('(');
  res += FirstOperand()->String();
  res += ",";
  res += SecondOperand()->String();
  res += ")";
  return res;
}