// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinMDF_TypeADriverMap_HeaderFile
#define _BinMDF_TypeADriverMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Handle_BinMDF_ADriver_HeaderFile
#include <Handle_BinMDF_ADriver.hxx>
#endif
#ifndef _Handle_BinMDF_DataMapNodeOfTypeADriverMap_HeaderFile
#include <Handle_BinMDF_DataMapNodeOfTypeADriverMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class Standard_Type;
class BinMDF_ADriver;
class TColStd_MapTransientHasher;
class BinMDF_DataMapNodeOfTypeADriverMap;
class BinMDF_DataMapIteratorOfTypeADriverMap;



class BinMDF_TypeADriverMap  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   BinMDF_TypeADriverMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     BinMDF_TypeADriverMap& Assign(const BinMDF_TypeADriverMap& Other) ;
    BinMDF_TypeADriverMap& operator =(const BinMDF_TypeADriverMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~BinMDF_TypeADriverMap()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Handle(Standard_Type)& K,const Handle(BinMDF_ADriver)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Handle(Standard_Type)& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Handle(Standard_Type)& K) ;
  
  Standard_EXPORT    const Handle_BinMDF_ADriver& Find(const Handle(Standard_Type)& K) const;
   const Handle_BinMDF_ADriver& operator()(const Handle(Standard_Type)& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_BinMDF_ADriver& ChangeFind(const Handle(Standard_Type)& K) ;
    Handle_BinMDF_ADriver& operator()(const Handle(Standard_Type)& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const Handle(Standard_Type)& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const Handle(Standard_Type)& K) ;





protected:





private:

  
  Standard_EXPORT   BinMDF_TypeADriverMap(const BinMDF_TypeADriverMap& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
