// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_LabelArray1_HeaderFile
#define _TDataStd_LabelArray1_HeaderFile

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
class TDF_Label;



class TDataStd_LabelArray1  {
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

  
  Standard_EXPORT   TDataStd_LabelArray1(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   TDataStd_LabelArray1(const TDF_Label& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const TDF_Label& V) ;
  
  Standard_EXPORT     void Destroy() ;
~TDataStd_LabelArray1()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const TDataStd_LabelArray1& Assign(const TDataStd_LabelArray1& Other) ;
   const TDataStd_LabelArray1& operator =(const TDataStd_LabelArray1& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const TDF_Label& Value) ;
  
       const TDF_Label& Value(const Standard_Integer Index) const;
     const TDF_Label& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        TDF_Label& ChangeValue(const Standard_Integer Index) ;
      TDF_Label& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   TDataStd_LabelArray1(const TDataStd_LabelArray1& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item TDF_Label
#define Array1Item_hxx <TDF_Label.hxx>
#define TCollection_Array1 TDataStd_LabelArray1
#define TCollection_Array1_hxx <TDataStd_LabelArray1.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
