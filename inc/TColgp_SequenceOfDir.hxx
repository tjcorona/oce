// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_SequenceOfDir_HeaderFile
#define _TColgp_SequenceOfDir_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_TColgp_SequenceNodeOfSequenceOfDir_HeaderFile
#include <Handle_TColgp_SequenceNodeOfSequenceOfDir.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class gp_Dir;
class TColgp_SequenceNodeOfSequenceOfDir;



class TColgp_SequenceOfDir  : public TCollection_BaseSequence {
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

  
      TColgp_SequenceOfDir();
  
  Standard_EXPORT     void Clear() ;
~TColgp_SequenceOfDir()
{
  Clear();
}
  
  Standard_EXPORT    const TColgp_SequenceOfDir& Assign(const TColgp_SequenceOfDir& Other) ;
   const TColgp_SequenceOfDir& operator =(const TColgp_SequenceOfDir& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const gp_Dir& T) ;
  
        void Append(TColgp_SequenceOfDir& S) ;
  
  Standard_EXPORT     void Prepend(const gp_Dir& T) ;
  
        void Prepend(TColgp_SequenceOfDir& S) ;
  
        void InsertBefore(const Standard_Integer Index,const gp_Dir& T) ;
  
        void InsertBefore(const Standard_Integer Index,TColgp_SequenceOfDir& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const gp_Dir& T) ;
  
        void InsertAfter(const Standard_Integer Index,TColgp_SequenceOfDir& S) ;
  
  Standard_EXPORT    const gp_Dir& First() const;
  
  Standard_EXPORT    const gp_Dir& Last() const;
  
        void Split(const Standard_Integer Index,TColgp_SequenceOfDir& Sub) ;
  
  Standard_EXPORT    const gp_Dir& Value(const Standard_Integer Index) const;
   const gp_Dir& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const gp_Dir& I) ;
  
  Standard_EXPORT     gp_Dir& ChangeValue(const Standard_Integer Index) ;
    gp_Dir& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   TColgp_SequenceOfDir(const TColgp_SequenceOfDir& Other);




};

#define SeqItem gp_Dir
#define SeqItem_hxx <gp_Dir.hxx>
#define TCollection_SequenceNode TColgp_SequenceNodeOfSequenceOfDir
#define TCollection_SequenceNode_hxx <TColgp_SequenceNodeOfSequenceOfDir.hxx>
#define Handle_TCollection_SequenceNode Handle_TColgp_SequenceNodeOfSequenceOfDir
#define TCollection_SequenceNode_Type_() TColgp_SequenceNodeOfSequenceOfDir_Type_()
#define TCollection_Sequence TColgp_SequenceOfDir
#define TCollection_Sequence_hxx <TColgp_SequenceOfDir.hxx>

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
