// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FWOSDriver_Driver_HeaderFile
#define _FWOSDriver_Driver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_FWOSDriver_Driver_HeaderFile
#include <Handle_FWOSDriver_Driver.hxx>
#endif

#ifndef _CDF_MetaDataDriver_HeaderFile
#include <CDF_MetaDataDriver.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_CDM_MetaData_HeaderFile
#include <Handle_CDM_MetaData.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
class TCollection_ExtendedString;
class CDM_MetaData;
class CDM_Document;



class FWOSDriver_Driver : public CDF_MetaDataDriver {

public:

  //! initializes the MetaDatadriver with its specific name. <br>
  Standard_EXPORT   FWOSDriver_Driver();
  //! indicate whether a file exists corresponding to the folder and the name <br>
  Standard_EXPORT     Standard_Boolean Find(const TCollection_ExtendedString& aFolder,const TCollection_ExtendedString& aName,const TCollection_ExtendedString& aVersion) ;
  
  Standard_EXPORT     Standard_Boolean HasReadPermission(const TCollection_ExtendedString& aFolder,const TCollection_ExtendedString& aName,const TCollection_ExtendedString& aVersion) ;
  
  Standard_EXPORT     Standard_Boolean FindFolder(const TCollection_ExtendedString& aFolder) ;
  
  Standard_EXPORT     TCollection_ExtendedString DefaultFolder() ;
  
  Standard_EXPORT     TCollection_ExtendedString BuildFileName(const Handle(CDM_Document)& aDocument) ;
  
  Standard_EXPORT   virtual  TCollection_ExtendedString SetName(const Handle(CDM_Document)& aDocument,const TCollection_ExtendedString& aName) ;




  DEFINE_STANDARD_RTTI(FWOSDriver_Driver)

protected:




private: 

  
  Standard_EXPORT     Handle_CDM_MetaData MetaData(const TCollection_ExtendedString& aFolder,const TCollection_ExtendedString& aName,const TCollection_ExtendedString& aVersion) ;
  
  Standard_EXPORT     Handle_CDM_MetaData CreateMetaData(const Handle(CDM_Document)& aDocument,const TCollection_ExtendedString& aFileName) ;
  
  Standard_EXPORT   static  TCollection_ExtendedString Concatenate(const TCollection_ExtendedString& aFolder,const TCollection_ExtendedString& aName) ;
  
  Standard_EXPORT     Handle_CDM_MetaData BuildMetaData(const TCollection_ExtendedString& aFileName) ;



};





// other Inline functions and methods (like "C++: function call" methods)


#endif