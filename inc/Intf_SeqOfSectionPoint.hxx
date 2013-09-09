// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Intf_SeqOfSectionPoint_HeaderFile
#define _Intf_SeqOfSectionPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Intf_SequenceNodeOfSeqOfSectionPoint_HeaderFile
#include <Handle_Intf_SequenceNodeOfSeqOfSectionPoint.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Intf_SectionPoint;
class Intf_SequenceNodeOfSeqOfSectionPoint;



class Intf_SeqOfSectionPoint  : public TCollection_BaseSequence {
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

  
      Intf_SeqOfSectionPoint();
  
  Standard_EXPORT     void Clear() ;
~Intf_SeqOfSectionPoint()
{
  Clear();
}
  
  Standard_EXPORT    const Intf_SeqOfSectionPoint& Assign(const Intf_SeqOfSectionPoint& Other) ;
   const Intf_SeqOfSectionPoint& operator =(const Intf_SeqOfSectionPoint& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Intf_SectionPoint& T) ;
  
        void Append(Intf_SeqOfSectionPoint& S) ;
  
  Standard_EXPORT     void Prepend(const Intf_SectionPoint& T) ;
  
        void Prepend(Intf_SeqOfSectionPoint& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Intf_SectionPoint& T) ;
  
        void InsertBefore(const Standard_Integer Index,Intf_SeqOfSectionPoint& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Intf_SectionPoint& T) ;
  
        void InsertAfter(const Standard_Integer Index,Intf_SeqOfSectionPoint& S) ;
  
  Standard_EXPORT    const Intf_SectionPoint& First() const;
  
  Standard_EXPORT    const Intf_SectionPoint& Last() const;
  
        void Split(const Standard_Integer Index,Intf_SeqOfSectionPoint& Sub) ;
  
  Standard_EXPORT    const Intf_SectionPoint& Value(const Standard_Integer Index) const;
   const Intf_SectionPoint& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Intf_SectionPoint& I) ;
  
  Standard_EXPORT     Intf_SectionPoint& ChangeValue(const Standard_Integer Index) ;
    Intf_SectionPoint& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Intf_SeqOfSectionPoint(const Intf_SeqOfSectionPoint& Other);




};

#define SeqItem Intf_SectionPoint
#define SeqItem_hxx <Intf_SectionPoint.hxx>
#define TCollection_SequenceNode Intf_SequenceNodeOfSeqOfSectionPoint
#define TCollection_SequenceNode_hxx <Intf_SequenceNodeOfSeqOfSectionPoint.hxx>
#define Handle_TCollection_SequenceNode Handle_Intf_SequenceNodeOfSeqOfSectionPoint
#define TCollection_SequenceNode_Type_() Intf_SequenceNodeOfSeqOfSectionPoint_Type_()
#define TCollection_Sequence Intf_SeqOfSectionPoint
#define TCollection_Sequence_hxx <Intf_SeqOfSectionPoint.hxx>

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
