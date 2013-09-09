// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Select3D_ListOfSensitiveTriangle_HeaderFile
#define _Select3D_ListOfSensitiveTriangle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_Select3D_SensitiveTriangle_HeaderFile
#include <Handle_Select3D_SensitiveTriangle.hxx>
#endif
#ifndef _Handle_Select3D_ListNodeOfListOfSensitiveTriangle_HeaderFile
#include <Handle_Select3D_ListNodeOfListOfSensitiveTriangle.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class Select3D_ListIteratorOfListOfSensitiveTriangle;
class Select3D_SensitiveTriangle;
class Select3D_ListNodeOfListOfSensitiveTriangle;



class Select3D_ListOfSensitiveTriangle  {
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

  
  Standard_EXPORT   Select3D_ListOfSensitiveTriangle();
  
  Standard_EXPORT     void Assign(const Select3D_ListOfSensitiveTriangle& Other) ;
    void operator=(const Select3D_ListOfSensitiveTriangle& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~Select3D_ListOfSensitiveTriangle()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const Handle(Select3D_SensitiveTriangle)& I) ;
  
  Standard_EXPORT     void Prepend(const Handle(Select3D_SensitiveTriangle)& I,Select3D_ListIteratorOfListOfSensitiveTriangle& theIt) ;
  
  Standard_EXPORT     void Prepend(Select3D_ListOfSensitiveTriangle& Other) ;
  
  Standard_EXPORT     void Append(const Handle(Select3D_SensitiveTriangle)& I) ;
  
  Standard_EXPORT     void Append(const Handle(Select3D_SensitiveTriangle)& I,Select3D_ListIteratorOfListOfSensitiveTriangle& theIt) ;
  
  Standard_EXPORT     void Append(Select3D_ListOfSensitiveTriangle& Other) ;
  
  Standard_EXPORT     Handle_Select3D_SensitiveTriangle& First() const;
  
  Standard_EXPORT     Handle_Select3D_SensitiveTriangle& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(Select3D_ListIteratorOfListOfSensitiveTriangle& It) ;
  
  Standard_EXPORT     void InsertBefore(const Handle(Select3D_SensitiveTriangle)& I,Select3D_ListIteratorOfListOfSensitiveTriangle& It) ;
  
  Standard_EXPORT     void InsertBefore(Select3D_ListOfSensitiveTriangle& Other,Select3D_ListIteratorOfListOfSensitiveTriangle& It) ;
  
  Standard_EXPORT     void InsertAfter(const Handle(Select3D_SensitiveTriangle)& I,Select3D_ListIteratorOfListOfSensitiveTriangle& It) ;
  
  Standard_EXPORT     void InsertAfter(Select3D_ListOfSensitiveTriangle& Other,Select3D_ListIteratorOfListOfSensitiveTriangle& It) ;


friend class Select3D_ListIteratorOfListOfSensitiveTriangle;



protected:





private:

  
  Standard_EXPORT   Select3D_ListOfSensitiveTriangle(const Select3D_ListOfSensitiveTriangle& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item Handle_Select3D_SensitiveTriangle
#define Item_hxx <Select3D_SensitiveTriangle.hxx>
#define TCollection_ListNode Select3D_ListNodeOfListOfSensitiveTriangle
#define TCollection_ListNode_hxx <Select3D_ListNodeOfListOfSensitiveTriangle.hxx>
#define TCollection_ListIterator Select3D_ListIteratorOfListOfSensitiveTriangle
#define TCollection_ListIterator_hxx <Select3D_ListIteratorOfListOfSensitiveTriangle.hxx>
#define Handle_TCollection_ListNode Handle_Select3D_ListNodeOfListOfSensitiveTriangle
#define TCollection_ListNode_Type_() Select3D_ListNodeOfListOfSensitiveTriangle_Type_()
#define TCollection_List Select3D_ListOfSensitiveTriangle
#define TCollection_List_hxx <Select3D_ListOfSensitiveTriangle.hxx>

#include <TCollection_List.lxx>

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
