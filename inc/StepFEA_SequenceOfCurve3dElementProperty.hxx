// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_SequenceOfCurve3dElementProperty_HeaderFile
#define _StepFEA_SequenceOfCurve3dElementProperty_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_StepFEA_Curve3dElementProperty_HeaderFile
#include <Handle_StepFEA_Curve3dElementProperty.hxx>
#endif
#ifndef _Handle_StepFEA_SequenceNodeOfSequenceOfCurve3dElementProperty_HeaderFile
#include <Handle_StepFEA_SequenceNodeOfSequenceOfCurve3dElementProperty.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepFEA_Curve3dElementProperty;
class StepFEA_SequenceNodeOfSequenceOfCurve3dElementProperty;



class StepFEA_SequenceOfCurve3dElementProperty  : public TCollection_BaseSequence {
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

  
      StepFEA_SequenceOfCurve3dElementProperty();
  
  Standard_EXPORT     void Clear() ;
~StepFEA_SequenceOfCurve3dElementProperty()
{
  Clear();
}
  
  Standard_EXPORT    const StepFEA_SequenceOfCurve3dElementProperty& Assign(const StepFEA_SequenceOfCurve3dElementProperty& Other) ;
   const StepFEA_SequenceOfCurve3dElementProperty& operator =(const StepFEA_SequenceOfCurve3dElementProperty& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(StepFEA_Curve3dElementProperty)& T) ;
  
        void Append(StepFEA_SequenceOfCurve3dElementProperty& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(StepFEA_Curve3dElementProperty)& T) ;
  
        void Prepend(StepFEA_SequenceOfCurve3dElementProperty& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(StepFEA_Curve3dElementProperty)& T) ;
  
        void InsertBefore(const Standard_Integer Index,StepFEA_SequenceOfCurve3dElementProperty& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(StepFEA_Curve3dElementProperty)& T) ;
  
        void InsertAfter(const Standard_Integer Index,StepFEA_SequenceOfCurve3dElementProperty& S) ;
  
  Standard_EXPORT    const Handle_StepFEA_Curve3dElementProperty& First() const;
  
  Standard_EXPORT    const Handle_StepFEA_Curve3dElementProperty& Last() const;
  
        void Split(const Standard_Integer Index,StepFEA_SequenceOfCurve3dElementProperty& Sub) ;
  
  Standard_EXPORT    const Handle_StepFEA_Curve3dElementProperty& Value(const Standard_Integer Index) const;
   const Handle_StepFEA_Curve3dElementProperty& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(StepFEA_Curve3dElementProperty)& I) ;
  
  Standard_EXPORT     Handle_StepFEA_Curve3dElementProperty& ChangeValue(const Standard_Integer Index) ;
    Handle_StepFEA_Curve3dElementProperty& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   StepFEA_SequenceOfCurve3dElementProperty(const StepFEA_SequenceOfCurve3dElementProperty& Other);




};

#define SeqItem Handle_StepFEA_Curve3dElementProperty
#define SeqItem_hxx <StepFEA_Curve3dElementProperty.hxx>
#define TCollection_SequenceNode StepFEA_SequenceNodeOfSequenceOfCurve3dElementProperty
#define TCollection_SequenceNode_hxx <StepFEA_SequenceNodeOfSequenceOfCurve3dElementProperty.hxx>
#define Handle_TCollection_SequenceNode Handle_StepFEA_SequenceNodeOfSequenceOfCurve3dElementProperty
#define TCollection_SequenceNode_Type_() StepFEA_SequenceNodeOfSequenceOfCurve3dElementProperty_Type_()
#define TCollection_Sequence StepFEA_SequenceOfCurve3dElementProperty
#define TCollection_Sequence_hxx <StepFEA_SequenceOfCurve3dElementProperty.hxx>

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
