// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_Array1OfViewKindEntity_HeaderFile
#define _IGESDraw_Array1OfViewKindEntity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESData_ViewKindEntity_HeaderFile
#include <Handle_IGESData_ViewKindEntity.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESData_ViewKindEntity;



class IGESDraw_Array1OfViewKindEntity  {
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

  
  Standard_EXPORT   IGESDraw_Array1OfViewKindEntity(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   IGESDraw_Array1OfViewKindEntity(const Handle(IGESData_ViewKindEntity)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(IGESData_ViewKindEntity)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~IGESDraw_Array1OfViewKindEntity()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const IGESDraw_Array1OfViewKindEntity& Assign(const IGESDraw_Array1OfViewKindEntity& Other) ;
   const IGESDraw_Array1OfViewKindEntity& operator =(const IGESDraw_Array1OfViewKindEntity& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(IGESData_ViewKindEntity)& Value) ;
  
       const Handle_IGESData_ViewKindEntity& Value(const Standard_Integer Index) const;
     const Handle_IGESData_ViewKindEntity& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_IGESData_ViewKindEntity& ChangeValue(const Standard_Integer Index) ;
      Handle_IGESData_ViewKindEntity& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   IGESDraw_Array1OfViewKindEntity(const IGESDraw_Array1OfViewKindEntity& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_IGESData_ViewKindEntity
#define Array1Item_hxx <IGESData_ViewKindEntity.hxx>
#define TCollection_Array1 IGESDraw_Array1OfViewKindEntity
#define TCollection_Array1_hxx <IGESDraw_Array1OfViewKindEntity.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
