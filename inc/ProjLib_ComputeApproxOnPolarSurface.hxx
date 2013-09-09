// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ProjLib_ComputeApproxOnPolarSurface_HeaderFile
#define _ProjLib_ComputeApproxOnPolarSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom2d_BSplineCurve_HeaderFile
#include <Handle_Geom2d_BSplineCurve.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Handle_Adaptor2d_HCurve2d_HeaderFile
#include <Handle_Adaptor2d_HCurve2d.hxx>
#endif
class Geom2d_BSplineCurve;
class Geom2d_Curve;
class Adaptor3d_HCurve;
class Adaptor3d_HSurface;
class Adaptor2d_HCurve2d;



class ProjLib_ComputeApproxOnPolarSurface  {
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

  
  Standard_EXPORT   ProjLib_ComputeApproxOnPolarSurface();
  
  Standard_EXPORT   ProjLib_ComputeApproxOnPolarSurface(const Handle(Adaptor3d_HCurve)& C,const Handle(Adaptor3d_HSurface)& S,const Standard_Real Tol = 1.0e-4);
  
  Standard_EXPORT   ProjLib_ComputeApproxOnPolarSurface(const Handle(Adaptor2d_HCurve2d)& InitCurve2d,const Handle(Adaptor3d_HCurve)& C,const Handle(Adaptor3d_HSurface)& S,const Standard_Real Tol);
  
  Standard_EXPORT   ProjLib_ComputeApproxOnPolarSurface(const Handle(Adaptor2d_HCurve2d)& InitCurve2d,const Handle(Adaptor2d_HCurve2d)& InitCurve2dBis,const Handle(Adaptor3d_HCurve)& C,const Handle(Adaptor3d_HSurface)& S,const Standard_Real Tol);
  
  Standard_EXPORT     Handle_Geom2d_BSplineCurve Perform(const Handle(Adaptor2d_HCurve2d)& InitCurve2d,const Handle(Adaptor3d_HCurve)& C,const Handle(Adaptor3d_HSurface)& S) ;
  
  Standard_EXPORT     Handle_Adaptor2d_HCurve2d BuildInitialCurve2d(const Handle(Adaptor3d_HCurve)& Curve,const Handle(Adaptor3d_HSurface)& S) ;
  
  Standard_EXPORT     Handle_Geom2d_BSplineCurve ProjectUsingInitialCurve2d(const Handle(Adaptor3d_HCurve)& Curve,const Handle(Adaptor3d_HSurface)& S,const Handle(Adaptor2d_HCurve2d)& InitCurve2d) ;
  
  Standard_EXPORT     Handle_Geom2d_BSplineCurve BSpline() const;
  
  Standard_EXPORT     Handle_Geom2d_Curve Curve2d() const;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;





protected:





private:



Standard_Boolean myProjIsDone;
Standard_Real myTolerance;
Handle_Geom2d_BSplineCurve myBSpline;
Handle_Geom2d_Curve my2ndCurve;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
