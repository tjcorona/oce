// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SortTools_HeapSortOfReal_HeaderFile
#define _SortTools_HeapSortOfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TColStd_Array1OfReal;
class TCollection_CompareOfReal;



class SortTools_HeapSortOfReal  {
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

  
  Standard_EXPORT   static  void Sort(TColStd_Array1OfReal& TheArray,const TCollection_CompareOfReal& Comp) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
