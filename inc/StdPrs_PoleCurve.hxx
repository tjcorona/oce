// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdPrs_PoleCurve_HeaderFile
#define _StdPrs_PoleCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Prs3d_Root_HeaderFile
#include <Prs3d_Root.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Prs3d_Presentation;
class Adaptor3d_Curve;
class Prs3d_Drawer;


//! A framework to provide display of Bezier or BSpline curves. <br>
class StdPrs_PoleCurve  : public Prs3d_Root {
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

  //! Defines display of BSpline and Bezier curves. <br>
//! Adds the 3D curve aCurve to the <br>
//! StdPrs_PoleCurve algorithm. This shape is found in <br>
//! the presentation object aPresentation, and its display <br>
//! attributes are set in the attribute manager aDrawer. <br>
//! The curve object from Adaptor3d provides data from <br>
//! a Geom curve. This makes it possible to use the <br>
//! surface in a geometric algorithm. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Adaptor3d_Curve& aCurve,const Handle(Prs3d_Drawer)& aDrawer) ;
  //! returns true if the distance between the point (X,Y,Z) and the <br>
//!          broken line made of the poles is less then aDistance. <br>
  Standard_EXPORT   static  Standard_Boolean Match(const Quantity_Length X,const Quantity_Length Y,const Quantity_Length Z,const Quantity_Length aDistance,const Adaptor3d_Curve& aCurve,const Handle(Prs3d_Drawer)& aDrawer) ;
  //! returns the pole  the most near of the point (X,Y,Z) and <br>
//!          returns its range. The distance between the pole and <br>
//!          (X,Y,Z) must be less then aDistance. If no pole corresponds, 0 is returned. <br>
  Standard_EXPORT   static  Standard_Integer Pick(const Quantity_Length X,const Quantity_Length Y,const Quantity_Length Z,const Quantity_Length aDistance,const Adaptor3d_Curve& aCurve,const Handle(Prs3d_Drawer)& aDrawer) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
