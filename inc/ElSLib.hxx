// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ElSLib_HeaderFile
#define _ElSLib_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <Standard_Real.hxx>
#include <gp_Pnt.hxx>
#include <Standard_Integer.hxx>
#include <gp_Vec.hxx>
class gp_Pnt;
class gp_Pln;
class gp_Cone;
class gp_Cylinder;
class gp_Sphere;
class gp_Torus;
class gp_Vec;
class gp_Ax3;
class gp_Lin;
class gp_Circ;


//!  Provides functions for basic geometric computation on <br>
//! elementary surfaces. <br>
//! This includes: <br>
//! -   calculation of a point or derived vector on a surface <br>
//!   where the surface is provided by the gp package, or <br>
//!   defined in canonical form (as in the gp package), and <br>
//!   the point is defined with a parameter, <br>
//! -   evaluation of the parameters corresponding to a <br>
//!   point on an elementary surface from gp, <br>
//! -   calculation of isoparametric curves on an elementary <br>
//!   surface defined in canonical form (as in the gp package). <br>
//!  Notes: <br>
//! -   ElSLib stands for Elementary Surfaces Library. <br>
//! -   If the surfaces provided by the gp package are not <br>
//!   explicitly parameterized, they still have an implicit <br>
//!   parameterization, similar to that which they infer on <br>
//!   the equivalent Geom surfaces. <br>
//!  Note: ElSLib stands for Elementary Surfaces Library. <br>
class ElSLib  {
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

  //!  For elementary surfaces from the gp package (planes, <br>
//! cones, cylinders, spheres and tori), computes the point <br>
//! of parameters (U, V). <br>
  Standard_EXPORT   static  gp_Pnt Value(const Standard_Real U,const Standard_Real V,const gp_Pln& Pl) ;
  
      static  gp_Pnt Value(const Standard_Real U,const Standard_Real V,const gp_Cone& C) ;
  
      static  gp_Pnt Value(const Standard_Real U,const Standard_Real V,const gp_Cylinder& C) ;
  
      static  gp_Pnt Value(const Standard_Real U,const Standard_Real V,const gp_Sphere& S) ;
  
      static  gp_Pnt Value(const Standard_Real U,const Standard_Real V,const gp_Torus& T) ;
  //! For elementary surfaces from the gp package (planes, <br>
//! cones, cylinders, spheres and tori), computes the <br>
//! derivative vector of order Nu and Nv in the u and v <br>
//! parametric directions respectively, at the point of <br>
//! parameters (U, V). <br>
  Standard_EXPORT   static  gp_Vec DN(const Standard_Real U,const Standard_Real V,const gp_Pln& Pl,const Standard_Integer Nu,const Standard_Integer Nv) ;
  
      static  gp_Vec DN(const Standard_Real U,const Standard_Real V,const gp_Cone& C,const Standard_Integer Nu,const Standard_Integer Nv) ;
  
      static  gp_Vec DN(const Standard_Real U,const Standard_Real V,const gp_Cylinder& C,const Standard_Integer Nu,const Standard_Integer Nv) ;
  
      static  gp_Vec DN(const Standard_Real U,const Standard_Real V,const gp_Sphere& S,const Standard_Integer Nu,const Standard_Integer Nv) ;
  
      static  gp_Vec DN(const Standard_Real U,const Standard_Real V,const gp_Torus& T,const Standard_Integer Nu,const Standard_Integer Nv) ;
  //!  For elementary surfaces from the gp package (planes, <br>
//! cones, cylinders, spheres and tori), computes the point P <br>
//! of parameters (U, V).inline <br>
  Standard_EXPORT   static  void D0(const Standard_Real U,const Standard_Real V,const gp_Pln& Pl,gp_Pnt& P) ;
  
      static  void D0(const Standard_Real U,const Standard_Real V,const gp_Cone& C,gp_Pnt& P) ;
  
      static  void D0(const Standard_Real U,const Standard_Real V,const gp_Cylinder& C,gp_Pnt& P) ;
  
      static  void D0(const Standard_Real U,const Standard_Real V,const gp_Sphere& S,gp_Pnt& P) ;
  
      static  void D0(const Standard_Real U,const Standard_Real V,const gp_Torus& T,gp_Pnt& P) ;
  
//! For elementary surfaces from the gp package (planes, <br>
//! cones, cylinders, spheres and tori), computes: <br>
//! -   the point P of parameters (U, V), and <br>
//! -   the first derivative vectors Vu and Vv at this point in <br>
//!   the u and v parametric directions respectively. <br>
  Standard_EXPORT   static  void D1(const Standard_Real U,const Standard_Real V,const gp_Pln& Pl,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv) ;
  
      static  void D1(const Standard_Real U,const Standard_Real V,const gp_Cone& C,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv) ;
  
      static  void D1(const Standard_Real U,const Standard_Real V,const gp_Cylinder& C,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv) ;
  
      static  void D1(const Standard_Real U,const Standard_Real V,const gp_Sphere& S,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv) ;
  
      static  void D1(const Standard_Real U,const Standard_Real V,const gp_Torus& T,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv) ;
  
//! For elementary surfaces from the gp package (cones, <br>
//! cylinders, spheres and tori), computes: <br>
//! -   the point P of parameters (U, V), and <br>
//! -   the first derivative vectors Vu and Vv at this point in <br>
//!   the u and v parametric directions respectively, and <br>
//! -   the second derivative vectors Vuu, Vvv and Vuv at this point. <br>
  Standard_EXPORT   static  void D2(const Standard_Real U,const Standard_Real V,const gp_Cone& C,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv) ;
  
      static  void D2(const Standard_Real U,const Standard_Real V,const gp_Cylinder& C,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv) ;
  
      static  void D2(const Standard_Real U,const Standard_Real V,const gp_Sphere& S,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv) ;
  
      static  void D2(const Standard_Real U,const Standard_Real V,const gp_Torus& T,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv) ;
  
//! For elementary surfaces from the gp package (cones, <br>
//! cylinders, spheres and tori), computes: <br>
//! -   the point P of parameters (U,V), and <br>
//! -   the first derivative vectors Vu and Vv at this point in <br>
//!   the u and v parametric directions respectively, and <br>
//! -   the second derivative vectors Vuu, Vvv and Vuv at <br>
//!   this point, and <br>
//! -   the third derivative vectors Vuuu, Vvvv, Vuuv and <br>
//!   Vuvv at this point. <br>
  Standard_EXPORT   static  void D3(const Standard_Real U,const Standard_Real V,const gp_Cone& C,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv,gp_Vec& Vuuu,gp_Vec& Vvvv,gp_Vec& Vuuv,gp_Vec& Vuvv) ;
  
      static  void D3(const Standard_Real U,const Standard_Real V,const gp_Cylinder& C,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv,gp_Vec& Vuuu,gp_Vec& Vvvv,gp_Vec& Vuuv,gp_Vec& Vuvv) ;
  
      static  void D3(const Standard_Real U,const Standard_Real V,const gp_Sphere& S,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv,gp_Vec& Vuuu,gp_Vec& Vvvv,gp_Vec& Vuuv,gp_Vec& Vuvv) ;
  //! Surface evaluation <br>
//!  The following functions compute the point and the <br>
//!  derivatives on elementary surfaces defined with their <br>
//!  geometric characterisitics. <br>
//!  You don't need to create the surface to use these functions. <br>
//!  These functions are called by the previous  ones. <br>
//! Example : <br>
//!  A cylinder is defined with its position and its radius. <br>
      static  void D3(const Standard_Real U,const Standard_Real V,const gp_Torus& T,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv,gp_Vec& Vuuu,gp_Vec& Vvvv,gp_Vec& Vuuv,gp_Vec& Vuvv) ;
  
  Standard_EXPORT   static  gp_Pnt PlaneValue(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos) ;
  
  Standard_EXPORT   static  gp_Pnt CylinderValue(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius) ;
  
  Standard_EXPORT   static  gp_Pnt ConeValue(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Real SAngle) ;
  
  Standard_EXPORT   static  gp_Pnt SphereValue(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius) ;
  
  Standard_EXPORT   static  gp_Pnt TorusValue(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius) ;
  
  Standard_EXPORT   static  gp_Vec PlaneDN(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Integer Nu,const Standard_Integer Nv) ;
  
  Standard_EXPORT   static  gp_Vec CylinderDN(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Integer Nu,const Standard_Integer Nv) ;
  
  Standard_EXPORT   static  gp_Vec ConeDN(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Real SAngle,const Standard_Integer Nu,const Standard_Integer Nv) ;
  
  Standard_EXPORT   static  gp_Vec SphereDN(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Integer Nu,const Standard_Integer Nv) ;
  
  Standard_EXPORT   static  gp_Vec TorusDN(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const Standard_Integer Nu,const Standard_Integer Nv) ;
  
  Standard_EXPORT   static  void PlaneD0(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,gp_Pnt& P) ;
  
  Standard_EXPORT   static  void ConeD0(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Real SAngle,gp_Pnt& P) ;
  
  Standard_EXPORT   static  void CylinderD0(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,gp_Pnt& P) ;
  
  Standard_EXPORT   static  void SphereD0(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,gp_Pnt& P) ;
  
  Standard_EXPORT   static  void TorusD0(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt& P) ;
  
  Standard_EXPORT   static  void PlaneD1(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv) ;
  
  Standard_EXPORT   static  void ConeD1(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Real SAngle,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv) ;
  
  Standard_EXPORT   static  void CylinderD1(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv) ;
  
  Standard_EXPORT   static  void SphereD1(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv) ;
  
  Standard_EXPORT   static  void TorusD1(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv) ;
  
  Standard_EXPORT   static  void ConeD2(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Real SAngle,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv) ;
  
  Standard_EXPORT   static  void CylinderD2(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv) ;
  
  Standard_EXPORT   static  void SphereD2(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv) ;
  
  Standard_EXPORT   static  void TorusD2(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv) ;
  
  Standard_EXPORT   static  void ConeD3(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Real SAngle,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv,gp_Vec& Vuuu,gp_Vec& Vvvv,gp_Vec& Vuuv,gp_Vec& Vuvv) ;
  
  Standard_EXPORT   static  void CylinderD3(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv,gp_Vec& Vuuu,gp_Vec& Vvvv,gp_Vec& Vuuv,gp_Vec& Vuvv) ;
  
  Standard_EXPORT   static  void SphereD3(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real Radius,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv,gp_Vec& Vuuu,gp_Vec& Vvvv,gp_Vec& Vuuv,gp_Vec& Vuvv) ;
  
//!  The following functions compute the parametric values <br>
//!  corresponding to a given point on a elementary surface. <br>
//!  The point should be on the surface. <br>
  Standard_EXPORT   static  void TorusD3(const Standard_Real U,const Standard_Real V,const gp_Ax3& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt& P,gp_Vec& Vu,gp_Vec& Vv,gp_Vec& Vuu,gp_Vec& Vvv,gp_Vec& Vuv,gp_Vec& Vuuu,gp_Vec& Vvvv,gp_Vec& Vuuv,gp_Vec& Vuvv) ;
  //! parametrization <br>
//!  P (U, V) = <br>
//!  Pl.Location() + U * Pl.XDirection() + V * Pl.YDirection() <br>
      static  void Parameters(const gp_Pln& Pl,const gp_Pnt& P,Standard_Real& U,Standard_Real& V) ;
  //! parametrization <br>
//!  P (U, V) = Location + V * ZDirection + <br>
//!  Radius * (Cos(U) * XDirection + Sin (U) * YDirection) <br>
      static  void Parameters(const gp_Cylinder& C,const gp_Pnt& P,Standard_Real& U,Standard_Real& V) ;
  //! parametrization <br>
//!  P (U, V) =  Location + V * ZDirection + <br>
//!  (Radius + V * Tan (SemiAngle)) * <br>
//!  (Cos(U) * XDirection + Sin(U) * YDirection) <br>
      static  void Parameters(const gp_Cone& C,const gp_Pnt& P,Standard_Real& U,Standard_Real& V) ;
  //! parametrization <br>
//!  P (U, V) = Location + <br>
//!  Radius * Cos (V) * (Cos (U) * XDirection + Sin (U) * YDirection) + <br>
//!  Radius * Sin (V) * ZDirection <br>
      static  void Parameters(const gp_Sphere& S,const gp_Pnt& P,Standard_Real& U,Standard_Real& V) ;
  //! parametrization <br>
//!  P (U, V) = Location + <br>
//!  (MajorRadius + MinorRadius * Cos(U)) * <br>
//!  (Cos(V) * XDirection - Sin(V) * YDirection) + <br>
//!  MinorRadius * Sin(U) * ZDirection <br>
      static  void Parameters(const gp_Torus& T,const gp_Pnt& P,Standard_Real& U,Standard_Real& V) ;
  //! parametrization <br>
//!  P (U, V) = <br>
//!  Pl.Location() + U * Pl.XDirection() + V * Pl.YDirection() <br>
  Standard_EXPORT   static  void PlaneParameters(const gp_Ax3& Pos,const gp_Pnt& P,Standard_Real& U,Standard_Real& V) ;
  //! parametrization <br>
//!  P (U, V) = Location + V * ZDirection + <br>
//!  Radius * (Cos(U) * XDirection + Sin (U) * YDirection) <br>
  Standard_EXPORT   static  void CylinderParameters(const gp_Ax3& Pos,const Standard_Real Radius,const gp_Pnt& P,Standard_Real& U,Standard_Real& V) ;
  //! parametrization <br>
//!  P (U, V) =  Location + V * ZDirection + <br>
//!  (Radius + V * Tan (SemiAngle)) * <br>
//!  (Cos(U) * XDirection + Sin(U) * YDirection) <br>
  Standard_EXPORT   static  void ConeParameters(const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Real SAngle,const gp_Pnt& P,Standard_Real& U,Standard_Real& V) ;
  //! parametrization <br>
//!  P (U, V) = Location + <br>
//!  Radius * Cos (V) * (Cos (U) * XDirection + Sin (U) * YDirection) + <br>
//!  Radius * Sin (V) * ZDirection <br>
  Standard_EXPORT   static  void SphereParameters(const gp_Ax3& Pos,const Standard_Real Radius,const gp_Pnt& P,Standard_Real& U,Standard_Real& V) ;
  //! parametrization <br>
//!  P (U, V) = Location + <br>
//!  (MajorRadius + MinorRadius * Cos(U)) * <br>
//!  (Cos(V) * XDirection - Sin(V) * YDirection) + <br>
//!  MinorRadius * Sin(U) * ZDirection <br>
  Standard_EXPORT   static  void TorusParameters(const gp_Ax3& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const gp_Pnt& P,Standard_Real& U,Standard_Real& V) ;
  
  Standard_EXPORT   static  gp_Lin PlaneUIso(const gp_Ax3& Pos,const Standard_Real U) ;
  
  Standard_EXPORT   static  gp_Lin CylinderUIso(const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Real U) ;
  
  Standard_EXPORT   static  gp_Lin ConeUIso(const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Real SAngle,const Standard_Real U) ;
  
  Standard_EXPORT   static  gp_Circ SphereUIso(const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Real U) ;
  
  Standard_EXPORT   static  gp_Circ TorusUIso(const gp_Ax3& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const Standard_Real U) ;
  
  Standard_EXPORT   static  gp_Lin PlaneVIso(const gp_Ax3& Pos,const Standard_Real V) ;
  
  Standard_EXPORT   static  gp_Circ CylinderVIso(const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Real V) ;
  
  Standard_EXPORT   static  gp_Circ ConeVIso(const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Real SAngle,const Standard_Real V) ;
  
  Standard_EXPORT   static  gp_Circ SphereVIso(const gp_Ax3& Pos,const Standard_Real Radius,const Standard_Real V) ;
  
  Standard_EXPORT   static  gp_Circ TorusVIso(const gp_Ax3& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const Standard_Real V) ;





protected:





private:





};


#include <ElSLib.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
