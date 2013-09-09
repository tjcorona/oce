// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dynamic_SeqOfMethodDefinitions_HeaderFile
#define _Dynamic_SeqOfMethodDefinitions_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Dynamic_MethodDefinition_HeaderFile
#include <Handle_Dynamic_MethodDefinition.hxx>
#endif
#ifndef _Handle_Dynamic_SequenceNodeOfSeqOfMethodDefinitions_HeaderFile
#include <Handle_Dynamic_SequenceNodeOfSeqOfMethodDefinitions.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Dynamic_MethodDefinition;
class Dynamic_SequenceNodeOfSeqOfMethodDefinitions;



class Dynamic_SeqOfMethodDefinitions  : public TCollection_BaseSequence {
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

  
      Dynamic_SeqOfMethodDefinitions();
  
  Standard_EXPORT     void Clear() ;
~Dynamic_SeqOfMethodDefinitions()
{
  Clear();
}
  
  Standard_EXPORT    const Dynamic_SeqOfMethodDefinitions& Assign(const Dynamic_SeqOfMethodDefinitions& Other) ;
   const Dynamic_SeqOfMethodDefinitions& operator =(const Dynamic_SeqOfMethodDefinitions& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Dynamic_MethodDefinition)& T) ;
  
        void Append(Dynamic_SeqOfMethodDefinitions& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Dynamic_MethodDefinition)& T) ;
  
        void Prepend(Dynamic_SeqOfMethodDefinitions& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Dynamic_MethodDefinition)& T) ;
  
        void InsertBefore(const Standard_Integer Index,Dynamic_SeqOfMethodDefinitions& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Dynamic_MethodDefinition)& T) ;
  
        void InsertAfter(const Standard_Integer Index,Dynamic_SeqOfMethodDefinitions& S) ;
  
  Standard_EXPORT    const Handle_Dynamic_MethodDefinition& First() const;
  
  Standard_EXPORT    const Handle_Dynamic_MethodDefinition& Last() const;
  
        void Split(const Standard_Integer Index,Dynamic_SeqOfMethodDefinitions& Sub) ;
  
  Standard_EXPORT    const Handle_Dynamic_MethodDefinition& Value(const Standard_Integer Index) const;
   const Handle_Dynamic_MethodDefinition& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Dynamic_MethodDefinition)& I) ;
  
  Standard_EXPORT     Handle_Dynamic_MethodDefinition& ChangeValue(const Standard_Integer Index) ;
    Handle_Dynamic_MethodDefinition& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Dynamic_SeqOfMethodDefinitions(const Dynamic_SeqOfMethodDefinitions& Other);




};

#define SeqItem Handle_Dynamic_MethodDefinition
#define SeqItem_hxx <Dynamic_MethodDefinition.hxx>
#define TCollection_SequenceNode Dynamic_SequenceNodeOfSeqOfMethodDefinitions
#define TCollection_SequenceNode_hxx <Dynamic_SequenceNodeOfSeqOfMethodDefinitions.hxx>
#define Handle_TCollection_SequenceNode Handle_Dynamic_SequenceNodeOfSeqOfMethodDefinitions
#define TCollection_SequenceNode_Type_() Dynamic_SequenceNodeOfSeqOfMethodDefinitions_Type_()
#define TCollection_Sequence Dynamic_SeqOfMethodDefinitions
#define TCollection_Sequence_hxx <Dynamic_SeqOfMethodDefinitions.hxx>

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
