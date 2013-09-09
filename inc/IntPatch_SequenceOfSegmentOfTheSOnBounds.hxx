// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_SequenceOfSegmentOfTheSOnBounds_HeaderFile
#define _IntPatch_SequenceOfSegmentOfTheSOnBounds_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds_HeaderFile
#include <Handle_IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class IntPatch_TheSegmentOfTheSOnBounds;
class IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds;



class IntPatch_SequenceOfSegmentOfTheSOnBounds  : public TCollection_BaseSequence {
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

  
      IntPatch_SequenceOfSegmentOfTheSOnBounds();
  
  Standard_EXPORT     void Clear() ;
~IntPatch_SequenceOfSegmentOfTheSOnBounds()
{
  Clear();
}
  
  Standard_EXPORT    const IntPatch_SequenceOfSegmentOfTheSOnBounds& Assign(const IntPatch_SequenceOfSegmentOfTheSOnBounds& Other) ;
   const IntPatch_SequenceOfSegmentOfTheSOnBounds& operator =(const IntPatch_SequenceOfSegmentOfTheSOnBounds& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const IntPatch_TheSegmentOfTheSOnBounds& T) ;
  
        void Append(IntPatch_SequenceOfSegmentOfTheSOnBounds& S) ;
  
  Standard_EXPORT     void Prepend(const IntPatch_TheSegmentOfTheSOnBounds& T) ;
  
        void Prepend(IntPatch_SequenceOfSegmentOfTheSOnBounds& S) ;
  
        void InsertBefore(const Standard_Integer Index,const IntPatch_TheSegmentOfTheSOnBounds& T) ;
  
        void InsertBefore(const Standard_Integer Index,IntPatch_SequenceOfSegmentOfTheSOnBounds& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const IntPatch_TheSegmentOfTheSOnBounds& T) ;
  
        void InsertAfter(const Standard_Integer Index,IntPatch_SequenceOfSegmentOfTheSOnBounds& S) ;
  
  Standard_EXPORT    const IntPatch_TheSegmentOfTheSOnBounds& First() const;
  
  Standard_EXPORT    const IntPatch_TheSegmentOfTheSOnBounds& Last() const;
  
        void Split(const Standard_Integer Index,IntPatch_SequenceOfSegmentOfTheSOnBounds& Sub) ;
  
  Standard_EXPORT    const IntPatch_TheSegmentOfTheSOnBounds& Value(const Standard_Integer Index) const;
   const IntPatch_TheSegmentOfTheSOnBounds& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const IntPatch_TheSegmentOfTheSOnBounds& I) ;
  
  Standard_EXPORT     IntPatch_TheSegmentOfTheSOnBounds& ChangeValue(const Standard_Integer Index) ;
    IntPatch_TheSegmentOfTheSOnBounds& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   IntPatch_SequenceOfSegmentOfTheSOnBounds(const IntPatch_SequenceOfSegmentOfTheSOnBounds& Other);




};

#define SeqItem IntPatch_TheSegmentOfTheSOnBounds
#define SeqItem_hxx <IntPatch_TheSegmentOfTheSOnBounds.hxx>
#define TCollection_SequenceNode IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds
#define TCollection_SequenceNode_hxx <IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds.hxx>
#define Handle_TCollection_SequenceNode Handle_IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds
#define TCollection_SequenceNode_Type_() IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds_Type_()
#define TCollection_Sequence IntPatch_SequenceOfSegmentOfTheSOnBounds
#define TCollection_Sequence_hxx <IntPatch_SequenceOfSegmentOfTheSOnBounds.hxx>

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
