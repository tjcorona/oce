// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs2d_Point_HeaderFile
#define _Prs2d_Point_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs2d_Point_HeaderFile
#include <Handle_Prs2d_Point.hxx>
#endif

#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _Aspect_TypeOfMarker_HeaderFile
#include <Aspect_TypeOfMarker.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Graphic2d_Line_HeaderFile
#include <Graphic2d_Line.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
class Graphic2d_GraphicObject;
class gp_Pnt2d;
class Graphic2d_Drawer;


//! Constructs presentable and selectable Point. <br>
//!          It's displayed as a definite type Marker from <br>
//!          Aspect_TypeOfMarker <br>
class Prs2d_Point : public Graphic2d_Line {

public:

  //! Initializes the Point defined <aPnt> <br>
  Standard_EXPORT   Prs2d_Point(const Handle(Graphic2d_GraphicObject)& aGO,const gp_Pnt2d& aPnt,const Aspect_TypeOfMarker aTOM,const Quantity_Length aWSize = 2.0,const Quantity_Length aHSize = 2.0,const Quantity_PlaneAngle anAngle = 0.0);
  //! Modifies the Point by redefining location <aPnt> <br>
  Standard_EXPORT     void SetPoint(const gp_Pnt2d& aPnt) ;
  //! Modifies the Point by redefining type of marker <br>
  Standard_EXPORT     void SetMarker(const Aspect_TypeOfMarker aTOM) ;
  //! Sets the map index of the marker <br>
  Standard_EXPORT     void SetIndex(const Standard_Integer anInd) ;
  //! Returns the location of the Point <br>
  Standard_EXPORT     gp_Pnt2d Point() const;
  //! Returns the type of marker of the Point <br>
  Standard_EXPORT     Aspect_TypeOfMarker Marker() const;
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;




  DEFINE_STANDARD_RTTI(Prs2d_Point)

protected:

  //! Draws the angle <me>. <br>
  Standard_EXPORT     void Draw(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Draws element <anIndex> of the point <me>. <br>
  Standard_EXPORT   virtual  void DrawElement(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Draws vertex <anIndex> of the point <me>. <br>
  Standard_EXPORT   virtual  void DrawVertex(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Returns Standard_True if the point <me> is picked, <br>
//!	    Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean Pick(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;



private: 


gp_Pnt2d myPoint;
Aspect_TypeOfMarker myTOM;
Standard_Integer myIndMark;
Quantity_Length myWSize;
Quantity_Length myHSize;
Quantity_PlaneAngle myAngle;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif