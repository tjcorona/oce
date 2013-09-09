// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrim_GWedge_HeaderFile
#define _BRepPrim_GWedge_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepPrim_Builder_HeaderFile
#include <BRepPrim_Builder.hxx>
#endif
#ifndef _gp_Ax2_HeaderFile
#include <gp_Ax2.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TopoDS_Shell_HeaderFile
#include <TopoDS_Shell.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopoDS_Vertex_HeaderFile
#include <TopoDS_Vertex.hxx>
#endif
#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Primitives_Direction_HeaderFile
#include <Primitives_Direction.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class TopoDS_Shell;
class TopoDS_Face;
class TopoDS_Wire;
class TopoDS_Edge;
class TopoDS_Vertex;
class BRepPrim_Builder;
class gp_Ax2;
class gp_Pln;
class gp_Lin;
class gp_Pnt;



class BRepPrim_GWedge  {
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

  
  Standard_EXPORT   BRepPrim_GWedge(const BRepPrim_Builder& B,const gp_Ax2& Axes,const Standard_Real dx,const Standard_Real dy,const Standard_Real dz);
  
  Standard_EXPORT   BRepPrim_GWedge(const BRepPrim_Builder& B,const gp_Ax2& Axes,const Standard_Real dx,const Standard_Real dy,const Standard_Real dz,const Standard_Real ltx);
  
  Standard_EXPORT   BRepPrim_GWedge(const BRepPrim_Builder& B,const gp_Ax2& Axes,const Standard_Real xmin,const Standard_Real ymin,const Standard_Real zmin,const Standard_Real z2min,const Standard_Real x2min,const Standard_Real xmax,const Standard_Real ymax,const Standard_Real zmax,const Standard_Real z2max,const Standard_Real x2max);
  
  Standard_EXPORT     gp_Ax2 Axes() const;
  
  Standard_EXPORT     Standard_Real GetXMin() const;
  
  Standard_EXPORT     Standard_Real GetYMin() const;
  
  Standard_EXPORT     Standard_Real GetZMin() const;
  
  Standard_EXPORT     Standard_Real GetZ2Min() const;
  
  Standard_EXPORT     Standard_Real GetX2Min() const;
  
  Standard_EXPORT     Standard_Real GetXMax() const;
  
  Standard_EXPORT     Standard_Real GetYMax() const;
  
  Standard_EXPORT     Standard_Real GetZMax() const;
  
  Standard_EXPORT     Standard_Real GetZ2Max() const;
  
  Standard_EXPORT     Standard_Real GetX2Max() const;
  
  Standard_EXPORT     void Open(const Primitives_Direction d1) ;
  
  Standard_EXPORT     void Close(const Primitives_Direction d1) ;
  
  Standard_EXPORT     Standard_Boolean IsInfinite(const Primitives_Direction d1) const;
  
  Standard_EXPORT    const TopoDS_Shell& Shell() ;
  
  Standard_EXPORT     Standard_Boolean HasFace(const Primitives_Direction d1) const;
  
  Standard_EXPORT    const TopoDS_Face& Face(const Primitives_Direction d1) ;
  
  Standard_EXPORT     gp_Pln Plane(const Primitives_Direction d1) ;
  
  Standard_EXPORT     Standard_Boolean HasWire(const Primitives_Direction d1) const;
  
  Standard_EXPORT    const TopoDS_Wire& Wire(const Primitives_Direction d1) ;
  
  Standard_EXPORT     Standard_Boolean HasEdge(const Primitives_Direction d1,const Primitives_Direction d2) const;
  
  Standard_EXPORT    const TopoDS_Edge& Edge(const Primitives_Direction d1,const Primitives_Direction d2) ;
  
  Standard_EXPORT     gp_Lin Line(const Primitives_Direction d1,const Primitives_Direction d2) ;
  
  Standard_EXPORT     Standard_Boolean HasVertex(const Primitives_Direction d1,const Primitives_Direction d2,const Primitives_Direction d3) const;
  
  Standard_EXPORT    const TopoDS_Vertex& Vertex(const Primitives_Direction d1,const Primitives_Direction d2,const Primitives_Direction d3) ;
  
  Standard_EXPORT     gp_Pnt Point(const Primitives_Direction d1,const Primitives_Direction d2,const Primitives_Direction d3) ;





protected:





private:



BRepPrim_Builder myBuilder;
gp_Ax2 myAxes;
Standard_Real XMin;
Standard_Real XMax;
Standard_Real YMin;
Standard_Real YMax;
Standard_Real ZMin;
Standard_Real ZMax;
Standard_Real Z2Min;
Standard_Real Z2Max;
Standard_Real X2Min;
Standard_Real X2Max;
TopoDS_Shell myShell;
Standard_Boolean ShellBuilt;
TopoDS_Vertex myVertices[8];
Standard_Boolean VerticesBuilt[8];
TopoDS_Edge myEdges[12];
Standard_Boolean EdgesBuilt[12];
TopoDS_Wire myWires[6];
Standard_Boolean WiresBuilt[6];
TopoDS_Face myFaces[6];
Standard_Boolean FacesBuilt[6];
Standard_Boolean myInfinite[6];


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
