// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_SequenceOfColorMapEntry_HeaderFile
#define _Aspect_SequenceOfColorMapEntry_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Aspect_SequenceNodeOfSequenceOfColorMapEntry_HeaderFile
#include <Handle_Aspect_SequenceNodeOfSequenceOfColorMapEntry.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Aspect_ColorMapEntry;
class Aspect_SequenceNodeOfSequenceOfColorMapEntry;



class Aspect_SequenceOfColorMapEntry  : public TCollection_BaseSequence {
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

  
      Aspect_SequenceOfColorMapEntry();
  
  Standard_EXPORT     void Clear() ;
~Aspect_SequenceOfColorMapEntry()
{
  Clear();
}
  
  Standard_EXPORT    const Aspect_SequenceOfColorMapEntry& Assign(const Aspect_SequenceOfColorMapEntry& Other) ;
   const Aspect_SequenceOfColorMapEntry& operator =(const Aspect_SequenceOfColorMapEntry& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Aspect_ColorMapEntry& T) ;
  
        void Append(Aspect_SequenceOfColorMapEntry& S) ;
  
  Standard_EXPORT     void Prepend(const Aspect_ColorMapEntry& T) ;
  
        void Prepend(Aspect_SequenceOfColorMapEntry& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Aspect_ColorMapEntry& T) ;
  
        void InsertBefore(const Standard_Integer Index,Aspect_SequenceOfColorMapEntry& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Aspect_ColorMapEntry& T) ;
  
        void InsertAfter(const Standard_Integer Index,Aspect_SequenceOfColorMapEntry& S) ;
  
  Standard_EXPORT    const Aspect_ColorMapEntry& First() const;
  
  Standard_EXPORT    const Aspect_ColorMapEntry& Last() const;
  
        void Split(const Standard_Integer Index,Aspect_SequenceOfColorMapEntry& Sub) ;
  
  Standard_EXPORT    const Aspect_ColorMapEntry& Value(const Standard_Integer Index) const;
   const Aspect_ColorMapEntry& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Aspect_ColorMapEntry& I) ;
  
  Standard_EXPORT     Aspect_ColorMapEntry& ChangeValue(const Standard_Integer Index) ;
    Aspect_ColorMapEntry& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Aspect_SequenceOfColorMapEntry(const Aspect_SequenceOfColorMapEntry& Other);




};

#define SeqItem Aspect_ColorMapEntry
#define SeqItem_hxx <Aspect_ColorMapEntry.hxx>
#define TCollection_SequenceNode Aspect_SequenceNodeOfSequenceOfColorMapEntry
#define TCollection_SequenceNode_hxx <Aspect_SequenceNodeOfSequenceOfColorMapEntry.hxx>
#define Handle_TCollection_SequenceNode Handle_Aspect_SequenceNodeOfSequenceOfColorMapEntry
#define TCollection_SequenceNode_Type_() Aspect_SequenceNodeOfSequenceOfColorMapEntry_Type_()
#define TCollection_Sequence Aspect_SequenceOfColorMapEntry
#define TCollection_Sequence_hxx <Aspect_SequenceOfColorMapEntry.hxx>

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
