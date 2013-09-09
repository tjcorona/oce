// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_TangentPresentation_HeaderFile
#define _DsgPrs_TangentPresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Prs3d_Presentation;
class Prs3d_Drawer;
class gp_Pnt;
class gp_Dir;


//! A framework to define display of tangents. <br>
class DsgPrs_TangentPresentation  {
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

  //! Adds the point OffsetPoint, the direction aDirection <br>
//! and the length aLength to the presentation object aPresentation. <br>
//! The display attributes of the tangent are defined by <br>
//! the attribute manager aDrawer. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const gp_Pnt& OffsetPoint,const gp_Dir& aDirection,const Standard_Real aLength) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
