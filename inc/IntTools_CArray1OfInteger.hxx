// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_CArray1OfInteger_HeaderFile
#define _IntTools_CArray1OfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_ConstructionError;
class Standard_OutOfRange;
class Standard_OutOfMemory;



class IntTools_CArray1OfInteger  {
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

  
  Standard_EXPORT   IntTools_CArray1OfInteger(const Standard_Integer Length = 0);
  
  Standard_EXPORT   IntTools_CArray1OfInteger(const Standard_Integer& Item,const Standard_Integer Length);
  
  Standard_EXPORT     void Init(const Standard_Integer& V) ;
  
  Standard_EXPORT     void Resize(const Standard_Integer theNewLength) ;
  
  Standard_EXPORT     void Destroy() ;
~IntTools_CArray1OfInteger()
{
  Destroy();
}
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Append(const Standard_Integer& Value) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Standard_Integer& Value) ;
  
  Standard_EXPORT    const Standard_Integer& Value(const Standard_Integer Index) const;
   const Standard_Integer& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     Standard_Integer& ChangeValue(const Standard_Integer Index) ;
    Standard_Integer& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     Standard_Boolean IsEqual(const IntTools_CArray1OfInteger& Other) const;
    Standard_Boolean operator ==(const IntTools_CArray1OfInteger& Other) const
{
  return IsEqual(Other);
}





protected:





private:

  
  Standard_EXPORT   IntTools_CArray1OfInteger(const IntTools_CArray1OfInteger& AnArray);


Standard_Address myStart;
Standard_Integer myLength;
Standard_Boolean myIsAllocated;


};

#define Array1Item Standard_Integer
#define Array1Item_hxx <Standard_Integer.hxx>
#define IntTools_CArray1 IntTools_CArray1OfInteger
#define IntTools_CArray1_hxx <IntTools_CArray1OfInteger.hxx>

#include <IntTools_CArray1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef IntTools_CArray1
#undef IntTools_CArray1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
