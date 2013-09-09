// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_WireEdgeSet_HeaderFile
#define _TopOpeBRepBuild_WireEdgeSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopOpeBRepBuild_ShapeSet_HeaderFile
#include <TopOpeBRepBuild_ShapeSet.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
class TopoDS_Shape;
class TopoDS_Face;
class TopTools_ListOfShape;
class gp_Pnt2d;
class gp_Vec2d;
class TopoDS_Edge;
class TCollection_AsciiString;


//! a bound is a wire, a boundelement is an edge. <br>
//! The ShapeSet stores : <br>
//!  - a list of wire (bounds), <br>
//!  - a list of edge (boundelements) to start reconstructions, <br>
//!  - a map of vertex giving the list of edge incident to a vertex. <br>
class TopOpeBRepBuild_WireEdgeSet  : public TopOpeBRepBuild_ShapeSet {
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

  //! Creates a WireEdgeSet to build edges connected by vertices <br>
//! on face F. Edges of the WireEdgeSet must have a representation <br>
//! on surface of face F. <br>
  Standard_EXPORT   TopOpeBRepBuild_WireEdgeSet(const TopoDS_Shape& F,const Standard_Address Addr = NULL);
  //! value of field myFace <br>
  Standard_EXPORT    const TopoDS_Face& Face() const;
  
  Standard_EXPORT   virtual  void AddShape(const TopoDS_Shape& S) ;
  
  Standard_EXPORT   virtual  void AddStartElement(const TopoDS_Shape& S) ;
  
  Standard_EXPORT   virtual  void AddElement(const TopoDS_Shape& S) ;
  
  Standard_EXPORT   virtual  void InitNeighbours(const TopoDS_Shape& E) ;
  
//! Build the list of neighbour edges of edge myCurrentShape <br>
//! Initialize iterator of neighbour edges to edge myCurrentShape <br>
  Standard_EXPORT   virtual  void FindNeighbours() ;
  
  Standard_EXPORT   virtual const TopTools_ListOfShape& MakeNeighboursList(const TopoDS_Shape& E,const TopoDS_Shape& V) ;
  
  Standard_EXPORT     Standard_Boolean HasConnexStartElement() const;
  
  Standard_EXPORT   static  void IsUVISO(const TopoDS_Edge& E,const TopoDS_Face& F,Standard_Boolean& uiso,Standard_Boolean& viso) ;
  
  Standard_EXPORT   virtual  void DumpSS() ;
  
  Standard_EXPORT   virtual  TCollection_AsciiString SName(const TopoDS_Shape& S,const TCollection_AsciiString& sb = "",const TCollection_AsciiString& sa = "") const;
  
  Standard_EXPORT   virtual  TCollection_AsciiString SName(const TopTools_ListOfShape& S,const TCollection_AsciiString& sb = "",const TCollection_AsciiString& sa = "") const;
  
  Standard_EXPORT   virtual  TCollection_AsciiString SNameori(const TopoDS_Shape& S,const TCollection_AsciiString& sb = "",const TCollection_AsciiString& sa = "") const;
  
  Standard_EXPORT   virtual  TCollection_AsciiString SNameori(const TopTools_ListOfShape& S,const TCollection_AsciiString& sb = "",const TCollection_AsciiString& sa = "") const;





protected:





private:

  
//! Indicates whether vertex V is a good connexity vertex between <br>
//! edges E1 and E2. <br>
//! i.e, returns True if V is shared by E1 and E2 and if V has different <br>
//! orientations on E1 and E2. <br>
//! If V is shared by E1 and E2, returns the orientation of V on E1 and E2 <br>
  Standard_EXPORT     Standard_Boolean VertexConnectsEdges(const TopoDS_Shape& V,const TopoDS_Shape& E1,const TopoDS_Shape& E2,TopAbs_Orientation& O1,TopAbs_Orientation& O2) const;
  
  Standard_EXPORT     Standard_Boolean VertexConnectsEdgesClosing(const TopoDS_Shape& V,const TopoDS_Shape& E1,const TopoDS_Shape& E2) const;
  
  Standard_EXPORT     Standard_Integer NbClosingShapes(const TopTools_ListOfShape& L) const;
  
  Standard_EXPORT     void LocalD1(const TopoDS_Shape& F,const TopoDS_Shape& E,const TopoDS_Shape& V,gp_Pnt2d& p2,gp_Vec2d& v2) const;
  //! indicates if the edge <E> is a closing edge of myFace <br>
  Standard_EXPORT     Standard_Boolean IsClosed(const TopoDS_Shape& E) const;
  //! indicates if the edge <E> is a closing edge on U of myFace <br>
  Standard_EXPORT     Standard_Boolean IsUClosed(const TopoDS_Shape& E) const;
  //! indicates if the edge <E> is a closing edge on V of myFace <br>
  Standard_EXPORT     Standard_Boolean IsVClosed(const TopoDS_Shape& E) const;
  
  Standard_EXPORT     TCollection_AsciiString SNameVEE(const TopoDS_Shape& V,const TopoDS_Shape& E1,const TopoDS_Shape& E2) const;
  
  Standard_EXPORT     TCollection_AsciiString SNameVEL(const TopoDS_Shape& V,const TopoDS_Shape& E,const TopTools_ListOfShape& L) const;


TopoDS_Face myFace;
Standard_Integer myDEBVertexIndex;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
