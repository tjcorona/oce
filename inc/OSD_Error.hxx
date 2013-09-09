// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_Error_HeaderFile
#define _OSD_Error_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _OSD_WhoAmI_HeaderFile
#include <OSD_WhoAmI.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class OSD_OSDError;
class TCollection_AsciiString;


//! Management of OSD errors <br>
class OSD_Error  {
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

  //! Initializes Error to be without any Error. <br>
//!          This is only used by OSD, not by programmer. <br>
  Standard_EXPORT   OSD_Error();
  //! Raises OSD_Error with accurate error message. <br>
  Standard_EXPORT     void Perror() ;
  //! Instantiates error <br>
//!          This is only used by OSD methods to instantiates an error code. <br>
//!          No description is done for the programmer. <br>
  Standard_EXPORT     void SetValue(const Standard_Integer Errcode,const Standard_Integer From,const TCollection_AsciiString& Message) ;
  //! Returns an accurate error code. <br>
//!          To test these values, you must include "OSD_ErrorList.hxx" <br>
  Standard_EXPORT     Standard_Integer Error() const;
  //! Returns TRUE if an error occurs <br>
//!          This is a way to test if a system call succeeded or not. <br>
  Standard_EXPORT     Standard_Boolean Failed() const;
  //! Resets error counter to zero <br>
//!          This allows the user to ignore an error (WARNING). <br>
  Standard_EXPORT     void Reset() ;





protected:





private:



TCollection_AsciiString myMessage;
Standard_Integer myErrno;
OSD_WhoAmI myCode;
Standard_Integer extCode;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
