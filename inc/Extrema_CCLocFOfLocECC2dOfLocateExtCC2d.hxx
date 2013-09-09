// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_CCLocFOfLocECC2dOfLocateExtCC2d_HeaderFile
#define _Extrema_CCLocFOfLocECC2dOfLocateExtCC2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _gp_Vec2d_HeaderFile
#include <gp_Vec2d.hxx>
#endif
#ifndef _TColStd_SequenceOfReal_HeaderFile
#include <TColStd_SequenceOfReal.hxx>
#endif
#ifndef _Extrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d_HeaderFile
#include <Extrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d.hxx>
#endif
#ifndef _math_FunctionSetWithDerivatives_HeaderFile
#include <math_FunctionSetWithDerivatives.hxx>
#endif
#ifndef _Handle_Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d_HeaderFile
#include <Handle_Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_OutOfRange;
class Adaptor2d_Curve2d;
class Extrema_Curve2dTool;
class Extrema_POnCurv2d;
class gp_Pnt2d;
class gp_Vec2d;
class Extrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d;
class Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d;
class math_Vector;
class math_Matrix;



class Extrema_CCLocFOfLocECC2dOfLocateExtCC2d  : public math_FunctionSetWithDerivatives {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   Extrema_CCLocFOfLocECC2dOfLocateExtCC2d(const Standard_Real thetol = 1.0e-10);
  
  Standard_EXPORT   Extrema_CCLocFOfLocECC2dOfLocateExtCC2d(const Adaptor2d_Curve2d& C1,const Adaptor2d_Curve2d& C2,const Standard_Real thetol = 1.0e-10);
  
        void SetCurve(const Standard_Integer theRank,const Adaptor2d_Curve2d& C1) ;
  
        void SetTolerance(const Standard_Real theTol) ;
  
      virtual  Standard_Integer NbVariables() const;
  
      virtual  Standard_Integer NbEquations() const;
  
  Standard_EXPORT   virtual  Standard_Boolean Value(const math_Vector& UV,math_Vector& F) ;
  
  Standard_EXPORT     Standard_Boolean Derivatives(const math_Vector& UV,math_Matrix& DF) ;
  
  Standard_EXPORT     Standard_Boolean Values(const math_Vector& UV,math_Vector& F,math_Matrix& DF) ;
  
  Standard_EXPORT   virtual  Standard_Integer GetStateNumber() ;
  
        Standard_Integer NbExt() const;
  
        Standard_Real SquareDistance(const Standard_Integer N) const;
  
  Standard_EXPORT     void Points(const Standard_Integer N,Extrema_POnCurv2d& P1,Extrema_POnCurv2d& P2) const;
  
        Standard_Address CurvePtr(const Standard_Integer theRank) const;
  
        Standard_Real Tolerance() const;





protected:





private:



Standard_Address myC1;
Standard_Address myC2;
Standard_Real myTol;
Standard_Real myU;
Standard_Real myV;
gp_Pnt2d myP1;
gp_Pnt2d myP2;
gp_Vec2d myDu;
gp_Vec2d myDv;
TColStd_SequenceOfReal mySqDist;
Extrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d myPoints;


};

#define Curve1 Adaptor2d_Curve2d
#define Curve1_hxx <Adaptor2d_Curve2d.hxx>
#define Tool1 Extrema_Curve2dTool
#define Tool1_hxx <Extrema_Curve2dTool.hxx>
#define Curve2 Adaptor2d_Curve2d
#define Curve2_hxx <Adaptor2d_Curve2d.hxx>
#define Tool2 Extrema_Curve2dTool
#define Tool2_hxx <Extrema_Curve2dTool.hxx>
#define POnC Extrema_POnCurv2d
#define POnC_hxx <Extrema_POnCurv2d.hxx>
#define Pnt gp_Pnt2d
#define Pnt_hxx <gp_Pnt2d.hxx>
#define Vec gp_Vec2d
#define Vec_hxx <gp_Vec2d.hxx>
#define Extrema_SeqPOnC Extrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d
#define Extrema_SeqPOnC_hxx <Extrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d.hxx>
#define Extrema_SequenceNodeOfSeqPOnC Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d
#define Extrema_SequenceNodeOfSeqPOnC_hxx <Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d.hxx>
#define Extrema_SequenceNodeOfSeqPOnC Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d
#define Extrema_SequenceNodeOfSeqPOnC_hxx <Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d.hxx>
#define Handle_Extrema_SequenceNodeOfSeqPOnC Handle_Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d
#define Extrema_SequenceNodeOfSeqPOnC_Type_() Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d_Type_()
#define Handle_Extrema_SequenceNodeOfSeqPOnC Handle_Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d
#define Extrema_SequenceNodeOfSeqPOnC_Type_() Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d_Type_()
#define Extrema_FuncExtCC Extrema_CCLocFOfLocECC2dOfLocateExtCC2d
#define Extrema_FuncExtCC_hxx <Extrema_CCLocFOfLocECC2dOfLocateExtCC2d.hxx>

#include <Extrema_FuncExtCC.lxx>

#undef Curve1
#undef Curve1_hxx
#undef Tool1
#undef Tool1_hxx
#undef Curve2
#undef Curve2_hxx
#undef Tool2
#undef Tool2_hxx
#undef POnC
#undef POnC_hxx
#undef Pnt
#undef Pnt_hxx
#undef Vec
#undef Vec_hxx
#undef Extrema_SeqPOnC
#undef Extrema_SeqPOnC_hxx
#undef Extrema_SequenceNodeOfSeqPOnC
#undef Extrema_SequenceNodeOfSeqPOnC_hxx
#undef Extrema_SequenceNodeOfSeqPOnC
#undef Extrema_SequenceNodeOfSeqPOnC_hxx
#undef Handle_Extrema_SequenceNodeOfSeqPOnC
#undef Extrema_SequenceNodeOfSeqPOnC_Type_
#undef Handle_Extrema_SequenceNodeOfSeqPOnC
#undef Extrema_SequenceNodeOfSeqPOnC_Type_
#undef Extrema_FuncExtCC
#undef Extrema_FuncExtCC_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
