// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAdaptor_Array1OfCurve_HeaderFile
#define _BRepAdaptor_Array1OfCurve_HeaderFile

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
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class BRepAdaptor_Curve;



class BRepAdaptor_Array1OfCurve  {
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

  
  Standard_EXPORT   BRepAdaptor_Array1OfCurve(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   BRepAdaptor_Array1OfCurve(const BRepAdaptor_Curve& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const BRepAdaptor_Curve& V) ;
  
  Standard_EXPORT     void Destroy() ;
~BRepAdaptor_Array1OfCurve()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const BRepAdaptor_Array1OfCurve& Assign(const BRepAdaptor_Array1OfCurve& Other) ;
   const BRepAdaptor_Array1OfCurve& operator =(const BRepAdaptor_Array1OfCurve& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const BRepAdaptor_Curve& Value) ;
  
       const BRepAdaptor_Curve& Value(const Standard_Integer Index) const;
     const BRepAdaptor_Curve& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        BRepAdaptor_Curve& ChangeValue(const Standard_Integer Index) ;
      BRepAdaptor_Curve& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   BRepAdaptor_Array1OfCurve(const BRepAdaptor_Array1OfCurve& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item BRepAdaptor_Curve
#define Array1Item_hxx <BRepAdaptor_Curve.hxx>
#define TCollection_Array1 BRepAdaptor_Array1OfCurve
#define TCollection_Array1_hxx <BRepAdaptor_Array1OfCurve.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
