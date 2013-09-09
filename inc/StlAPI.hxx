// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StlAPI_HeaderFile
#define _StlAPI_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <Standard_CString.hxx>
#include <Standard_Boolean.hxx>
class TopoDS_Shape;
class StlAPI_Writer;
class StlAPI_Reader;


//! Offers the API for STL data manipulation. <br>
//! <br>
class StlAPI  {
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

  //! Convert and write shape to STL format. <br>
//!         file is written in binary if aAsciiMode is False <br>
//!         otherwise it is written in Ascii (by default) <br>
  Standard_EXPORT   static  void Write(const TopoDS_Shape& aShape,const Standard_CString aFile,const Standard_Boolean aAsciiMode = Standard_True) ;
  //! Create a shape from a STL format. <br>
  Standard_EXPORT   static  void Read(TopoDS_Shape& aShape,const Standard_CString aFile) ;





protected:





private:




friend class StlAPI_Writer;
friend class StlAPI_Reader;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
