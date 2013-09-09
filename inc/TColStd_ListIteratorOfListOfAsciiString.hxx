// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_ListIteratorOfListOfAsciiString_HeaderFile
#define _TColStd_ListIteratorOfListOfAsciiString_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_TColStd_ListNodeOfListOfAsciiString_HeaderFile
#include <Handle_TColStd_ListNodeOfListOfAsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TColStd_ListOfAsciiString;
class TCollection_AsciiString;
class TColStd_ListNodeOfListOfAsciiString;



class TColStd_ListIteratorOfListOfAsciiString  {
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

  
  Standard_EXPORT   TColStd_ListIteratorOfListOfAsciiString();
  
  Standard_EXPORT   TColStd_ListIteratorOfListOfAsciiString(const TColStd_ListOfAsciiString& L);
  
  Standard_EXPORT     void Initialize(const TColStd_ListOfAsciiString& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     TCollection_AsciiString& Value() const;


friend class TColStd_ListOfAsciiString;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item TCollection_AsciiString
#define Item_hxx <TCollection_AsciiString.hxx>
#define TCollection_ListNode TColStd_ListNodeOfListOfAsciiString
#define TCollection_ListNode_hxx <TColStd_ListNodeOfListOfAsciiString.hxx>
#define TCollection_ListIterator TColStd_ListIteratorOfListOfAsciiString
#define TCollection_ListIterator_hxx <TColStd_ListIteratorOfListOfAsciiString.hxx>
#define Handle_TCollection_ListNode Handle_TColStd_ListNodeOfListOfAsciiString
#define TCollection_ListNode_Type_() TColStd_ListNodeOfListOfAsciiString_Type_()
#define TCollection_List TColStd_ListOfAsciiString
#define TCollection_List_hxx <TColStd_ListOfAsciiString.hxx>

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
