// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dGcc_MyCirc2dTanOnRad_HeaderFile
#define _Geom2dGcc_MyCirc2dTanOnRad_HeaderFile

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
#ifndef _TColgp_Array1OfCirc2d_HeaderFile
#include <TColgp_Array1OfCirc2d.hxx>
#endif
#ifndef _GccEnt_Array1OfPosition_HeaderFile
#include <GccEnt_Array1OfPosition.hxx>
#endif
#ifndef _TColStd_Array1OfInteger_HeaderFile
#include <TColStd_Array1OfInteger.hxx>
#endif
#ifndef _TColgp_Array1OfPnt2d_HeaderFile
#include <TColgp_Array1OfPnt2d.hxx>
#endif
#ifndef _TColStd_Array1OfReal_HeaderFile
#include <TColStd_Array1OfReal.hxx>
#endif
#ifndef _Handle_Geom2dAdaptor_HCurve_HeaderFile
#include <Handle_Geom2dAdaptor_HCurve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GccEnt_Position_HeaderFile
#include <GccEnt_Position.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class GccEnt_BadQualifier;
class StdFail_NotDone;
class Geom2dAdaptor_Curve;
class Geom2dGcc_CurveTool;
class Geom2dGcc_MyQCurve;
class Adaptor3d_OffsetCurve;
class Geom2dAdaptor_HCurve;
class Geom2dGcc_MyCurveTool;
class Geom2dInt_TheIntConicCurveOfGInter;
class Geom2dInt_GInter;
class gp_Lin2d;
class gp_Circ2d;
class GccEnt_QualifiedCirc;
class GccEnt_QualifiedLin;
class gp_Pnt2d;



class Geom2dGcc_MyCirc2dTanOnRad  {
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

  
  Standard_EXPORT   Geom2dGcc_MyCirc2dTanOnRad(const Geom2dGcc_MyQCurve& Qualified1,const gp_Lin2d& OnLine,const Standard_Real Radius,const Standard_Real Tolerance);
  
  Standard_EXPORT   Geom2dGcc_MyCirc2dTanOnRad(const Geom2dGcc_MyQCurve& Qualified1,const gp_Circ2d& OnCirc,const Standard_Real Radius,const Standard_Real Tolerance);
  
  Standard_EXPORT   Geom2dGcc_MyCirc2dTanOnRad(const GccEnt_QualifiedCirc& Qualified1,const Geom2dAdaptor_Curve& OnCurv,const Standard_Real Radius,const Standard_Real Tolerance);
  
  Standard_EXPORT   Geom2dGcc_MyCirc2dTanOnRad(const GccEnt_QualifiedLin& Qualified1,const Geom2dAdaptor_Curve& OnCurv,const Standard_Real Radius,const Standard_Real Tolerance);
  
  Standard_EXPORT   Geom2dGcc_MyCirc2dTanOnRad(const Geom2dGcc_MyQCurve& Qualified1,const Geom2dAdaptor_Curve& OnCurv,const Standard_Real Radius,const Standard_Real Tolerance);
  
  Standard_EXPORT   Geom2dGcc_MyCirc2dTanOnRad(const gp_Pnt2d& Point1,const Geom2dAdaptor_Curve& OnCurv,const Standard_Real Radius,const Standard_Real Tolerance);
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     Standard_Integer NbSolutions() const;
  
  Standard_EXPORT     gp_Circ2d ThisSolution(const Standard_Integer Index) const;
  
  Standard_EXPORT     void WhichQualifier(const Standard_Integer Index,GccEnt_Position& Qualif1) const;
  
  Standard_EXPORT     void Tangency1(const Standard_Integer Index,Standard_Real& ParSol,Standard_Real& ParArg,gp_Pnt2d& PntSol) const;
  
  Standard_EXPORT     void CenterOn3(const Standard_Integer Index,Standard_Real& ParArg,gp_Pnt2d& PntSol) const;
  
  Standard_EXPORT     Standard_Boolean IsTheSame1(const Standard_Integer Index) const;





protected:





private:



Standard_Boolean WellDone;
Standard_Integer NbrSol;
TColgp_Array1OfCirc2d cirsol;
GccEnt_Array1OfPosition qualifier1;
TColStd_Array1OfInteger TheSame1;
TColgp_Array1OfPnt2d pnttg1sol;
TColgp_Array1OfPnt2d pntcen3;
TColStd_Array1OfReal par1sol;
TColStd_Array1OfReal pararg1;
TColStd_Array1OfReal parcen3;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif