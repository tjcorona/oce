// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffsetAPI_SequenceOfSequenceOfReal_HeaderFile
#define _BRepOffsetAPI_SequenceOfSequenceOfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal_HeaderFile
#include <Handle_BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TColStd_SequenceOfReal;
class BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal;



class BRepOffsetAPI_SequenceOfSequenceOfReal  : public TCollection_BaseSequence {
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

  
      BRepOffsetAPI_SequenceOfSequenceOfReal();
  
  Standard_EXPORT     void Clear() ;
~BRepOffsetAPI_SequenceOfSequenceOfReal()
{
  Clear();
}
  
  Standard_EXPORT    const BRepOffsetAPI_SequenceOfSequenceOfReal& Assign(const BRepOffsetAPI_SequenceOfSequenceOfReal& Other) ;
   const BRepOffsetAPI_SequenceOfSequenceOfReal& operator =(const BRepOffsetAPI_SequenceOfSequenceOfReal& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const TColStd_SequenceOfReal& T) ;
  
        void Append(BRepOffsetAPI_SequenceOfSequenceOfReal& S) ;
  
  Standard_EXPORT     void Prepend(const TColStd_SequenceOfReal& T) ;
  
        void Prepend(BRepOffsetAPI_SequenceOfSequenceOfReal& S) ;
  
        void InsertBefore(const Standard_Integer Index,const TColStd_SequenceOfReal& T) ;
  
        void InsertBefore(const Standard_Integer Index,BRepOffsetAPI_SequenceOfSequenceOfReal& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const TColStd_SequenceOfReal& T) ;
  
        void InsertAfter(const Standard_Integer Index,BRepOffsetAPI_SequenceOfSequenceOfReal& S) ;
  
  Standard_EXPORT    const TColStd_SequenceOfReal& First() const;
  
  Standard_EXPORT    const TColStd_SequenceOfReal& Last() const;
  
        void Split(const Standard_Integer Index,BRepOffsetAPI_SequenceOfSequenceOfReal& Sub) ;
  
  Standard_EXPORT    const TColStd_SequenceOfReal& Value(const Standard_Integer Index) const;
   const TColStd_SequenceOfReal& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const TColStd_SequenceOfReal& I) ;
  
  Standard_EXPORT     TColStd_SequenceOfReal& ChangeValue(const Standard_Integer Index) ;
    TColStd_SequenceOfReal& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   BRepOffsetAPI_SequenceOfSequenceOfReal(const BRepOffsetAPI_SequenceOfSequenceOfReal& Other);




};

#define SeqItem TColStd_SequenceOfReal
#define SeqItem_hxx <TColStd_SequenceOfReal.hxx>
#define TCollection_SequenceNode BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal
#define TCollection_SequenceNode_hxx <BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal.hxx>
#define Handle_TCollection_SequenceNode Handle_BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal
#define TCollection_SequenceNode_Type_() BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal_Type_()
#define TCollection_Sequence BRepOffsetAPI_SequenceOfSequenceOfReal
#define TCollection_Sequence_hxx <BRepOffsetAPI_SequenceOfSequenceOfReal.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
