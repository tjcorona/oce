// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Resource_QuickSortOfArray1_HeaderFile
#define _Resource_QuickSortOfArray1_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

class TCollection_AsciiString;
class TColStd_Array1OfAsciiString;
class Resource_LexicalCompare;



class Resource_QuickSortOfArray1  {
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

  
  Standard_EXPORT   static  void Sort(TColStd_Array1OfAsciiString& TheArray,const Resource_LexicalCompare& Comp) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
