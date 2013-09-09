// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ElCLib_HeaderFile
#define _ElCLib_HeaderFile

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
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
class gp_Pnt;
class gp_Lin;
class gp_Circ;
class gp_Elips;
class gp_Hypr;
class gp_Parab;
class gp_Vec;
class gp_Lin2d;
class gp_Circ2d;
class gp_Elips2d;
class gp_Hypr2d;
class gp_Parab2d;
class gp_Pnt2d;
class gp_Vec2d;
class gp_Ax1;
class gp_Ax2;
class gp_Ax2d;
class gp_Ax22d;
class gp_Dir;
class gp_Dir2d;


//! Provides functions for basic geometric computations on <br>
//! elementary curves such as conics and lines in 2D and 3D space. <br>
//! This includes: <br>
//! -   calculation of a point or derived vector on a 2D or <br>
//!   3D curve where: <br>
//!   -   the curve is provided by the gp package, or <br>
//!    defined in reference form (as in the gp package), <br>
//!    and <br>
//!   -   the point is defined by a parameter, <br>
//! -   evaluation of the parameter corresponding to a point <br>
//!   on a 2D or 3D curve from gp, <br>
//! -   various elementary computations which allow you to <br>
//! position parameterized values within the period of a curve. <br>
//!  Notes: <br>
//! -   ElCLib stands for Elementary Curves Library. <br>
//! -   If the curves provided by the gp package are not <br>
//!   explicitly parameterized, they still have an implicit <br>
//!   parameterization, analogous to that which they infer <br>
//!   for the equivalent Geom or Geom2d curves. <br>
class ElCLib  {
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

  //! Return a value in   the  range <UFirst, ULast>  by <br>
//!          adding or removing the period <ULast -  UFirst> to <br>
//!          <U>. <br>
  Standard_EXPORT   static  Standard_Real InPeriod(const Standard_Real U,const Standard_Real UFirst,const Standard_Real ULast) ;
  //! Adjust U1 and  U2 in the  parametric range  UFirst <br>
//!          Ulast of a periodic curve, where ULast - <br>
//! UFirst is its period. To do this, this function: <br>
//! -   sets U1 in the range [ UFirst, ULast ] by <br>
//!   adding/removing the period to/from the value U1, then <br>
//! -   sets U2 in the range [ U1, U1 + period ] by <br>
//!   adding/removing the period to/from the value U2. <br>
//!   Precision is used to test the equalities. <br>
  Standard_EXPORT   static  void AdjustPeriodic(const Standard_Real UFirst,const Standard_Real ULast,const Standard_Real Precision,Standard_Real& U1,Standard_Real& U2) ;
  //! For elementary curves (lines, circles and conics) from <br>
//! the gp package, computes the point of parameter U. <br>
//! The result is either: <br>
//! -   a gp_Pnt point for a curve in 3D space, or <br>
//! -   a gp_Pnt2d point for a curve in 2D space. <br>
  Standard_EXPORT   static  gp_Pnt Value(const Standard_Real U,const gp_Lin& L) ;
  
      static  gp_Pnt Value(const Standard_Real U,const gp_Circ& C) ;
  
      static  gp_Pnt Value(const Standard_Real U,const gp_Elips& E) ;
  
      static  gp_Pnt Value(const Standard_Real U,const gp_Hypr& H) ;
  
      static  gp_Pnt Value(const Standard_Real U,const gp_Parab& Prb) ;
  
//! For elementary curves (lines, circles and conics) from the <br>
//! gp package, computes: <br>
//! -   the point P of parameter U, and <br>
//! -   the first derivative vector V1 at this point. <br>
//! The results P and V1 are either: <br>
//! -   a gp_Pnt point and a gp_Vec vector, for a curve in 3D  space, or <br>
//! -   a gp_Pnt2d point and a gp_Vec2d vector, for a curve in 2D space. <br>
  Standard_EXPORT   static  void D1(const Standard_Real U,const gp_Lin& L,gp_Pnt& P,gp_Vec& V1) ;
  
      static  void D1(const Standard_Real U,const gp_Circ& C,gp_Pnt& P,gp_Vec& V1) ;
  
      static  void D1(const Standard_Real U,const gp_Elips& E,gp_Pnt& P,gp_Vec& V1) ;
  
      static  void D1(const Standard_Real U,const gp_Hypr& H,gp_Pnt& P,gp_Vec& V1) ;
  
      static  void D1(const Standard_Real U,const gp_Parab& Prb,gp_Pnt& P,gp_Vec& V1) ;
  //! For elementary curves (circles and conics) from the gp <br>
//! package, computes: <br>
//! - the point P of parameter U, and <br>
//! - the first and second derivative vectors V1 and V2 at this point. <br>
//!   The results, P, V1 and V2, are either: <br>
//! -   a gp_Pnt point and two gp_Vec vectors, for a curve in 3D space, or <br>
//! -   a gp_Pnt2d point and two gp_Vec2d vectors, for a curve in 2D space. <br>
  Standard_EXPORT   static  void D2(const Standard_Real U,const gp_Circ& C,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) ;
  
      static  void D2(const Standard_Real U,const gp_Elips& E,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) ;
  
      static  void D2(const Standard_Real U,const gp_Hypr& H,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) ;
  
      static  void D2(const Standard_Real U,const gp_Parab& Prb,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) ;
  //! For elementary curves (circles, ellipses and hyperbolae) <br>
//! from the gp package, computes: <br>
//! -   the point P of parameter U, and <br>
//! -   the first, second and third derivative vectors V1, V2 <br>
//!   and V3 at this point. <br>
//! The results, P, V1, V2 and V3, are either: <br>
//! -   a gp_Pnt point and three gp_Vec vectors, for a curve in 3D space, or <br>
//! -   a gp_Pnt2d point and three gp_Vec2d vectors, for a curve in 2D space. <br>
  Standard_EXPORT   static  void D3(const Standard_Real U,const gp_Circ& C,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) ;
  
      static  void D3(const Standard_Real U,const gp_Elips& E,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) ;
  
  Standard_EXPORT   static  void D3(const Standard_Real U,const gp_Hypr& H,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) ;
  
//! For elementary curves (lines, circles and conics) from <br>
//! the gp package, computes the vector corresponding to <br>
//! the Nth derivative at the point of parameter U. The result is either: <br>
//! -   a gp_Vec vector for a curve in 3D space, or <br>
//! -   a gp_Vec2d vector for a curve in 2D space. <br>
//!  In the following functions N is the order of derivation <br>
//!  and should be greater than 0 <br>
  Standard_EXPORT   static  gp_Vec DN(const Standard_Real U,const gp_Lin& L,const Standard_Integer N) ;
  
      static  gp_Vec DN(const Standard_Real U,const gp_Circ& C,const Standard_Integer N) ;
  
      static  gp_Vec DN(const Standard_Real U,const gp_Elips& E,const Standard_Integer N) ;
  
      static  gp_Vec DN(const Standard_Real U,const gp_Hypr& H,const Standard_Integer N) ;
  
      static  gp_Vec DN(const Standard_Real U,const gp_Parab& Prb,const Standard_Integer N) ;
  
      static  gp_Pnt2d Value(const Standard_Real U,const gp_Lin2d& L) ;
  
      static  gp_Pnt2d Value(const Standard_Real U,const gp_Circ2d& C) ;
  
      static  gp_Pnt2d Value(const Standard_Real U,const gp_Elips2d& E) ;
  
      static  gp_Pnt2d Value(const Standard_Real U,const gp_Hypr2d& H) ;
  
      static  gp_Pnt2d Value(const Standard_Real U,const gp_Parab2d& Prb) ;
  
      static  void D1(const Standard_Real U,const gp_Lin2d& L,gp_Pnt2d& P,gp_Vec2d& V1) ;
  
      static  void D1(const Standard_Real U,const gp_Circ2d& C,gp_Pnt2d& P,gp_Vec2d& V1) ;
  
      static  void D1(const Standard_Real U,const gp_Elips2d& E,gp_Pnt2d& P,gp_Vec2d& V1) ;
  
      static  void D1(const Standard_Real U,const gp_Hypr2d& H,gp_Pnt2d& P,gp_Vec2d& V1) ;
  
      static  void D1(const Standard_Real U,const gp_Parab2d& Prb,gp_Pnt2d& P,gp_Vec2d& V1) ;
  
      static  void D2(const Standard_Real U,const gp_Circ2d& C,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) ;
  
      static  void D2(const Standard_Real U,const gp_Elips2d& E,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) ;
  
      static  void D2(const Standard_Real U,const gp_Hypr2d& H,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) ;
  
      static  void D2(const Standard_Real U,const gp_Parab2d& Prb,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) ;
  
      static  void D3(const Standard_Real U,const gp_Circ2d& C,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) ;
  
      static  void D3(const Standard_Real U,const gp_Elips2d& E,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) ;
  
//!  In the following functions N is the order of derivation <br>
//!  and should be greater than 0 <br>
      static  void D3(const Standard_Real U,const gp_Hypr2d& H,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) ;
  
      static  gp_Vec2d DN(const Standard_Real U,const gp_Lin2d& L,const Standard_Integer N) ;
  
      static  gp_Vec2d DN(const Standard_Real U,const gp_Circ2d& C,const Standard_Integer N) ;
  
      static  gp_Vec2d DN(const Standard_Real U,const gp_Elips2d& E,const Standard_Integer N) ;
  
      static  gp_Vec2d DN(const Standard_Real U,const gp_Hypr2d& H,const Standard_Integer N) ;
  
      static  gp_Vec2d DN(const Standard_Real U,const gp_Parab2d& Prb,const Standard_Integer N) ;
  //! Curve evaluation <br>
//!  The following basis functions compute the derivatives on <br>
//!  elementary curves defined by their geometric characteristics. <br>
//!  These functions can be called without constructing a conic <br>
//!  from package gp. They are called by the previous functions. <br>
//! Example : <br>
//!  A circle is defined by its position and its radius. <br>
  Standard_EXPORT   static  gp_Pnt LineValue(const Standard_Real U,const gp_Ax1& Pos) ;
  
  Standard_EXPORT   static  gp_Pnt CircleValue(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real Radius) ;
  
  Standard_EXPORT   static  gp_Pnt EllipseValue(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius) ;
  
  Standard_EXPORT   static  gp_Pnt HyperbolaValue(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius) ;
  
  Standard_EXPORT   static  gp_Pnt ParabolaValue(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real Focal) ;
  
  Standard_EXPORT   static  void LineD1(const Standard_Real U,const gp_Ax1& Pos,gp_Pnt& P,gp_Vec& V1) ;
  
  Standard_EXPORT   static  void CircleD1(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real Radius,gp_Pnt& P,gp_Vec& V1) ;
  
  Standard_EXPORT   static  void EllipseD1(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt& P,gp_Vec& V1) ;
  
  Standard_EXPORT   static  void HyperbolaD1(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt& P,gp_Vec& V1) ;
  
  Standard_EXPORT   static  void ParabolaD1(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real Focal,gp_Pnt& P,gp_Vec& V1) ;
  
  Standard_EXPORT   static  void CircleD2(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real Radius,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) ;
  
  Standard_EXPORT   static  void EllipseD2(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) ;
  
  Standard_EXPORT   static  void HyperbolaD2(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) ;
  
  Standard_EXPORT   static  void ParabolaD2(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real Focal,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) ;
  
  Standard_EXPORT   static  void CircleD3(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real Radius,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) ;
  
  Standard_EXPORT   static  void EllipseD3(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) ;
  
  Standard_EXPORT   static  void HyperbolaD3(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) ;
  
//!  In the following functions N is the order of derivation <br>
//!  and should be greater than 0 <br>
  Standard_EXPORT   static  gp_Vec LineDN(const Standard_Real U,const gp_Ax1& Pos,const Standard_Integer N) ;
  
  Standard_EXPORT   static  gp_Vec CircleDN(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real Radius,const Standard_Integer N) ;
  
  Standard_EXPORT   static  gp_Vec EllipseDN(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const Standard_Integer N) ;
  
  Standard_EXPORT   static  gp_Vec HyperbolaDN(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const Standard_Integer N) ;
  
  Standard_EXPORT   static  gp_Vec ParabolaDN(const Standard_Real U,const gp_Ax2& Pos,const Standard_Real Focal,const Standard_Integer N) ;
  
  Standard_EXPORT   static  gp_Pnt2d LineValue(const Standard_Real U,const gp_Ax2d& Pos) ;
  
  Standard_EXPORT   static  gp_Pnt2d CircleValue(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real Radius) ;
  
  Standard_EXPORT   static  gp_Pnt2d EllipseValue(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius) ;
  
  Standard_EXPORT   static  gp_Pnt2d HyperbolaValue(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius) ;
  
  Standard_EXPORT   static  gp_Pnt2d ParabolaValue(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real Focal) ;
  
  Standard_EXPORT   static  void LineD1(const Standard_Real U,const gp_Ax2d& Pos,gp_Pnt2d& P,gp_Vec2d& V1) ;
  
  Standard_EXPORT   static  void CircleD1(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real Radius,gp_Pnt2d& P,gp_Vec2d& V1) ;
  
  Standard_EXPORT   static  void EllipseD1(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt2d& P,gp_Vec2d& V1) ;
  
  Standard_EXPORT   static  void HyperbolaD1(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt2d& P,gp_Vec2d& V1) ;
  
  Standard_EXPORT   static  void ParabolaD1(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real Focal,gp_Pnt2d& P,gp_Vec2d& V1) ;
  
  Standard_EXPORT   static  void CircleD2(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real Radius,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) ;
  
  Standard_EXPORT   static  void EllipseD2(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) ;
  
  Standard_EXPORT   static  void HyperbolaD2(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) ;
  
  Standard_EXPORT   static  void ParabolaD2(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real Focal,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) ;
  
  Standard_EXPORT   static  void CircleD3(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real Radius,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) ;
  
  Standard_EXPORT   static  void EllipseD3(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) ;
  
//!  In the following functions N is the order of derivation <br>
//!  and should be greater than 0 <br>
  Standard_EXPORT   static  void HyperbolaD3(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) ;
  
  Standard_EXPORT   static  gp_Vec2d LineDN(const Standard_Real U,const gp_Ax2d& Pos,const Standard_Integer N) ;
  
  Standard_EXPORT   static  gp_Vec2d CircleDN(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real Radius,const Standard_Integer N) ;
  
  Standard_EXPORT   static  gp_Vec2d EllipseDN(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const Standard_Integer N) ;
  
  Standard_EXPORT   static  gp_Vec2d HyperbolaDN(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const Standard_Integer N) ;
  
//!  The following functions compute the parametric value corresponding <br>
//!  to a given point on a elementary curve. The point should be on the <br>
//!  curve. <br>
  Standard_EXPORT   static  gp_Vec2d ParabolaDN(const Standard_Real U,const gp_Ax22d& Pos,const Standard_Real Focal,const Standard_Integer N) ;
  
//! Computes the parameter value of the point P on the given curve. <br>
//! Note: In its local coordinate system, the parametric <br>
//! equation of the curve is given by the following: <br>
//! -   for the line L: P(U) = Po + U*Vo <br>
//! where Po is the origin and Vo the unit vector of its positioning axis. <br>
//! -   for the circle C: X(U) = Radius*Cos(U), Y(U) = Radius*Sin(U) <br>
//! -   for the ellipse E: X(U) = MajorRadius*Cos(U). Y(U) = MinorRadius*Sin(U) <br>
//! -   for the hyperbola H: X(U) = MajorRadius*Ch(U), Y(U) = MinorRadius*Sh(U) <br>
//! -   for the parabola Prb: <br>
//! X(U) = U**2 / (2*p) <br>
//! Y(U) = U <br>
//! where p is the distance between the focus and the directrix. <br>
//! Warning <br>
//! The point P must be on the curve. These functions are <br>
//! not protected, however, and if point P is not on the <br>
//! curve, an exception may be raised. <br>
  Standard_EXPORT   static  Standard_Real Parameter(const gp_Lin& L,const gp_Pnt& P) ;
  //! parametrization <br>
//!  P (U) = L.Location() + U * L.Direction() <br>
      static  Standard_Real Parameter(const gp_Lin2d& L,const gp_Pnt2d& P) ;
  
      static  Standard_Real Parameter(const gp_Circ& C,const gp_Pnt& P) ;
  //! parametrization <br>
//!  In the local coordinate system of the circle <br>
//!  X (U) = Radius * Cos (U) <br>
//!  Y (U) = Radius * Sin (U) <br>
      static  Standard_Real Parameter(const gp_Circ2d& C,const gp_Pnt2d& P) ;
  
      static  Standard_Real Parameter(const gp_Elips& E,const gp_Pnt& P) ;
  //! parametrization <br>
//!  In the local coordinate system of the Ellipse <br>
//!  X (U) = MajorRadius * Cos (U) <br>
//!  Y (U) = MinorRadius * Sin (U) <br>
      static  Standard_Real Parameter(const gp_Elips2d& E,const gp_Pnt2d& P) ;
  
      static  Standard_Real Parameter(const gp_Hypr& H,const gp_Pnt& P) ;
  //! parametrization <br>
//!  In the local coordinate system of the Hyperbola <br>
//!  X (U) = MajorRadius * Ch (U) <br>
//!  Y (U) = MinorRadius * Sh (U) <br>
      static  Standard_Real Parameter(const gp_Hypr2d& H,const gp_Pnt2d& P) ;
  
      static  Standard_Real Parameter(const gp_Parab& Prb,const gp_Pnt& P) ;
  //! parametrization <br>
//!  In the local coordinate system of the parabola <br>
//!  Y**2 = (2*P) * X where P is the distance between the focus <br>
//!  and the directrix. <br>
      static  Standard_Real Parameter(const gp_Parab2d& Prb,const gp_Pnt2d& P) ;
  
  Standard_EXPORT   static  Standard_Real LineParameter(const gp_Ax1& Pos,const gp_Pnt& P) ;
  //! parametrization <br>
//!  P (U) = L.Location() + U * L.Direction() <br>
  Standard_EXPORT   static  Standard_Real LineParameter(const gp_Ax2d& Pos,const gp_Pnt2d& P) ;
  
  Standard_EXPORT   static  Standard_Real CircleParameter(const gp_Ax2& Pos,const gp_Pnt& P) ;
  //! Pos is the Axis of the Circle <br>//! parametrization <br>
//!  In the local coordinate system of the circle <br>
//!  X (U) = Radius * Cos (U) <br>
//!  Y (U) = Radius * Sin (U) <br>
  Standard_EXPORT   static  Standard_Real CircleParameter(const gp_Ax22d& Pos,const gp_Pnt2d& P) ;
  
  Standard_EXPORT   static  Standard_Real EllipseParameter(const gp_Ax2& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const gp_Pnt& P) ;
  //! Pos is the Axis of the Ellipse <br>//! parametrization <br>
//!  In the local coordinate system of the Ellipse <br>
//!  X (U) = MajorRadius * Cos (U) <br>
//!  Y (U) = MinorRadius * Sin (U) <br>
  Standard_EXPORT   static  Standard_Real EllipseParameter(const gp_Ax22d& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const gp_Pnt2d& P) ;
  
  Standard_EXPORT   static  Standard_Real HyperbolaParameter(const gp_Ax2& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const gp_Pnt& P) ;
  //! Pos is the Axis of the Hyperbola <br>//! parametrization <br>
//!  In the local coordinate system of the Hyperbola <br>
//!  X (U) = MajorRadius * Ch (U) <br>
//!  Y (U) = MinorRadius * Sh (U) <br>
  Standard_EXPORT   static  Standard_Real HyperbolaParameter(const gp_Ax22d& Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const gp_Pnt2d& P) ;
  
  Standard_EXPORT   static  Standard_Real ParabolaParameter(const gp_Ax2& Pos,const gp_Pnt& P) ;
  //! Pos is the mirror axis of the parabola <br>//! parametrization <br>
//!  In the local coordinate system of the parabola <br>
//!  Y**2 = (2*P) * X where P is the distance between the focus <br>
//!  and the directrix. <br>//!  The following functions build  a 3d curve from a <br>
//!            2d curve at a given position defined with an Ax2. <br>
  Standard_EXPORT   static  Standard_Real ParabolaParameter(const gp_Ax22d& Pos,const gp_Pnt2d& P) ;
  
  Standard_EXPORT   static  gp_Pnt To3d(const gp_Ax2& Pos,const gp_Pnt2d& P) ;
  
  Standard_EXPORT   static  gp_Vec To3d(const gp_Ax2& Pos,const gp_Vec2d& V) ;
  
  Standard_EXPORT   static  gp_Dir To3d(const gp_Ax2& Pos,const gp_Dir2d& V) ;
  
  Standard_EXPORT   static  gp_Ax1 To3d(const gp_Ax2& Pos,const gp_Ax2d& A) ;
  
  Standard_EXPORT   static  gp_Ax2 To3d(const gp_Ax2& Pos,const gp_Ax22d& A) ;
  
  Standard_EXPORT   static  gp_Lin To3d(const gp_Ax2& Pos,const gp_Lin2d& L) ;
  
  Standard_EXPORT   static  gp_Circ To3d(const gp_Ax2& Pos,const gp_Circ2d& C) ;
  
  Standard_EXPORT   static  gp_Elips To3d(const gp_Ax2& Pos,const gp_Elips2d& E) ;
  
  Standard_EXPORT   static  gp_Hypr To3d(const gp_Ax2& Pos,const gp_Hypr2d& H) ;
  
//! These functions build a 3D geometric entity from a 2D geometric entity. <br>
//! The "X Axis" and the "Y Axis" of the global coordinate <br>
//! system (i.e. 2D space) are lined up respectively with the <br>
//! "X Axis" and "Y Axis" of the 3D coordinate system, Pos. <br>
  Standard_EXPORT   static  gp_Parab To3d(const gp_Ax2& Pos,const gp_Parab2d& Prb) ;





protected:





private:





};


#include <ElCLib.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
