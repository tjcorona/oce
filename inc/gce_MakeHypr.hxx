// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gce_MakeHypr_HeaderFile
#define _gce_MakeHypr_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Hypr_HeaderFile
#include <gp_Hypr.hxx>
#endif
#ifndef _gce_Root_HeaderFile
#include <gce_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class StdFail_NotDone;
class gp_Ax2;
class gp_Pnt;
class gp_Hypr;


//!This class implements the following algorithms used to <br>
//!          create Hyperbola from gp. <br>
//!          * Create an Hyperbola from its center, and two points: <br>
//!            one on its axis of symmetry giving the major radius, the <br>
//!            other giving the value of the small radius. <br>
//!            The three points give the plane of the hyperbola. <br>
//!          * Create an hyperbola from its axisplacement and its <br>
//!            MajorRadius and its MinorRadius. <br>
//! <br>
//! <br>
//!                         ^YAxis <br>
//!                         | <br>
//!                  FirstConjugateBranch <br>
//!                         | <br>
//!        Other            |                Main <br>
//!   --------------------- C ------------------------------>XAxis <br>
//!        Branch           |                Branch <br>
//!                         | <br>
//!                         | <br>
//!                   SecondConjugateBranch <br>
//!                         | <br>
class gce_MakeHypr  : public gce_Root {
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

  
//!  A2 is the local coordinate system of the hyperbola. <br>
//!  In the local coordinates system A2 the equation of the <br>
//!  hyperbola is : <br>
//!  X*X / MajorRadius*MajorRadius - Y*Y / MinorRadius*MinorRadius = 1.0 <br>
//!  It is not forbidden to create an Hyperbola with MajorRadius = <br>
//!  MinorRadius. <br>
//!  For the hyperbola the MajorRadius can be lower than the <br>
//!  MinorRadius. <br>
//!  The status is "NegativeRadius" if MajorRadius < 0.0 and <br>
//!  "InvertRadius" if MinorRadius > MajorRadius. <br>
  Standard_EXPORT   gce_MakeHypr(const gp_Ax2& A2,const Standard_Real MajorRadius,const Standard_Real MinorRadius);
  //! Constructs a hyperbola <br>
//!   -   centered on the point Center, where: <br>
//!  -   the plane of the hyperbola is defined by Center, S1 and S2, <br>
//!   -   its major axis is defined by Center and S1, <br>
//!   -   its major radius is the distance between Center and S1, and <br>
//! -   its minor radius is the distance between S2 and the major axis. <br>
//!	Warning <br>
//! If an error occurs (that is, when IsDone returns <br>
//! false), the Status function returns: <br>
//! -   gce_NegativeRadius if MajorRadius is less than 0.0; <br>
//! -   gce_InvertRadius if: <br>
//!   -   the major radius (computed with Center, S1) is <br>
//!    less than the minor radius (computed with Center, S1 and S2), or <br>
//!   -   MajorRadius is less than MinorRadius; or <br>
//! -   gce_ColinearPoints if S1, S2 and Center are collinear. <br>
  Standard_EXPORT   gce_MakeHypr(const gp_Pnt& S1,const gp_Pnt& S2,const gp_Pnt& Center);
  //! Returns the constructed hyperbola. <br>
//! Exceptions StdFail_NotDone if no hyperbola is constructed. <br>
  Standard_EXPORT    const gp_Hypr& Value() const;
  
  Standard_EXPORT    const gp_Hypr& Operator() const;
Standard_EXPORT operator gp_Hypr() const;





protected:





private:



gp_Hypr TheHypr;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
