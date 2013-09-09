// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dGcc_Lin2d2Tan_HeaderFile
#define _Geom2dGcc_Lin2d2Tan_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TColgp_Array1OfLin2d_HeaderFile
#include <TColgp_Array1OfLin2d.hxx>
#endif
#ifndef _GccEnt_Array1OfPosition_HeaderFile
#include <GccEnt_Array1OfPosition.hxx>
#endif
#ifndef _TColgp_Array1OfPnt2d_HeaderFile
#include <TColgp_Array1OfPnt2d.hxx>
#endif
#ifndef _TColStd_Array1OfReal_HeaderFile
#include <TColStd_Array1OfReal.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GccEnt_Position_HeaderFile
#include <GccEnt_Position.hxx>
#endif
class StdFail_NotDone;
class GccEnt_BadQualifier;
class Standard_OutOfRange;
class Geom2dGcc_QualifiedCurve;
class gp_Pnt2d;
class gp_Lin2d;
class Geom2dGcc_MyL2d2Tan;
class Geom2dAdaptor_Curve;


//! This class implements the algorithms used to <br>
//!          create 2d lines tangent to 2 other elements which <br>
//!          can be circles, curves or points. <br>
//!          More than one argument must be a curve. <br>
//! Describes functions for building a 2D line: <br>
//! -   tangential to 2 curves, or <br>
//! -   tangential to a curve and passing through a point. <br>
//! A Lin2d2Tan object provides a framework for: <br>
//! -   defining the construction of 2D line(s), <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the result(s). <br>
class Geom2dGcc_Lin2d2Tan  {
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

  //! This class implements the algorithms used to create 2d <br>
//!          line tangent to two curves. <br>
//!          Tolang is used to determine the tolerance for the tangency points. <br>
  Standard_EXPORT   Geom2dGcc_Lin2d2Tan(const Geom2dGcc_QualifiedCurve& Qualified1,const Geom2dGcc_QualifiedCurve& Qualified2,const Standard_Real Tolang);
  //! This class implements the algorithms used to create 2d <br>
//!          lines passing thrue a point and tangent to a curve. <br>
//!          Tolang is used to determine the tolerance for the tangency points. <br>
  Standard_EXPORT   Geom2dGcc_Lin2d2Tan(const Geom2dGcc_QualifiedCurve& Qualified1,const gp_Pnt2d& ThePoint,const Standard_Real Tolang);
  //! This class implements the algorithms used to create 2d <br>
//!          line tangent to two curves. <br>
//!          Tolang is used to determine the tolerance for the tangency points. <br>
//!          Param1 is used for the initial guess on the first curve. <br>
//!          Param2 is used for the initial guess on the second curve. <br>
  Standard_EXPORT   Geom2dGcc_Lin2d2Tan(const Geom2dGcc_QualifiedCurve& Qualified1,const Geom2dGcc_QualifiedCurve& Qualified2,const Standard_Real Tolang,const Standard_Real Param1,const Standard_Real Param2);
  //! This class implements the algorithms used to create 2d <br>
//!          lines passing thrue a point and tangent to a curve. <br>
//!          Tolang is used to determine the tolerance for the tangency points. <br>
//!          Param2 is used for the initial guess on the curve. <br>
  Standard_EXPORT   Geom2dGcc_Lin2d2Tan(const Geom2dGcc_QualifiedCurve& Qualified1,const gp_Pnt2d& ThePoint,const Standard_Real Tolang,const Standard_Real Param1);
  //! Returns true if the construction algorithm does not fail <br>
//! (even if it finds no solution). <br>
//! Note: IsDone protects against a failure arising from a <br>
//! more internal intersection algorithm, which has <br>
//! reached its numeric limits. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns the number of lines, representing solutions computed by this algorithm. <br>
//! Exceptions StdFail_NotDone if the construction fails.R <br>
  Standard_EXPORT     Standard_Integer NbSolutions() const;
  //! Returns a line, representing the solution of index Index computed by this algorithm. <br>
//! Warning <br>
//! This indexing simply provides a means of consulting the <br>
//! solutions. The index values are not associated with <br>
//! these solutions outside the context of the algorithm object. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is less than zero or <br>
//! greater than the number of solutions computed by this algorithm. <br>
//! StdFail_NotDone if the construction fails. <br>
  Standard_EXPORT     gp_Lin2d ThisSolution(const Standard_Integer Index) const;
  //! Returns the qualifiers Qualif1 and Qualif2 of the <br>
//! tangency arguments for the solution of index Index <br>
//! computed by this algorithm. <br>
//! The returned qualifiers are: <br>
//! -   those specified at the start of construction when the <br>
//!   solutions are defined as enclosing or outside with <br>
//!   respect to the arguments, or <br>
//! -   those computed during construction (i.e. enclosing or <br>
//!   outside) when the solutions are defined as unqualified <br>
//!   with respect to the arguments, or <br>
//! -   GccEnt_noqualifier if the tangency argument is a   point. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is less than zero or <br>
//! greater than the number of solutions computed by this algorithm. <br>
//! StdFail_NotDone if the construction fails. <br>
  Standard_EXPORT     void WhichQualifier(const Standard_Integer Index,GccEnt_Position& Qualif1,GccEnt_Position& Qualif2) const;
  //! Returns informations about the tangency point between the <br>
//!          result and the first argument. <br>
//!          ParSol is the intrinsic parameter of the point PntSol on <br>
//!          the solution curv. <br>
//!          ParArg is the intrinsic parameter of the point PntSol on the argument curv. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is less than zero or <br>
//! greater than the number of solutions computed by this algorithm. <br>
//! StdFail_NotDone if the construction fails. <br>
  Standard_EXPORT     void Tangency1(const Standard_Integer Index,Standard_Real& ParSol,Standard_Real& ParArg,gp_Pnt2d& PntSol) const;
  //! Returns informations about the tangency point between the <br>
//! result and the first argument. <br>
//! ParSol is the intrinsic parameter of the point PntSol on the solution curv. <br>
//! ParArg is the intrinsic parameter of the point PntSol on the argument curv. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is less than zero or <br>
//! greater than the number of solutions computed by this algorithm. <br>
//! StdFail_NotDone if the construction fails. <br>
  Standard_EXPORT     void Tangency2(const Standard_Integer Index,Standard_Real& ParSol,Standard_Real& ParArg,gp_Pnt2d& PntSol) const;





protected:





private:

  
  Standard_EXPORT     Standard_Boolean Add(const Standard_Integer theIndex,const Geom2dGcc_MyL2d2Tan& theLin,const Standard_Real theTol,const Geom2dAdaptor_Curve& theC1,const Geom2dAdaptor_Curve& theC2) ;


Standard_Boolean WellDone;
Standard_Integer NbrSol;
TColgp_Array1OfLin2d linsol;
GccEnt_Array1OfPosition qualifier1;
GccEnt_Array1OfPosition qualifier2;
TColgp_Array1OfPnt2d pnttg1sol;
TColgp_Array1OfPnt2d pnttg2sol;
TColStd_Array1OfReal par1sol;
TColStd_Array1OfReal par2sol;
TColStd_Array1OfReal pararg1;
TColStd_Array1OfReal pararg2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
