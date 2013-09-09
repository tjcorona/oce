// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_Pipe_HeaderFile
#define _BRepFill_Pipe_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _gp_Trsf_HeaderFile
#include <gp_Trsf.hxx>
#endif
#ifndef _Handle_BRepFill_LocationLaw_HeaderFile
#include <Handle_BRepFill_LocationLaw.hxx>
#endif
#ifndef _Handle_TopTools_HArray2OfShape_HeaderFile
#include <Handle_TopTools_HArray2OfShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _GeomFill_Trihedron_HeaderFile
#include <GeomFill_Trihedron.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class BRepFill_LocationLaw;
class TopTools_HArray2OfShape;
class Standard_DomainError;
class StdFail_NotDone;
class TopoDS_Wire;
class TopoDS_Shape;
class TopoDS_Face;
class TopoDS_Edge;
class TopoDS_Vertex;
class gp_Pnt;


//! Create a  shape by sweeping a shape  (the profile) <br>
//!          along a wire (the spine). <br>
//! <br>
//!          For each edge  or vertex from the spine  the  user <br>
//!          may ask for the shape generated from each subshape <br>
//!          of the profile. <br>
class BRepFill_Pipe  {
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

  
  Standard_EXPORT   BRepFill_Pipe();
  
  Standard_EXPORT   BRepFill_Pipe(const TopoDS_Wire& Spine,const TopoDS_Shape& Profile,const GeomFill_Trihedron aMode = GeomFill_IsCorrectedFrenet,const Standard_Boolean ForceApproxC1 = Standard_False,const Standard_Boolean GeneratePartCase = Standard_False);
  
  Standard_EXPORT     void Perform(const TopoDS_Wire& Spine,const TopoDS_Shape& Profile,const Standard_Boolean GeneratePartCase = Standard_False) ;
  
  Standard_EXPORT    const TopoDS_Shape& Spine() const;
  
  Standard_EXPORT    const TopoDS_Shape& Profile() const;
  
  Standard_EXPORT    const TopoDS_Shape& Shape() const;
  
  Standard_EXPORT    const TopoDS_Shape& FirstShape() const;
  
  Standard_EXPORT    const TopoDS_Shape& LastShape() const;
  //! Returns the face created from an edge of the spine <br>
//!          and an edge of the profile. <br>//! if the edges are not in the spine or the profile <br>
  Standard_EXPORT     TopoDS_Face Face(const TopoDS_Edge& ESpine,const TopoDS_Edge& EProfile) ;
  //! Returns the edge created from an edge of the spine <br>
//!          and a vertex of the profile. <br>//! if the edge or the vertex are not in  the spine or <br>
//!          the profile. <br>
  Standard_EXPORT     TopoDS_Edge Edge(const TopoDS_Edge& ESpine,const TopoDS_Vertex& VProfile) ;
  //! Returns  the shape created from the profile at the <br>
//!          position of the vertex VSpine. <br>//! if the vertex is not in the Spine <br>
  Standard_EXPORT     TopoDS_Shape Section(const TopoDS_Vertex& VSpine) const;
  //! Create a Wire by sweeping the Point along the <spine> <br>//! if the <Spine> is undefined <br>
  Standard_EXPORT     TopoDS_Wire PipeLine(const gp_Pnt& Point) const;





protected:





private:

  //! Auxiliary  recursive  method  used  to  build  the <br>
//!          result. <br>
  Standard_EXPORT     TopoDS_Shape MakeShape(const TopoDS_Shape& S,const TopoDS_Shape& FirstShape,const TopoDS_Shape& LastShape) ;
  //! Auxiliary recursive method used to find the edge's index <br>
  Standard_EXPORT     Standard_Integer FindEdge(const TopoDS_Shape& S,const TopoDS_Edge& E,Standard_Integer& Init) const;
  
  Standard_EXPORT     Standard_Integer FindVertex(const TopoDS_Shape& S,const TopoDS_Vertex& V,Standard_Integer& Init) const;
  
  Standard_EXPORT     void DefineRealSegmax() ;
  //! Performs sharing coincident faces in theShape. Also modifies <br>
//!          myFaces, mySections and myEdges to contain shared shapes. <br>
//!          Returns the shared shape. If theShape is not modified this <br>
//!          method returns it. <br>
  Standard_EXPORT     TopoDS_Shape ShareFaces(const TopoDS_Shape& theShape,const Standard_Integer theInitialFacesLen,const Standard_Integer theInitialEdgesLen,const Standard_Integer theInitialSectionsLen) ;


TopoDS_Wire mySpine;
TopoDS_Shape myProfile;
TopoDS_Shape myShape;
gp_Trsf myTrsf;
Handle_BRepFill_LocationLaw myLoc;
Handle_TopTools_HArray2OfShape mySections;
Handle_TopTools_HArray2OfShape myFaces;
Handle_TopTools_HArray2OfShape myEdges;
TopoDS_Shape myFirst;
TopoDS_Shape myLast;
Standard_Integer myDegmax;
Standard_Integer mySegmax;
GeomAbs_Shape myContinuity;
GeomFill_Trihedron myMode;
Standard_Boolean myForceApproxC1;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
