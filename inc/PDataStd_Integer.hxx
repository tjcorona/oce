// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_Integer_HeaderFile
#define _PDataStd_Integer_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PDataStd_Integer_HeaderFile
#include <Handle_PDataStd_Integer.hxx>
#endif

#include <Standard_Integer.hxx>
#include <PDF_Attribute.hxx>


class PDataStd_Integer : public PDF_Attribute {

public:

  
  Standard_EXPORT   PDataStd_Integer();
  
  Standard_EXPORT   PDataStd_Integer(const Standard_Integer V);
  
  Standard_EXPORT     Standard_Integer Get() const;
  
  Standard_EXPORT     void Set(const Standard_Integer V) ;

PDataStd_Integer(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Standard_Integer _CSFDB_GetPDataStd_IntegermyValue() const { return myValue; }
    void _CSFDB_SetPDataStd_IntegermyValue(const Standard_Integer p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PDataStd_Integer)

protected:




private: 


Standard_Integer myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
