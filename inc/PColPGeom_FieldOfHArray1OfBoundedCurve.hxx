// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColPGeom_FieldOfHArray1OfBoundedCurve_HeaderFile
#define _PColPGeom_FieldOfHArray1OfBoundedCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <DBC_BaseArray.hxx>
#include <Handle_PGeom_BoundedCurve.hxx>
#include <Handle_PColPGeom_VArrayNodeOfFieldOfHArray1OfBoundedCurve.hxx>
#include <Standard_Integer.hxx>
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PGeom_BoundedCurve;
class PColPGeom_VArrayNodeOfFieldOfHArray1OfBoundedCurve;
class PColPGeom_VArrayTNodeOfFieldOfHArray1OfBoundedCurve;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PColPGeom_FieldOfHArray1OfBoundedCurve);


class PColPGeom_FieldOfHArray1OfBoundedCurve  : public DBC_BaseArray {

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

  
  Standard_EXPORT   PColPGeom_FieldOfHArray1OfBoundedCurve();
  
  Standard_EXPORT   PColPGeom_FieldOfHArray1OfBoundedCurve(const Standard_Integer Size);
  
  Standard_EXPORT   PColPGeom_FieldOfHArray1OfBoundedCurve(const PColPGeom_FieldOfHArray1OfBoundedCurve& Varray);
  
  Standard_EXPORT     void Resize(const Standard_Integer Size) ;
  
  Standard_EXPORT     void Assign(const PColPGeom_FieldOfHArray1OfBoundedCurve& Other) ;
    void operator =(const PColPGeom_FieldOfHArray1OfBoundedCurve& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(PGeom_BoundedCurve)& Value) ;
  
  Standard_EXPORT     Handle_PGeom_BoundedCurve& Value(const Standard_Integer Index) const;
    Handle_PGeom_BoundedCurve& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void Destroy() ;
~PColPGeom_FieldOfHArray1OfBoundedCurve()
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
