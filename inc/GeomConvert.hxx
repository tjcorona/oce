// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomConvert_HeaderFile
#define _GeomConvert_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <Handle_Geom_BSplineCurve.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Handle_Geom_BSplineSurface.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Convert_ParameterisationType.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Handle_TColGeom_HArray1OfBSplineCurve.hxx>
#include <Handle_TColStd_HArray1OfInteger.hxx>
class Geom_BSplineCurve;
class Geom_BSplineSurface;
class Geom_Curve;
class Geom_Surface;
class TColGeom_Array1OfBSplineCurve;
class TColStd_Array1OfReal;
class TColGeom_HArray1OfBSplineCurve;
class TColStd_HArray1OfInteger;
class GeomConvert_BSplineCurveKnotSplitting;
class GeomConvert_BSplineSurfaceKnotSplitting;
class GeomConvert_BSplineCurveToBezierCurve;
class GeomConvert_CompCurveToBSplineCurve;
class GeomConvert_BSplineSurfaceToBezierSurface;
class GeomConvert_CompBezierSurfacesToBSplineSurface;
class GeomConvert_ApproxSurface;
class GeomConvert_ApproxCurve;


//! The GeomConvert package provides some global functions as follows <br>
//! -   converting classical Geom curves into BSpline curves, <br>
//! -   segmenting BSpline curves, particularly at knots <br>
//!   values: this function may be used in conjunction with the <br>
//!   GeomConvert_BSplineCurveKnotSplitting <br>
//!   class to segment a BSpline curve into arcs which <br>
//!   comply with required continuity levels, <br>
//! -   converting classical Geom surfaces into BSpline surfaces, and <br>
//! -   segmenting BSpline surfaces, particularly at <br>
//!   knots values: this function may be used in conjunction with the <br>
//!   GeomConvert_BSplineSurfaceKnotSplitting <br>
//!   class to segment a BSpline surface into patches <br>
//!   which comply with required continuity levels. <br>
//!  All geometric entities used in this package are bounded. <br>
//! <br>
//! References : <br>
//!  . Generating the Bezier Points of B-spline curves and surfaces <br>
//!    (Wolfgang Bohm) CAGD volume 13 number 6 november 1981 <br>
//!  . On NURBS: A Survey  (Leslie Piegl) IEEE Computer Graphics and <br>
//!    Application January 1991 <br>
//!  . Curve and surface construction using rational B-splines <br>
//!    (Leslie Piegl and Wayne Tiller) CAD Volume 19 number 9 november <br>
//!    1987 <br>
//!  . A survey of curve and surface methods in CAGD (Wolfgang BOHM) <br>
//!    CAGD 1 1984 <br>
class GeomConvert  {
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

  //!  Raised if FromK1 = ToK2 <br>
//!             Raised if FromK1 or ToK2 are out of the bounds <br>
//!             [FirstUKnotIndex, LastUKnotIndex] <br>
  Standard_EXPORT   static  Handle_Geom_BSplineCurve SplitBSplineCurve(const Handle(Geom_BSplineCurve)& C,const Standard_Integer FromK1,const Standard_Integer ToK2,const Standard_Boolean SameOrientation = Standard_True) ;
  
//!  Raised if FromU1 or ToU2 are out of the parametric bounds of the <br>
//!  curve (The tolerance criterion is ParametricTolerance). <br>
//!  Raised if Abs (FromU1 - ToU2) <= ParametricTolerance <br>
//!  Raised if ParametricTolerance < Resolution from gp. <br>
  Standard_EXPORT   static  Handle_Geom_BSplineCurve SplitBSplineCurve(const Handle(Geom_BSplineCurve)& C,const Standard_Real FromU1,const Standard_Real ToU2,const Standard_Real ParametricTolerance,const Standard_Boolean SameOrientation = Standard_True) ;
  //!  Raised if <br>
//!             FromUK1 = ToUK2 or FromVK1 = ToVK2 <br>
//!             FromUK1 or ToUK2 are out of the bounds <br>
//!             [FirstUKnotIndex, LastUKnotIndex] <br>
//!             FromVK1 or ToVK2 are out of the bounds <br>
//!             [FirstVKnotIndex, LastVKnotIndex] <br>
  Standard_EXPORT   static  Handle_Geom_BSplineSurface SplitBSplineSurface(const Handle(Geom_BSplineSurface)& S,const Standard_Integer FromUK1,const Standard_Integer ToUK2,const Standard_Integer FromVK1,const Standard_Integer ToVK2,const Standard_Boolean SameUOrientation = Standard_True,const Standard_Boolean SameVOrientation = Standard_True) ;
  //! Raised if FromK1 = ToK2 or if <br>
//!            FromK1 or ToK2 are out of the bounds <br>
//!            [FirstUKnotIndex, LastUKnotIndex] in the <br>
//!            considered parametric direction. <br>
  Standard_EXPORT   static  Handle_Geom_BSplineSurface SplitBSplineSurface(const Handle(Geom_BSplineSurface)& S,const Standard_Integer FromK1,const Standard_Integer ToK2,const Standard_Boolean USplit,const Standard_Boolean SameOrientation = Standard_True) ;
  
//!  Raised if FromU1 or ToU2 or FromV1 or ToU2 are out of the <br>
//!  parametric bounds of the surface (the tolerance criterion is <br>
//!  ParametricTolerance). <br>
//!  Raised if Abs (FromU1 - ToU2) <= ParametricTolerance or <br>
//!  Abs (FromV1 - ToV2) <= ParametricTolerance. <br>
//!  Raised if ParametricTolerance < Resolution. <br>
  Standard_EXPORT   static  Handle_Geom_BSplineSurface SplitBSplineSurface(const Handle(Geom_BSplineSurface)& S,const Standard_Real FromU1,const Standard_Real ToU2,const Standard_Real FromV1,const Standard_Real ToV2,const Standard_Real ParametricTolerance,const Standard_Boolean SameUOrientation = Standard_True,const Standard_Boolean SameVOrientation = Standard_True) ;
  
//!  Raises if FromParam1 or ToParam2 are out of the parametric bounds <br>
//!  of the surface in the considered direction. <br>
//!  Raises if Abs (FromParam1 - ToParam2) <= ParametricTolerance. <br>
  Standard_EXPORT   static  Handle_Geom_BSplineSurface SplitBSplineSurface(const Handle(Geom_BSplineSurface)& S,const Standard_Real FromParam1,const Standard_Real ToParam2,const Standard_Boolean USplit,const Standard_Real ParametricTolerance,const Standard_Boolean SameOrientation = Standard_True) ;
  
  Standard_EXPORT   static  Handle_Geom_BSplineCurve CurveToBSplineCurve(const Handle(Geom_Curve)& C,const Convert_ParameterisationType Parameterisation = Convert_TgtThetaOver2) ;
  
  Standard_EXPORT   static  Handle_Geom_BSplineSurface SurfaceToBSplineSurface(const Handle(Geom_Surface)& S) ;
  //! This Method concatenates G1 the ArrayOfCurves as far <br>
//!  as it  is possible. <br>
//!  ArrayOfCurves[0..N-1] <br>
//!  ArrayOfToler contains the  biggest tolerance of the two <br>
//!               points shared by two consecutives curves. <br>
//!               Its dimension: [0..N-2] <br>
//!  ClosedG1     indicates if the ArrayOfCurves is closed. <br>
//!               In this case ClosedG1 contains the biggest tolerance <br>
//!               of the two points which are at the closure. <br>
//!               Otherwise its value is 0.0 <br>
  Standard_EXPORT   static  void ConcatG1(TColGeom_Array1OfBSplineCurve& ArrayOfCurves,const TColStd_Array1OfReal& ArrayOfToler,Handle(TColGeom_HArray1OfBSplineCurve)& ArrayOfConcatenated,const Standard_Boolean ClosedG1Flag,const Standard_Real ClosedTolerance) ;
  //! This Method concatenates C1 the ArrayOfCurves as far <br>
//!  as it is possible. <br>
//!  ArrayOfCurves[0..N-1] <br>
//!  ArrayOfToler contains the  biggest tolerance of the two <br>
//!               points shared by two consecutives curves. <br>
//!               Its dimension: [0..N-2] <br>
//!  ClosedG1     indicates if the ArrayOfCurves is closed. <br>
//!               In this case ClosedG1 contains the biggest tolerance <br>
//!               of the two points which are at the closure. <br>
//!               Otherwise its value is 0.0 <br>
  Standard_EXPORT   static  void ConcatC1(TColGeom_Array1OfBSplineCurve& ArrayOfCurves,const TColStd_Array1OfReal& ArrayOfToler,Handle(TColStd_HArray1OfInteger)& ArrayOfIndices,Handle(TColGeom_HArray1OfBSplineCurve)& ArrayOfConcatenated,const Standard_Boolean ClosedG1Flag,const Standard_Real ClosedTolerance) ;
  //! This Method concatenates C1 the ArrayOfCurves as far <br>
//!  as it is possible. <br>
//!  ArrayOfCurves[0..N-1] <br>
//!  ArrayOfToler contains the  biggest tolerance of the two <br>
//!               points shared by two consecutives curves. <br>
//!               Its dimension: [0..N-2] <br>
//!  ClosedG1     indicates if the ArrayOfCurves is closed. <br>
//!               In this case ClosedG1 contains the biggest tolerance <br>
//!               of the two points which are at the closure. <br>
//!               Otherwise its value is 0.0 <br>
//! <br>
  Standard_EXPORT   static  void ConcatC1(TColGeom_Array1OfBSplineCurve& ArrayOfCurves,const TColStd_Array1OfReal& ArrayOfToler,Handle(TColStd_HArray1OfInteger)& ArrayOfIndices,Handle(TColGeom_HArray1OfBSplineCurve)& ArrayOfConcatenated,const Standard_Boolean ClosedG1Flag,const Standard_Real ClosedTolerance,const Standard_Real AngularTolerance) ;
  //! This  Method reduces as far as   it is possible the <br>
//!  multiplicities of  the  knots of  the BSpline BS.(keeping  the <br>
//!  geometry).  It returns a new BSpline which  could still be C0. <br>
//!  tolerance is a  geometrical tolerance. <br>
//!  The  Angular toleranceis in radians  and mesures  the angle of <br>
//!  the tangents  on  the left and on  the right  to decide if  the <br>
//! curve is G1 or not at a given point <br>
  Standard_EXPORT   static  void C0BSplineToC1BSplineCurve(Handle(Geom_BSplineCurve)& BS,const Standard_Real tolerance,const Standard_Real AngularTolerance = 1.0e-7) ;
  //! This Method   reduces as far  as  it is possible  the <br>
//!  multiplicities  of  the knots  of the BSpline  BS.(keeping the geometry). <br>
//!  It returns an array of BSpline C1. tolerance is a geometrical tolerance. <br>
  Standard_EXPORT   static  void C0BSplineToArrayOfC1BSplineCurve(const Handle(Geom_BSplineCurve)& BS,Handle(TColGeom_HArray1OfBSplineCurve)& tabBS,const Standard_Real tolerance) ;
  //!This   Method reduces as far   as it is  possible the <br>
//!  multiplicities of  the  knots of  the  BSpline BS.(keeping the <br>
//!  geometry).  It returns an array of BSpline C1.  tolerance is a <br>
//!  geometrical tolerance : it  allows for the maximum deformation <br>
//!  The  Angular tolerance is in  radians and mesures the angle of <br>
//!  the tangents on the left and on the right to decide if the curve <br>
//!  is C1 or not at a given point <br>
  Standard_EXPORT   static  void C0BSplineToArrayOfC1BSplineCurve(const Handle(Geom_BSplineCurve)& BS,Handle(TColGeom_HArray1OfBSplineCurve)& tabBS,const Standard_Real AngularTolerance,const Standard_Real tolerance) ;





protected:





private:




friend class GeomConvert_BSplineCurveKnotSplitting;
friend class GeomConvert_BSplineSurfaceKnotSplitting;
friend class GeomConvert_BSplineCurveToBezierCurve;
friend class GeomConvert_CompCurveToBSplineCurve;
friend class GeomConvert_BSplineSurfaceToBezierSurface;
friend class GeomConvert_CompBezierSurfacesToBSplineSurface;
friend class GeomConvert_ApproxSurface;
friend class GeomConvert_ApproxCurve;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
