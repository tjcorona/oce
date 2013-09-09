// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_QueueOfReal_HeaderFile
#define _TColStd_QueueOfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TColStd_QueueNodeOfQueueOfReal_HeaderFile
#include <Handle_TColStd_QueueNodeOfQueueOfReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class TColStd_QueueNodeOfQueueOfReal;



class TColStd_QueueOfReal  {
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

  
  Standard_EXPORT   TColStd_QueueOfReal();
  
  Standard_EXPORT    const TColStd_QueueOfReal& Assign(const TColStd_QueueOfReal& Other) ;
   const TColStd_QueueOfReal& operator =(const TColStd_QueueOfReal& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT    const Standard_Real& Front() const;
  
  Standard_EXPORT     void Clear() ;
~TColStd_QueueOfReal()
{
  Clear();
}
  
  Standard_EXPORT     void Push(const Standard_Real& T) ;
  
  Standard_EXPORT     void Pop() ;
  
  Standard_EXPORT     Standard_Real& ChangeFront() ;





protected:





private:

  
  Standard_EXPORT   TColStd_QueueOfReal(const TColStd_QueueOfReal& Other);


Standard_Address myFront;
Standard_Address myEnd;
Standard_Integer myLength;


};

#define Item Standard_Real
#define Item_hxx <Standard_Real.hxx>
#define TCollection_QueueNode TColStd_QueueNodeOfQueueOfReal
#define TCollection_QueueNode_hxx <TColStd_QueueNodeOfQueueOfReal.hxx>
#define Handle_TCollection_QueueNode Handle_TColStd_QueueNodeOfQueueOfReal
#define TCollection_QueueNode_Type_() TColStd_QueueNodeOfQueueOfReal_Type_()
#define TCollection_Queue TColStd_QueueOfReal
#define TCollection_Queue_hxx <TColStd_QueueOfReal.hxx>

#include <TCollection_Queue.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_QueueNode
#undef TCollection_QueueNode_hxx
#undef Handle_TCollection_QueueNode
#undef TCollection_QueueNode_Type_
#undef TCollection_Queue
#undef TCollection_Queue_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
