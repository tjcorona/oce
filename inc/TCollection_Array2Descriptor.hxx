// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TCollection_Array2Descriptor_HeaderFile
#define _TCollection_Array2Descriptor_HeaderFile

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



class TCollection_Array2Descriptor  {
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

  
  Standard_EXPORT     Standard_Integer UpperRow() const;
  
  Standard_EXPORT     Standard_Integer LowerRow() const;
  
  Standard_EXPORT     Standard_Integer UpperCol() const;
  
  Standard_EXPORT     Standard_Integer LowerCol() const;
  
  Standard_EXPORT     Standard_Address Address() const;





protected:

  
  Standard_EXPORT   TCollection_Array2Descriptor(const Standard_Integer aLowerRow,const Standard_Integer aUpperRow,const Standard_Integer aLowerCol,const Standard_Integer aUpperCol,const Standard_Address anAddress);




private:



Standard_Address myAddress;
Standard_Integer myLowerRow;
Standard_Integer myLowerCol;
Standard_Integer myUpperRow;
Standard_Integer myUpperCol;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
