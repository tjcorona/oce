// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PNaming_Naming_HeaderFile
#define _PNaming_Naming_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PNaming_Naming_HeaderFile
#include <Handle_PNaming_Naming.hxx>
#endif

#include <Handle_PNaming_Name.hxx>
#include <PDF_Attribute.hxx>
class PNaming_Name;


class PNaming_Naming : public PDF_Attribute {

public:

  
  Standard_EXPORT   PNaming_Naming();
  
  Standard_EXPORT     void SetName(const Handle(PNaming_Name)& aName) ;
  
  Standard_EXPORT     Handle_PNaming_Name GetName() const;

PNaming_Naming(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PNaming_Name) _CSFDB_GetPNaming_NamingmyName() const { return myName; }
    void _CSFDB_SetPNaming_NamingmyName(const Handle(PNaming_Name)& p) { myName = p; }



  DEFINE_STANDARD_RTTI(PNaming_Naming)

protected:




private: 


Handle_PNaming_Name myName;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
