// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppParCurves_Array1OfMultiCurve_HeaderFile
#define _AppParCurves_Array1OfMultiCurve_HeaderFile

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
class AppParCurves_MultiCurve;



class AppParCurves_Array1OfMultiCurve  {
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

  
  Standard_EXPORT   AppParCurves_Array1OfMultiCurve(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   AppParCurves_Array1OfMultiCurve(const AppParCurves_MultiCurve& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const AppParCurves_MultiCurve& V) ;
  
  Standard_EXPORT     void Destroy() ;
~AppParCurves_Array1OfMultiCurve()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const AppParCurves_Array1OfMultiCurve& Assign(const AppParCurves_Array1OfMultiCurve& Other) ;
   const AppParCurves_Array1OfMultiCurve& operator =(const AppParCurves_Array1OfMultiCurve& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const AppParCurves_MultiCurve& Value) ;
  
       const AppParCurves_MultiCurve& Value(const Standard_Integer Index) const;
     const AppParCurves_MultiCurve& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        AppParCurves_MultiCurve& ChangeValue(const Standard_Integer Index) ;
      AppParCurves_MultiCurve& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   AppParCurves_Array1OfMultiCurve(const AppParCurves_Array1OfMultiCurve& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item AppParCurves_MultiCurve
#define Array1Item_hxx <AppParCurves_MultiCurve.hxx>
#define TCollection_Array1 AppParCurves_Array1OfMultiCurve
#define TCollection_Array1_hxx <AppParCurves_Array1OfMultiCurve.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
