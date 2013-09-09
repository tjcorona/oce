// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDefs_Array1OfTabularData_HeaderFile
#define _IGESDefs_Array1OfTabularData_HeaderFile

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
#ifndef _Handle_IGESDefs_TabularData_HeaderFile
#include <Handle_IGESDefs_TabularData.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESDefs_TabularData;



class IGESDefs_Array1OfTabularData  {
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

  
  Standard_EXPORT   IGESDefs_Array1OfTabularData(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   IGESDefs_Array1OfTabularData(const Handle(IGESDefs_TabularData)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(IGESDefs_TabularData)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~IGESDefs_Array1OfTabularData()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const IGESDefs_Array1OfTabularData& Assign(const IGESDefs_Array1OfTabularData& Other) ;
   const IGESDefs_Array1OfTabularData& operator =(const IGESDefs_Array1OfTabularData& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(IGESDefs_TabularData)& Value) ;
  
       const Handle_IGESDefs_TabularData& Value(const Standard_Integer Index) const;
     const Handle_IGESDefs_TabularData& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_IGESDefs_TabularData& ChangeValue(const Standard_Integer Index) ;
      Handle_IGESDefs_TabularData& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   IGESDefs_Array1OfTabularData(const IGESDefs_Array1OfTabularData& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_IGESDefs_TabularData
#define Array1Item_hxx <IGESDefs_TabularData.hxx>
#define TCollection_Array1 IGESDefs_Array1OfTabularData
#define TCollection_Array1_hxx <IGESDefs_Array1OfTabularData.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
