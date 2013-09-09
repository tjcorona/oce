// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_ListIteratorOfListOfVertex_HeaderFile
#define _BRepMesh_ListIteratorOfListOfVertex_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_BRepMesh_ListNodeOfListOfVertex_HeaderFile
#include <Handle_BRepMesh_ListNodeOfListOfVertex.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class BRepMesh_ListOfVertex;
class BRepMesh_Vertex;
class BRepMesh_ListNodeOfListOfVertex;



class BRepMesh_ListIteratorOfListOfVertex  {
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

  
  Standard_EXPORT   BRepMesh_ListIteratorOfListOfVertex();
  
  Standard_EXPORT   BRepMesh_ListIteratorOfListOfVertex(const BRepMesh_ListOfVertex& L);
  
  Standard_EXPORT     void Initialize(const BRepMesh_ListOfVertex& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     BRepMesh_Vertex& Value() const;


friend class BRepMesh_ListOfVertex;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item BRepMesh_Vertex
#define Item_hxx <BRepMesh_Vertex.hxx>
#define TCollection_ListNode BRepMesh_ListNodeOfListOfVertex
#define TCollection_ListNode_hxx <BRepMesh_ListNodeOfListOfVertex.hxx>
#define TCollection_ListIterator BRepMesh_ListIteratorOfListOfVertex
#define TCollection_ListIterator_hxx <BRepMesh_ListIteratorOfListOfVertex.hxx>
#define Handle_TCollection_ListNode Handle_BRepMesh_ListNodeOfListOfVertex
#define TCollection_ListNode_Type_() BRepMesh_ListNodeOfListOfVertex_Type_()
#define TCollection_List BRepMesh_ListOfVertex
#define TCollection_List_hxx <BRepMesh_ListOfVertex.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
