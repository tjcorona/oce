// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_Dir2d_HeaderFile
#define _gp_Dir2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <gp_XY.hxx>
#include <Standard_Storable.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_ConstructionError;
class Standard_DomainError;
class Standard_OutOfRange;
class gp_Vec2d;
class gp_XY;
class gp_Ax2d;
class gp_Trsf2d;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(gp_Dir2d);

//! Describes a unit vector in the plane (2D space). This unit <br>
//! vector is also called "Direction". <br>
//! See Also <br>
//! gce_MakeDir2d which provides functions for more <br>
//! complex unit vector constructions <br>
//! Geom2d_Direction which provides additional functions <br>
//! for constructing unit vectors and works, in particular, with <br>
//! the parametric equations of unit vectors <br>
class gp_Dir2d  {

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

  //! Creates a direction corresponding to X axis. <br>
      gp_Dir2d();
  //! Normalizes the vector V and creates a Direction. Raises ConstructionError if V.Magnitude() <= Resolution from gp. <br>
      gp_Dir2d(const gp_Vec2d& V);
  //! Creates a Direction from a doublet of coordinates. Raises ConstructionError if Coord.Modulus() <= Resolution from gp. <br>
      gp_Dir2d(const gp_XY& Coord);
  //! Creates a Direction with its 2 cartesian coordinates. Raises ConstructionError if Sqrt(Xv*Xv + Yv*Yv) <= Resolution from gp. <br>
      gp_Dir2d(const Standard_Real Xv,const Standard_Real Yv);
  
//!      For this unit vector, assigns: <br>
//! the value Xi to: <br>
//!   -   the X coordinate if Index is 1, or <br>
//!   -   the Y coordinate if Index is 2, and then normalizes it. <br>
//! Warning <br>
//! Remember that all the coordinates of a unit vector are <br>
//! implicitly modified when any single one is changed directly. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is not 1 or 2. <br>
//! Standard_ConstructionError if either of the following <br>
//! is less than or equal to gp::Resolution(): <br>
//! -   Sqrt(Xv*Xv + Yv*Yv), or <br>
//! -   the modulus of the number pair formed by the new <br>
//!   value Xi and the other coordinate of this vector that <br>
//!   was not directly modified. <br>
//!  Raises OutOfRange if Index != {1, 2}. <br>
        void SetCoord(const Standard_Integer Index,const Standard_Real Xi) ;
  
//!      For this unit vector, assigns: <br>
//! -   the values Xv and Yv to its two coordinates, <br>
//! Warning <br>
//! Remember that all the coordinates of a unit vector are <br>
//! implicitly modified when any single one is changed directly. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is not 1 or 2. <br>
//! Standard_ConstructionError if either of the following <br>
//! is less than or equal to gp::Resolution(): <br>
//! -   Sqrt(Xv*Xv + Yv*Yv), or <br>
//! -   the modulus of the number pair formed by the new <br>
//!   value Xi and the other coordinate of this vector that <br>
//!   was not directly modified. <br>
//!  Raises OutOfRange if Index != {1, 2}. <br>
        void SetCoord(const Standard_Real Xv,const Standard_Real Yv) ;
  
//! Assigns the given value to the X coordinate of this unit   vector, <br>
//!   and then normalizes it. <br>
//! Warning <br>
//! Remember that all the coordinates of a unit vector are <br>
//! implicitly modified when any single one is changed directly. <br>
//! Exceptions <br>
//! Standard_ConstructionError if either of the following <br>
//! is less than or equal to gp::Resolution(): <br>
//! -   the modulus of Coord, or <br>
//! -   the modulus of the number pair formed from the new <br>
//!   X or Y coordinate and the other coordinate of this <br>
//!   vector that was not directly modified. <br>
        void SetX(const Standard_Real X) ;
  
//! Assigns  the given value to the Y coordinate of this unit   vector, <br>
//!   and then normalizes it. <br>
//! Warning <br>
//! Remember that all the coordinates of a unit vector are <br>
//! implicitly modified when any single one is changed directly. <br>
//! Exceptions <br>
//! Standard_ConstructionError if either of the following <br>
//! is less than or equal to gp::Resolution(): <br>
//! -   the modulus of Coord, or <br>
//! -   the modulus of the number pair formed from the new <br>
//!   X or Y coordinate and the other coordinate of this <br>
//!   vector that was not directly modified. <br>
        void SetY(const Standard_Real Y) ;
  
//! Assigns: <br>
//! -   the two coordinates of Coord to this unit vector, <br>
//!   and then normalizes it. <br>
//! Warning <br>
//! Remember that all the coordinates of a unit vector are <br>
//! implicitly modified when any single one is changed directly. <br>
//! Exceptions <br>
//! Standard_ConstructionError if either of the following <br>
//! is less than or equal to gp::Resolution(): <br>
//! -   the modulus of Coord, or <br>
//! -   the modulus of the number pair formed from the new <br>
//!   X or Y coordinate and the other coordinate of this <br>
//!   vector that was not directly modified. <br>
        void SetXY(const gp_XY& Coord) ;
  
//!  For this unit vector returns the coordinate of range Index : <br>
//!  Index = 1 => X is returned <br>
//!  Index = 2 => Y is returned <br>
//! Raises OutOfRange if Index != {1, 2}. <br>
        Standard_Real Coord(const Standard_Integer Index) const;
  //! For this unit vector returns its two coordinates Xv and Yv. <br>
//! Raises OutOfRange if Index != {1, 2}. <br>
        void Coord(Standard_Real& Xv,Standard_Real& Yv) const;
  //! For this unit vector, returns its X coordinate. <br>
        Standard_Real X() const;
  //! For this unit vector, returns its Y coordinate. <br>
        Standard_Real Y() const;
  //! For this unit vector, returns its two coordinates as a number pair. <br>//! Comparison between Directions <br>
//!  The precision value is an input data. <br>
       const gp_XY& XY() const;
  
//!  Returns True if the two vectors have the same direction <br>
//! i.e. the angle between this unit vector and the <br>
//! unit vector Other is less than or equal to AngularTolerance. <br>
        Standard_Boolean IsEqual(const gp_Dir2d& Other,const Standard_Real AngularTolerance) const;
  
//!  Returns True if the angle between this unit vector and the <br>
//! unit vector Other is equal to Pi/2 or -Pi/2 (normal) <br>
//! i.e. Abs(Abs(<me>.Angle(Other)) - PI/2.) <= AngularTolerance <br>
        Standard_Boolean IsNormal(const gp_Dir2d& Other,const Standard_Real AngularTolerance) const;
  
//!  Returns True if the angle between this unit vector and the <br>
//! unit vector Other is equal to Pi or -Pi (opposite). <br>
//! i.e.  PI - Abs(<me>.Angle(Other)) <= AngularTolerance <br>
        Standard_Boolean IsOpposite(const gp_Dir2d& Other,const Standard_Real AngularTolerance) const;
  
//!  returns true if if the angle between this unit vector and unit <br>
//! vector Other is equal to 0, Pi or -Pi. <br>
//! i.e.  Abs(Angle(<me>, Other)) <= AngularTolerance or <br>
//!  PI - Abs(Angle(<me>, Other)) <= AngularTolerance <br>
        Standard_Boolean IsParallel(const gp_Dir2d& Other,const Standard_Real AngularTolerance) const;
  
//!  Computes the angular value in radians between <me> and <br>
//!  <Other>. Returns the angle in the range [-PI, PI]. <br>
  Standard_EXPORT     Standard_Real Angle(const gp_Dir2d& Other) const;
  
//!  Computes the cross product between two directions. <br>
        Standard_Real Crossed(const gp_Dir2d& Right) const;
      Standard_Real operator ^(const gp_Dir2d& Right) const
{
  return Crossed(Right);
}
  //! Computes the scalar product <br>
        Standard_Real Dot(const gp_Dir2d& Other) const;
      Standard_Real operator *(const gp_Dir2d& Other) const
{
  return Dot(Other);
}
  
        void Reverse() ;
  //! Reverses the orientation of a direction <br>
        gp_Dir2d Reversed() const;
      gp_Dir2d operator -() const
{
  return Reversed();
}
  
  Standard_EXPORT     void Mirror(const gp_Dir2d& V) ;
  
//!  Performs the symmetrical transformation of a direction <br>
//!  with respect to the direction V which is the center of <br>
//!  the  symmetry. <br>
  Standard_EXPORT     gp_Dir2d Mirrored(const gp_Dir2d& V) const;
  
  Standard_EXPORT     void Mirror(const gp_Ax2d& A) ;
  
//!  Performs the symmetrical transformation of a direction <br>
//!  with respect to an axis placement which is the axis <br>
//!  of the symmetry. <br>
  Standard_EXPORT     gp_Dir2d Mirrored(const gp_Ax2d& A) const;
  
        void Rotate(const Standard_Real Ang) ;
  
//!  Rotates a direction.  Ang is the angular value of <br>
//!  the rotation in radians. <br>
        gp_Dir2d Rotated(const Standard_Real Ang) const;
  
  Standard_EXPORT     void Transform(const gp_Trsf2d& T) ;
  
//!  Transforms a direction with the "Trsf" T. <br>
//! Warnings : <br>
//!  If the scale factor of the "Trsf" T is negative then the <br>
//!  direction <me> is reversed. <br>
        gp_Dir2d Transformed(const gp_Trsf2d& T) const;
    const gp_XY& _CSFDB_Getgp_Dir2dcoord() const { return coord; }



protected:




private: 


gp_XY coord;


};


#include <gp_Dir2d.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
