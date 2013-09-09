// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrim_Cone_HeaderFile
#define _BRepPrim_Cone_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _BRepPrim_Revolution_HeaderFile
#include <BRepPrim_Revolution.hxx>
#endif
class Standard_DomainError;
class gp_Ax2;
class gp_Pnt;
class TopoDS_Face;


//! Implement the cone primitive. <br>
class BRepPrim_Cone  : public BRepPrim_Revolution {
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

  //! the STEP definition <br>
//!          Angle = semi-angle of the cone <br>
//!          Position : the coordinate system <br>
//!          Height : height of the cone. <br>
//!          Radius : radius of truncated face at z = 0 <br>
//! <br>
//!          The apex is on z < 0 <br>
//! <br>
//!          Errors : Height < Resolution <br>
//!                    Angle < Resolution / Height <br>
//!                    Angle > PI/2 - Resolution / Height <br>
  Standard_EXPORT   BRepPrim_Cone(const Standard_Real Angle,const gp_Ax2& Position,const Standard_Real Height,const Standard_Real Radius = 0);
  //! infinite cone at origin on Z negative <br>
  Standard_EXPORT   BRepPrim_Cone(const Standard_Real Angle);
  //! infinite cone at Apex on Z negative <br>
  Standard_EXPORT   BRepPrim_Cone(const Standard_Real Angle,const gp_Pnt& Apex);
  //! infinite cone with Axes <br>
  Standard_EXPORT   BRepPrim_Cone(const Standard_Real Angle,const gp_Ax2& Axes);
  //! create a  Cone at origin  on Z axis, of height  H, <br>
//!          radius R1 at Z = 0, R2 at  Z = H, X is  the origin <br>
//!          of angles.  If R1 or  R2 is 0   there is  an apex. <br>
//!          Otherwise, it is a truncated cone. <br>
//! <br>
//!          Error  : R1 and R2  < Resolution <br>
//!                   R1 or R2 negative <br>
//!                   Abs(R1-R2) < Resolution <br>
//!                   H < Resolution <br>
//!                   H negative <br>
  Standard_EXPORT   BRepPrim_Cone(const Standard_Real R1,const Standard_Real R2,const Standard_Real H);
  //! same as above but at a given point <br>
  Standard_EXPORT   BRepPrim_Cone(const gp_Pnt& Center,const Standard_Real R1,const Standard_Real R2,const Standard_Real H);
  //! same as above with given axes system. <br>
  Standard_EXPORT   BRepPrim_Cone(const gp_Ax2& Axes,const Standard_Real R1,const Standard_Real R2,const Standard_Real H);
  //! The surface normal should be directed  towards the <br>
//!          outside. <br>
  Standard_EXPORT   virtual  TopoDS_Face MakeEmptyLateralFace() const;





protected:





private:

  
  Standard_EXPORT     void SetMeridian() ;
  
  Standard_EXPORT     void SetParameters(const Standard_Real R1,const Standard_Real R2,const Standard_Real H) ;


Standard_Real myHalfAngle;
Standard_Real myRadius;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
