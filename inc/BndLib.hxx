// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BndLib_HeaderFile
#define _BndLib_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <Standard_Real.hxx>
class gp_Lin;
class Bnd_Box;
class gp_Lin2d;
class Bnd_Box2d;
class gp_Circ;
class gp_Circ2d;
class gp_Elips;
class gp_Elips2d;
class gp_Parab;
class gp_Parab2d;
class gp_Hypr;
class gp_Hypr2d;
class gp_Cylinder;
class gp_Cone;
class gp_Sphere;
class gp_Torus;
class BndLib_Add3dCurve;
class BndLib_Add2dCurve;
class BndLib_AddSurface;


//! The BndLib package provides functions to add a geometric primitive to a bounding box. <br>
//!     Note: these functions work with gp objects, optionally <br>
//!     limited by parameter values. If the curves and surfaces <br>
//!     provided by the gp package are not explicitly <br>
//!     parameterized, they still have an implicit parameterization, <br>
//!     similar to that which they infer for the equivalent Geom or Geom2d objects. <br>
//!     Add : Package to compute the bounding boxes for elementary <br>
//!           objects from gp in 2d and 3d . <br>
//! <br>
//!     AddCurve2d : A class to compute the bounding box for a curve <br>
//!     in 2d dimensions ;the curve is defined by a tool <br>
//! <br>
//!     AddCurve : A class to compute the bounding box for a curve <br>
//!     in 3d dimensions ;the curve is defined by a tool <br>
//! <br>
//!     AddSurface : A class to compute the bounding box for a surface. <br>
//!     The surface is defined by a tool for the geometry and another <br>
//!     tool for the topology (only the edges in 2d dimensions) <br>
class BndLib  {
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

  //! Adds the segment of the line L limited by the two <br>
//! parameter values P1 and P2, to the bounding box B, and <br>
//! then enlarges B by the tolerance value Tol. <br>
//! Tol is the tolerance value to enlarge the minimun and maximum dimension <br>
//! P1 and P2 may represent infinite values. <br>
//! Exceptions <br>
//! Standard_Failure if P1 and P2 are either two negative <br>
//! infinite real numbers, or two positive infinite real numbers. <br>
  Standard_EXPORT   static  void Add(const gp_Lin& L,const Standard_Real P1,const Standard_Real P2,const Standard_Real Tol,Bnd_Box& B) ;
  
  Standard_EXPORT   static  void Add(const gp_Lin2d& L,const Standard_Real P1,const Standard_Real P2,const Standard_Real Tol,Bnd_Box2d& B) ;
  
  Standard_EXPORT   static  void Add(const gp_Circ& C,const Standard_Real Tol,Bnd_Box& B) ;
  //!  P2-P1 can be in [0,2*pi] <br>
  Standard_EXPORT   static  void Add(const gp_Circ& C,const Standard_Real P1,const Standard_Real P2,const Standard_Real Tol,Bnd_Box& B) ;
  
  Standard_EXPORT   static  void Add(const gp_Circ2d& C,const Standard_Real Tol,Bnd_Box2d& B) ;
  //! Adds the circle C, or the arc of the circle C <br>
//! limited by the two parameter values P1 and P2, <br>
//! to the bounding box B, and then enlarges B by the tolerance value Tol. <br>
//! P2-P1 can be in [0,2*pi] <br>
  Standard_EXPORT   static  void Add(const gp_Circ2d& C,const Standard_Real P1,const Standard_Real P2,const Standard_Real Tol,Bnd_Box2d& B) ;
  
  Standard_EXPORT   static  void Add(const gp_Elips& C,const Standard_Real Tol,Bnd_Box& B) ;
  //!  P2-P1 can be in [0,2*pi] <br>
  Standard_EXPORT   static  void Add(const gp_Elips& C,const Standard_Real P1,const Standard_Real P2,const Standard_Real Tol,Bnd_Box& B) ;
  
  Standard_EXPORT   static  void Add(const gp_Elips2d& C,const Standard_Real Tol,Bnd_Box2d& B) ;
  //! Adds the ellipse E, or the arc of the ellipse E <br>
//! limited by the two parameter values P1 and P2, <br>
//! to the bounding box B, and then enlarges B by the tolerance value Tol. <br>
//! P2-P1 can be in [0,2*pi] <br>
  Standard_EXPORT   static  void Add(const gp_Elips2d& C,const Standard_Real P1,const Standard_Real P2,const Standard_Real Tol,Bnd_Box2d& B) ;
  
  Standard_EXPORT   static  void Add(const gp_Parab& P,const Standard_Real P1,const Standard_Real P2,const Standard_Real Tol,Bnd_Box& B) ;
  //! Adds the arc of the parabola P limited by the two <br>
//! parameter values P1 and P2, to the bounding box B, and <br>
//! then enlarges B by the tolerance value Tol. <br>
//! P1 and P2 may represent infinite values. <br>
//! Exceptions <br>
//! Standard_Failure if P1 and P2 are either two negative <br>
//! infinite real numbers, or two positive infinite real numbers. <br>
  Standard_EXPORT   static  void Add(const gp_Parab2d& P,const Standard_Real P1,const Standard_Real P2,const Standard_Real Tol,Bnd_Box2d& B) ;
  
  Standard_EXPORT   static  void Add(const gp_Hypr& H,const Standard_Real P1,const Standard_Real P2,const Standard_Real Tol,Bnd_Box& B) ;
  //! Adds the arc of the branch of hyperbola H limited by the <br>
//! two parameter values P1 and P2, to the bounding box B, <br>
//! and then enlarges B by the tolerance value Tol. <br>
//! P1 and P2 may represent infinite values. <br>
//! Exceptions <br>
//! Standard_Failure if P1 and P2 are either two negative <br>
//! infinite real numbers, or two positive infinite real numbers. <br>
  Standard_EXPORT   static  void Add(const gp_Hypr2d& H,const Standard_Real P1,const Standard_Real P2,const Standard_Real Tol,Bnd_Box2d& B) ;
  //!  UMax -UMin can be in [0,2*pi] <br>
  Standard_EXPORT   static  void Add(const gp_Cylinder& S,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax,const Standard_Real Tol,Bnd_Box& B) ;
  //! Adds to the bounding box B, the patch of the cylinder S limited <br>
//! -   in the v parametric direction, by the two parameter <br>
//!   values VMin and VMax <br>
//! -   and optionally in the u parametric direction, by the two <br>
//!   parameter values UMin and UMax. <br>
//! B is then enlarged by the tolerance value Tol. <br>
//! VMin and VMax may represent infinite values. <br>
//! Exceptions <br>
//! Standard_Failure if VMin and VMax are either two <br>
//! negative infinite real numbers, or two positive infinite real numbers. <br>
  Standard_EXPORT   static  void Add(const gp_Cylinder& S,const Standard_Real VMin,const Standard_Real VMax,const Standard_Real Tol,Bnd_Box& B) ;
  //!  UMax-UMin can be in [0,2*pi] <br>
  Standard_EXPORT   static  void Add(const gp_Cone& S,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax,const Standard_Real Tol,Bnd_Box& B) ;
  //! Adds to the bounding box B, the patch of the cone S limited <br>
//! -   in the v parametric direction, by the two parameter <br>
//!   values VMin and VMax <br>
//! -   and optionally in the u parametric direction, by the two <br>
//!   parameter values UMin and UMax, <br>
//! B is then enlarged by the tolerance value Tol. <br>
//! VMin and VMax may represent infinite values. <br>
//! Exceptions <br>
//! Standard_Failure if VMin and VMax are either two <br>
//! negative infinite real numbers, or two positive infinite real numbers. <br>
  Standard_EXPORT   static  void Add(const gp_Cone& S,const Standard_Real VMin,const Standard_Real VMax,const Standard_Real Tol,Bnd_Box& B) ;
  
  Standard_EXPORT   static  void Add(const gp_Sphere& S,const Standard_Real Tol,Bnd_Box& B) ;
  //! Adds to the bounding box B the sphere S, or <br>
//! -   the patch of the sphere S, limited in the u parametric <br>
//!   direction, by the two parameter values UMin and UMax, <br>
//!   and in the v parametric direction, by the two parameter <br>
//!   values VMin and VMax. <br>
//! B is then enlarged by the tolerance value Tol. <br>
//! UMax-UMin can be in [0,2*pi] <br>
//!           VMin,VMax can be [-pi/2,pi/2] <br>
  Standard_EXPORT   static  void Add(const gp_Sphere& S,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax,const Standard_Real Tol,Bnd_Box& B) ;
  
  Standard_EXPORT   static  void Add(const gp_Torus& P,const Standard_Real Tol,Bnd_Box& B) ;
  //! Adds to the bounding box B <br>
//! -   the torus S, or <br>
//! -   the patch of the torus S, limited in the u parametric <br>
//!   direction, by the two parameter values UMin and UMax, <br>
//!   and in the v parametric direction, by the two parameter <br>
//!   values VMin and VMax. <br>
//! B is then enlarged by the tolerance value Tol. <br>
//! UMax-UMin can be in [0,2*pi], <br>
//!           VMin,VMax can be [-pi/2,pi/2] <br>
  Standard_EXPORT   static  void Add(const gp_Torus& P,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax,const Standard_Real Tol,Bnd_Box& B) ;





protected:





private:




friend class BndLib_Add3dCurve;
friend class BndLib_Add2dCurve;
friend class BndLib_AddSurface;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
