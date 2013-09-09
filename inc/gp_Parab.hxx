// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_Parab_HeaderFile
#define _gp_Parab_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <gp_Ax2.hxx>
#include <Standard_Real.hxx>
#include <Standard_Storable.hxx>
#include <gp_Ax1.hxx>
#include <gp_Pnt.hxx>
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_ConstructionError;
class gp_Ax2;
class gp_Ax1;
class gp_Pnt;
class gp_Trsf;
class gp_Vec;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(gp_Parab);


//! Describes a parabola in 3D space. <br>
//! A parabola is defined by its focal length (that is, the <br>
//! distance between its focus and apex) and positioned in <br>
//! space with a coordinate system (a gp_Ax2 object) <br>
//! where: <br>
//! -   the origin of the coordinate system is on the apex of <br>
//!   the parabola, <br>
//! -   the "X Axis" of the coordinate system is the axis of <br>
//! symmetry; the parabola is on the positive side of this axis, and <br>
//! -   the origin, "X Direction" and "Y Direction" of the <br>
//!   coordinate system define the plane of the parabola. <br>
//! The equation of the parabola in this coordinate system, <br>
//! which is the "local coordinate system" of the parabola, is: <br>
//! Y**2 = (2*P) * X. <br>
//! where P, referred to as the parameter of the parabola, is <br>
//! the distance between the focus and the directrix (P is <br>
//! twice the focal length). <br>
//! The "main Direction" of the local coordinate system gives <br>
//! the normal vector to the plane of the parabola. <br>
//! See Also <br>
//! gce_MakeParab which provides functions for more <br>
//! complex parabola constructions <br>
//! Geom_Parabola which provides additional functions for <br>
//! constructing parabolas and works, in particular, with the <br>
//! parametric equations of parabolas <br>
class gp_Parab  {

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

  //! Creates an indefinite Parabola. <br>
      gp_Parab();
  
//!  Creates a parabola with its local coordinate system "A2" <br>
//!  and it's focal length "Focal". <br>
//!  The XDirection of A2 defines the axis of symmetry of the <br>
//!  parabola. The YDirection of A2 is parallel to the directrix <br>
//!  of the parabola. The Location point of A2 is the vertex of <br>
//!  the parabola <br>
//! Raises ConstructionError if Focal < 0.0 <br>//! Raised if Focal < 0.0 <br>
      gp_Parab(const gp_Ax2& A2,const Standard_Real Focal);
  
//!  D is the directrix of the parabola and F the focus point. <br>
//!  The symmetry axis (XAxis) of the parabola is normal to the <br>
//!  directrix and pass through the focus point F, but its <br>
//!  location point is the vertex of the parabola. <br>
//!  The YAxis of the parabola is parallel to D and its location <br>
//!  point is the vertex of the parabola. The normal to the plane <br>
//!  of the parabola is the cross product between the XAxis and the <br>
//!  YAxis. <br>
      gp_Parab(const gp_Ax1& D,const gp_Pnt& F);
  //! Modifies this parabola by redefining its local coordinate system so that <br>
//! -   its origin and "main Direction" become those of the <br>
//!   axis A1 (the "X Direction" and "Y Direction" are then <br>
//!   recomputed in the same way as for any gp_Ax2) <br>
//!  Raises ConstructionError if the direction of A1 is parallel to the previous <br>
//!  XAxis of the parabola. <br>
        void SetAxis(const gp_Ax1& A1) ;
  //! Changes the focal distance of the parabola. <br>
//!  Raises ConstructionError if Focal < 0.0 <br>
        void SetFocal(const Standard_Real Focal) ;
  
//!  Changes the location of the parabola. It is the vertex of <br>
//!  the parabola. <br>
        void SetLocation(const gp_Pnt& P) ;
  //! Changes the local coordinate system of the parabola. <br>
  Standard_EXPORT     void SetPosition(const gp_Ax2& A2) ;
  
//!  Returns the main axis of the parabola. <br>
//!  It is the axis normal to the plane of the parabola passing <br>
//!  through the vertex of the parabola. <br>
       const gp_Ax1& Axis() const;
  //! Computes the directrix of this parabola. <br>
//! The directrix is: <br>
//! -   a line parallel to the "Y Direction" of the local <br>
//!   coordinate system of this parabola, and <br>
//! -   located on the negative side of the axis of symmetry, <br>
//!   at a distance from the apex which is equal to the focal <br>
//!   length of this parabola. <br>
//! The directrix is returned as an axis (a gp_Ax1 object), <br>
//! the origin of which is situated on the "X Axis" of this parabola. <br>
        gp_Ax1 Directrix() const;
  
//!  Returns the distance between the vertex and the focus <br>
//!  of the parabola. <br>
        Standard_Real Focal() const;
  //! -   Computes the focus of the parabola. <br>
        gp_Pnt Focus() const;
  
//!  Returns the vertex of the parabola. It is the "Location" <br>
//!  point of the coordinate system of the parabola. <br>
       const gp_Pnt& Location() const;
  
//!  Computes the parameter of the parabola. <br>
//!  It is the distance between the focus and the directrix of <br>
//!  the parabola. This distance is twice the focal length. <br>
        Standard_Real Parameter() const;
  
//!  Returns the local coordinate system of the parabola. <br>
       const gp_Ax2& Position() const;
  
//!  Returns the symmetry axis of the parabola. The location point <br>
//!  of the axis is the vertex of the parabola. <br>
        gp_Ax1 XAxis() const;
  
//!  It is an axis parallel to the directrix of the parabola. <br>
//!  The location point of this axis is the vertex of the parabola. <br>
        gp_Ax1 YAxis() const;
  
  Standard_EXPORT     void Mirror(const gp_Pnt& P) ;
  
//!  Performs the symmetrical transformation of a parabola <br>
//!  with respect to the point P which is the center of the <br>
//!  symmetry. <br>
  Standard_EXPORT     gp_Parab Mirrored(const gp_Pnt& P) const;
  
  Standard_EXPORT     void Mirror(const gp_Ax1& A1) ;
  
//!  Performs the symmetrical transformation of a parabola <br>
//!  with respect to an axis placement which is the axis of <br>
//!  the symmetry. <br>
  Standard_EXPORT     gp_Parab Mirrored(const gp_Ax1& A1) const;
  
  Standard_EXPORT     void Mirror(const gp_Ax2& A2) ;
  
//!  Performs the symmetrical transformation of a parabola <br>
//!  with respect to a plane. The axis placement A2 locates <br>
//!  the plane of the symmetry (Location, XDirection, YDirection). <br>
  Standard_EXPORT     gp_Parab Mirrored(const gp_Ax2& A2) const;
  
        void Rotate(const gp_Ax1& A1,const Standard_Real Ang) ;
  
//!  Rotates a parabola. A1 is the axis of the rotation. <br>
//!  Ang is the angular value of the rotation in radians. <br>
        gp_Parab Rotated(const gp_Ax1& A1,const Standard_Real Ang) const;
  
        void Scale(const gp_Pnt& P,const Standard_Real S) ;
  
//!  Scales a parabola. S is the scaling value. <br>
//!  If S is negative the direction of the symmetry axis <br>
//!  XAxis is reversed and the direction of the YAxis too. <br>
        gp_Parab Scaled(const gp_Pnt& P,const Standard_Real S) const;
  
        void Transform(const gp_Trsf& T) ;
  
//!  Transforms a parabola with the transformation T from class Trsf. <br>
        gp_Parab Transformed(const gp_Trsf& T) const;
  
        void Translate(const gp_Vec& V) ;
  
//!  Translates a parabola in the direction of the vector V. <br>
//!  The magnitude of the translation is the vector's magnitude. <br>
        gp_Parab Translated(const gp_Vec& V) const;
  
        void Translate(const gp_Pnt& P1,const gp_Pnt& P2) ;
  
//!  Translates a parabola from the point P1 to the point P2. <br>
        gp_Parab Translated(const gp_Pnt& P1,const gp_Pnt& P2) const;
    const gp_Ax2& _CSFDB_Getgp_Parabpos() const { return pos; }
    Standard_Real _CSFDB_Getgp_ParabfocalLength() const { return focalLength; }
    void _CSFDB_Setgp_ParabfocalLength(const Standard_Real p) { focalLength = p; }



protected:




private: 


gp_Ax2 pos;
Standard_Real focalLength;


};


#include <gp_Parab.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
