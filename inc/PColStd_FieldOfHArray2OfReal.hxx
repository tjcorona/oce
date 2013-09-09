// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_FieldOfHArray2OfReal_HeaderFile
#define _PColStd_FieldOfHArray2OfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <DBC_BaseArray.hxx>
#include <Standard_Real.hxx>
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray2OfReal.hxx>
#include <Standard_Integer.hxx>
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PColStd_VArrayNodeOfFieldOfHArray2OfReal;
class PColStd_VArrayTNodeOfFieldOfHArray2OfReal;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PColStd_FieldOfHArray2OfReal);


class PColStd_FieldOfHArray2OfReal  : public DBC_BaseArray {

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

  
  Standard_EXPORT   PColStd_FieldOfHArray2OfReal();
  
  Standard_EXPORT   PColStd_FieldOfHArray2OfReal(const Standard_Integer Size);
  
  Standard_EXPORT   PColStd_FieldOfHArray2OfReal(const PColStd_FieldOfHArray2OfReal& Varray);
  
  Standard_EXPORT     void Resize(const Standard_Integer Size) ;
  
  Standard_EXPORT     void Assign(const PColStd_FieldOfHArray2OfReal& Other) ;
    void operator =(const PColStd_FieldOfHArray2OfReal& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Standard_Real& Value) ;
  
  Standard_EXPORT     Standard_Real& Value(const Standard_Integer Index) const;
    Standard_Real& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void Destroy() ;
~PColStd_FieldOfHArray2OfReal()
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
