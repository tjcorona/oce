// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_SequenceOfSpine_HeaderFile
#define _ChFiDS_SequenceOfSpine_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_ChFiDS_Spine_HeaderFile
#include <Handle_ChFiDS_Spine.hxx>
#endif
#ifndef _Handle_ChFiDS_SequenceNodeOfSequenceOfSpine_HeaderFile
#include <Handle_ChFiDS_SequenceNodeOfSequenceOfSpine.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class ChFiDS_Spine;
class ChFiDS_SequenceNodeOfSequenceOfSpine;



class ChFiDS_SequenceOfSpine  : public TCollection_BaseSequence {
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

  
      ChFiDS_SequenceOfSpine();
  
  Standard_EXPORT     void Clear() ;
~ChFiDS_SequenceOfSpine()
{
  Clear();
}
  
  Standard_EXPORT    const ChFiDS_SequenceOfSpine& Assign(const ChFiDS_SequenceOfSpine& Other) ;
   const ChFiDS_SequenceOfSpine& operator =(const ChFiDS_SequenceOfSpine& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(ChFiDS_Spine)& T) ;
  
        void Append(ChFiDS_SequenceOfSpine& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(ChFiDS_Spine)& T) ;
  
        void Prepend(ChFiDS_SequenceOfSpine& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(ChFiDS_Spine)& T) ;
  
        void InsertBefore(const Standard_Integer Index,ChFiDS_SequenceOfSpine& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(ChFiDS_Spine)& T) ;
  
        void InsertAfter(const Standard_Integer Index,ChFiDS_SequenceOfSpine& S) ;
  
  Standard_EXPORT    const Handle_ChFiDS_Spine& First() const;
  
  Standard_EXPORT    const Handle_ChFiDS_Spine& Last() const;
  
        void Split(const Standard_Integer Index,ChFiDS_SequenceOfSpine& Sub) ;
  
  Standard_EXPORT    const Handle_ChFiDS_Spine& Value(const Standard_Integer Index) const;
   const Handle_ChFiDS_Spine& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(ChFiDS_Spine)& I) ;
  
  Standard_EXPORT     Handle_ChFiDS_Spine& ChangeValue(const Standard_Integer Index) ;
    Handle_ChFiDS_Spine& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   ChFiDS_SequenceOfSpine(const ChFiDS_SequenceOfSpine& Other);




};

#define SeqItem Handle_ChFiDS_Spine
#define SeqItem_hxx <ChFiDS_Spine.hxx>
#define TCollection_SequenceNode ChFiDS_SequenceNodeOfSequenceOfSpine
#define TCollection_SequenceNode_hxx <ChFiDS_SequenceNodeOfSequenceOfSpine.hxx>
#define Handle_TCollection_SequenceNode Handle_ChFiDS_SequenceNodeOfSequenceOfSpine
#define TCollection_SequenceNode_Type_() ChFiDS_SequenceNodeOfSequenceOfSpine_Type_()
#define TCollection_Sequence ChFiDS_SequenceOfSpine
#define TCollection_Sequence_hxx <ChFiDS_SequenceOfSpine.hxx>

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
