// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_FieldOfHArray1OfByte_HeaderFile
#define _PDataStd_FieldOfHArray1OfByte_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <DBC_BaseArray.hxx>
#include <Standard_Byte.hxx>
#include <Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfByte.hxx>
#include <Standard_Integer.hxx>
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PDataStd_VArrayNodeOfFieldOfHArray1OfByte;
class PDataStd_VArrayTNodeOfFieldOfHArray1OfByte;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PDataStd_FieldOfHArray1OfByte);


class PDataStd_FieldOfHArray1OfByte  : public DBC_BaseArray {

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

  
  Standard_EXPORT   PDataStd_FieldOfHArray1OfByte();
  
  Standard_EXPORT   PDataStd_FieldOfHArray1OfByte(const Standard_Integer Size);
  
  Standard_EXPORT   PDataStd_FieldOfHArray1OfByte(const PDataStd_FieldOfHArray1OfByte& Varray);
  
  Standard_EXPORT     void Resize(const Standard_Integer Size) ;
  
  Standard_EXPORT     void Assign(const PDataStd_FieldOfHArray1OfByte& Other) ;
    void operator =(const PDataStd_FieldOfHArray1OfByte& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Standard_Byte& Value) ;
  
  Standard_EXPORT     Standard_Byte& Value(const Standard_Integer Index) const;
    Standard_Byte& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void Destroy() ;
~PDataStd_FieldOfHArray1OfByte()
{
  Destroy();
}



protected:




private: 

#ifdef CSFDB
// DBC_VArray : field
//
#endif



};





// other Inline functions and methods (like "C++: function call" methods)


#endif
