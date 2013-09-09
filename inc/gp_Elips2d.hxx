// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_Elips2d_HeaderFile
#define _gp_Elips2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <gp_Ax22d.hxx>
#include <Standard_Real.hxx>
#include <Standard_Storable.hxx>
#include <Standard_Boolean.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Pnt2d.hxx>
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_ConstructionError;
class gp_Ax2d;
class gp_Ax22d;
class gp_Pnt2d;
class gp_Trsf2d;
class gp_Vec2d;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(gp_Elips2d);


//! Describes an ellipse in the plane (2D space). <br>
//! An ellipse is defined by its major and minor radii and <br>
//! positioned in the plane with a coordinate system (a <br>
//! gp_Ax22d object) as follows: <br>
//! -   the origin of the coordinate system is the center of the ellipse, <br>
//! -   its "X Direction" defines the major axis of the ellipse, and <br>
//! -   its "Y Direction" defines the minor axis of the ellipse. <br>
//! This coordinate system is the "local coordinate system" <br>
//! of the ellipse. Its orientation (direct or indirect) gives an <br>
//! implicit orientation to the ellipse. In this coordinate <br>
//! system, the equation of the ellipse is: <br>
//! X*X / (MajorRadius**2) + Y*Y / (MinorRadius**2) = 1.0 <br>
//! See Also <br>
//! gce_MakeElips2d which provides functions for more <br>
//! complex ellipse constructions <br>
//! Geom2d_Ellipse which provides additional functions for <br>
//! constructing ellipses and works, in particular, with the <br>
//! parametric equations of ellipses <br>
class gp_Elips2d  {

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

  //! Creates an indefinite ellipse. <br>
      gp_Elips2d();
  
//!  Creates an ellipse with the major axis, the major and the <br>
//!  minor radius. The location of the MajorAxis is the center <br>
//!  of the  ellipse. <br>
//!  The sense of parametrization is given by Sense. <br>
//!  Warnings : <br>
//!  It is possible to create an ellipse with <br>
//!  MajorRadius = MinorRadius. <br>
//!  Raises ConstructionError if MajorRadius < MinorRadius or MinorRadius < 0.0 <br>
      gp_Elips2d(const gp_Ax2d& MajorAxis,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const Standard_Boolean Sense = Standard_True);
  //!  Creates an ellipse with radii MajorRadius and <br>
//!   MinorRadius, positioned in the plane by coordinate system A where: <br>
//!   -   the origin of A is the center of the ellipse, <br>
//!   -   the "X Direction" of A defines the major axis of <br>
//!    the ellipse, that is, the major radius MajorRadius <br>
//!    is measured along this axis, and <br>
//!   -   the "Y Direction" of A defines the minor axis of <br>
//!    the ellipse, that is, the minor radius MinorRadius <br>
//!    is measured along this axis, and <br>
//!   -   the orientation (direct or indirect sense) of A <br>
//!    gives the orientation of the ellipse. <br>
//!  Warnings : <br>
//!  It is possible to create an ellipse with <br>
//!  MajorRadius = MinorRadius. <br>
//! Raises ConstructionError if MajorRadius < MinorRadius or MinorRadius < 0.0 <br>
  Standard_EXPORT   gp_Elips2d(const gp_Ax22d& A,const Standard_Real MajorRadius,const Standard_Real MinorRadius);
  //! Modifies this ellipse, by redefining its local coordinate system so that <br>
//! -   its origin becomes P. <br>
  Standard_EXPORT     void SetLocation(const gp_Pnt2d& P) ;
  //! Changes the value of the major radius. <br>
//! Raises ConstructionError if MajorRadius < MinorRadius. <br>
  Standard_EXPORT     void SetMajorRadius(const Standard_Real MajorRadius) ;
  //! Changes the value of the minor radius. <br>
//! Raises ConstructionError if MajorRadius < MinorRadius or MinorRadius < 0.0 <br>
  Standard_EXPORT     void SetMinorRadius(const Standard_Real MinorRadius) ;
  //! Modifies this ellipse, by redefining its local coordinate system so that <br>
//!    it becomes A. <br>
  Standard_EXPORT     void SetAxis(const gp_Ax22d& A) ;
  //! Modifies this ellipse, by redefining its local coordinate system so that <br>
//!   its origin and its "X Direction"  become those <br>
//! of the axis A. The "Y  Direction"  is then <br>
//!   recomputed. The orientation of the local coordinate <br>
//!   system is not modified. <br>
  Standard_EXPORT     void SetXAxis(const gp_Ax2d& A) ;
  //! Modifies this ellipse, by redefining its local coordinate system so that <br>
//!   its origin and its "Y Direction"  become those <br>
//! of the axis A. The "X  Direction"  is then <br>
//!   recomputed. The orientation of the local coordinate <br>
//!   system is not modified. <br>
  Standard_EXPORT     void SetYAxis(const gp_Ax2d& A) ;
  //! Computes the area of the ellipse. <br>
        Standard_Real Area() const;
  
//!  Returns the coefficients of the implicit equation of the ellipse. <br>
//!  A * (X**2) + B * (Y**2) + 2*C*(X*Y) + 2*D*X + 2*E*Y + F = 0. <br>
  Standard_EXPORT     void Coefficients(Standard_Real& A,Standard_Real& B,Standard_Real& C,Standard_Real& D,Standard_Real& E,Standard_Real& F) const;
  
//!  This directrix is the line normal to the XAxis of the ellipse <br>
//!  in the local plane (Z = 0) at a distance d = MajorRadius / e <br>
//!  from the center of the ellipse, where e is the eccentricity of <br>
//!  the ellipse. <br>
//!  This line is parallel to the "YAxis". The intersection point <br>
//!  between directrix1 and the "XAxis" is the location point of the <br>
//!  directrix1. This point is on the positive side of the "XAxis". <br>
//!  Raised if Eccentricity = 0.0. (The ellipse degenerates into a <br>
//!  circle) <br>
        gp_Ax2d Directrix1() const;
  
//!  This line is obtained by the symmetrical transformation <br>
//!  of "Directrix1" with respect to the minor axis of the ellipse. <br>
//!  Raised if Eccentricity = 0.0. (The ellipse degenerates into a <br>
//!  circle). <br>
        gp_Ax2d Directrix2() const;
  
//!  Returns the eccentricity of the ellipse  between 0.0 and 1.0 <br>
//!  If f is the distance between the center of the ellipse and <br>
//!  the Focus1 then the eccentricity e = f / MajorRadius. <br>
//!  Returns 0 if MajorRadius = 0. <br>
        Standard_Real Eccentricity() const;
  
//!  Returns the distance between the center of the ellipse <br>
//!  and focus1 or focus2. <br>
        Standard_Real Focal() const;
  
//!  Returns the first focus of the ellipse. This focus is on the <br>
//!  positive side of the major axis of the ellipse. <br>
        gp_Pnt2d Focus1() const;
  
//!  Returns the second focus of the ellipse. This focus is on the <br>
//!  negative side of the major axis of the ellipse. <br>
        gp_Pnt2d Focus2() const;
  //! Returns the center of the ellipse. <br>
       const gp_Pnt2d& Location() const;
  //! Returns the major radius of the Ellipse. <br>
        Standard_Real MajorRadius() const;
  //! Returns the minor radius of the Ellipse. <br>
        Standard_Real MinorRadius() const;
  
//!  Returns p = (1 - e * e) * MajorRadius where e is the eccentricity <br>
//!  of the ellipse. <br>
//!  Returns 0 if MajorRadius = 0 <br>
        Standard_Real Parameter() const;
  //! Returns the major axis of the ellipse. <br>
       const gp_Ax22d& Axis() const;
  //! Returns the major axis of the ellipse. <br>
        gp_Ax2d XAxis() const;
  //! Returns the minor axis of the ellipse. <br>//! Reverses the direction of the circle. <br>
        gp_Ax2d YAxis() const;
  
        void Reverse() ;
  
        gp_Elips2d Reversed() const;
  //! Returns true if the local coordinate system is direct <br>
//!            and false in the other case. <br>
        Standard_Boolean IsDirect() const;
  
  Standard_EXPORT     void Mirror(const gp_Pnt2d& P) ;
  
//!  Performs the symmetrical transformation of a ellipse with respect <br>
//!  to the point P which is the center of the symmetry <br>
  Standard_EXPORT     gp_Elips2d Mirrored(const gp_Pnt2d& P) const;
  
  Standard_EXPORT     void Mirror(const gp_Ax2d& A) ;
  
//!  Performs the symmetrical transformation of a ellipse with respect <br>
//!  to an axis placement which is the axis of the symmetry. <br>
  Standard_EXPORT     gp_Elips2d Mirrored(const gp_Ax2d& A) const;
  
  Standard_EXPORT     void Rotate(const gp_Pnt2d& P,const Standard_Real Ang) ;
  
  Standard_EXPORT     gp_Elips2d Rotated(const gp_Pnt2d& P,const Standard_Real Ang) const;
  
  Standard_EXPORT     void Scale(const gp_Pnt2d& P,const Standard_Real S) ;
  
//!  Scales a ellipse. S is the scaling value. <br>
  Standard_EXPORT     gp_Elips2d Scaled(const gp_Pnt2d& P,const Standard_Real S) const;
  
  Standard_EXPORT     void Transform(const gp_Trsf2d& T) ;
  
//!  Transforms an ellipse with the transformation T from class Trsf2d. <br>
  Standard_EXPORT     gp_Elips2d Transformed(const gp_Trsf2d& T) const;
  
  Standard_EXPORT     void Translate(const gp_Vec2d& V) ;
  
//!  Translates a ellipse in the direction of the vector V. <br>
//!  The magnitude of the translation is the vector's magnitude. <br>
  Standard_EXPORT     gp_Elips2d Translated(const gp_Vec2d& V) const;
  
  Standard_EXPORT     void Translate(const gp_Pnt2d& P1,const gp_Pnt2d& P2) ;
  
//!  Translates a ellipse from the point P1 to the point P2. <br>
  Standard_EXPORT     gp_Elips2d Translated(const gp_Pnt2d& P1,const gp_Pnt2d& P2) const;
    const gp_Ax22d& _CSFDB_Getgp_Elips2dpos() const { return pos; }
    Standard_Real _CSFDB_Getgp_Elips2dmajorRadius() const { return majorRadius; }
    void _CSFDB_Setgp_Elips2dmajorRadius(const Standard_Real p) { majorRadius = p; }
    Standard_Real _CSFDB_Getgp_Elips2dminorRadius() const { return minorRadius; }
    void _CSFDB_Setgp_Elips2dminorRadius(const Standard_Real p) { minorRadius = p; }



protected:




private: 


gp_Ax22d pos;
Standard_Real majorRadius;
Standard_Real minorRadius;


};


#include <gp_Elips2d.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
