// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PCollection_PrivCompareOfReal_HeaderFile
#define _PCollection_PrivCompareOfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <Standard_Storable.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PCollection_PrivCompareOfReal);


class PCollection_PrivCompareOfReal  {

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

  
  Standard_EXPORT   virtual  Standard_Boolean IsLower(const Standard_Real& Left,const Standard_Real& Right) const;
  
  Standard_EXPORT   virtual  Standard_Boolean IsGreater(const Standard_Real& Left,const Standard_Real& Right) const;
  
  Standard_EXPORT     Standard_Boolean IsEqual(const Standard_Real& Left,const Standard_Real& Right) const;



protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
