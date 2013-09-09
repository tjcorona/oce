// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_ListOfCurveRangeSample_HeaderFile
#define _IntTools_ListOfCurveRangeSample_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_IntTools_ListNodeOfListOfCurveRangeSample_HeaderFile
#include <Handle_IntTools_ListNodeOfListOfCurveRangeSample.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class IntTools_ListIteratorOfListOfCurveRangeSample;
class IntTools_CurveRangeSample;
class IntTools_ListNodeOfListOfCurveRangeSample;



class IntTools_ListOfCurveRangeSample  {
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

  
  Standard_EXPORT   IntTools_ListOfCurveRangeSample();
  
  Standard_EXPORT     void Assign(const IntTools_ListOfCurveRangeSample& Other) ;
    void operator=(const IntTools_ListOfCurveRangeSample& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~IntTools_ListOfCurveRangeSample()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const IntTools_CurveRangeSample& I) ;
  
  Standard_EXPORT     void Prepend(const IntTools_CurveRangeSample& I,IntTools_ListIteratorOfListOfCurveRangeSample& theIt) ;
  
  Standard_EXPORT     void Prepend(IntTools_ListOfCurveRangeSample& Other) ;
  
  Standard_EXPORT     void Append(const IntTools_CurveRangeSample& I) ;
  
  Standard_EXPORT     void Append(const IntTools_CurveRangeSample& I,IntTools_ListIteratorOfListOfCurveRangeSample& theIt) ;
  
  Standard_EXPORT     void Append(IntTools_ListOfCurveRangeSample& Other) ;
  
  Standard_EXPORT     IntTools_CurveRangeSample& First() const;
  
  Standard_EXPORT     IntTools_CurveRangeSample& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(IntTools_ListIteratorOfListOfCurveRangeSample& It) ;
  
  Standard_EXPORT     void InsertBefore(const IntTools_CurveRangeSample& I,IntTools_ListIteratorOfListOfCurveRangeSample& It) ;
  
  Standard_EXPORT     void InsertBefore(IntTools_ListOfCurveRangeSample& Other,IntTools_ListIteratorOfListOfCurveRangeSample& It) ;
  
  Standard_EXPORT     void InsertAfter(const IntTools_CurveRangeSample& I,IntTools_ListIteratorOfListOfCurveRangeSample& It) ;
  
  Standard_EXPORT     void InsertAfter(IntTools_ListOfCurveRangeSample& Other,IntTools_ListIteratorOfListOfCurveRangeSample& It) ;


friend class IntTools_ListIteratorOfListOfCurveRangeSample;



protected:





private:

  
  Standard_EXPORT   IntTools_ListOfCurveRangeSample(const IntTools_ListOfCurveRangeSample& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item IntTools_CurveRangeSample
#define Item_hxx <IntTools_CurveRangeSample.hxx>
#define TCollection_ListNode IntTools_ListNodeOfListOfCurveRangeSample
#define TCollection_ListNode_hxx <IntTools_ListNodeOfListOfCurveRangeSample.hxx>
#define TCollection_ListIterator IntTools_ListIteratorOfListOfCurveRangeSample
#define TCollection_ListIterator_hxx <IntTools_ListIteratorOfListOfCurveRangeSample.hxx>
#define Handle_TCollection_ListNode Handle_IntTools_ListNodeOfListOfCurveRangeSample
#define TCollection_ListNode_Type_() IntTools_ListNodeOfListOfCurveRangeSample_Type_()
#define TCollection_List IntTools_ListOfCurveRangeSample
#define TCollection_List_hxx <IntTools_ListOfCurveRangeSample.hxx>

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
