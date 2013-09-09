// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinXCAFDrivers_HeaderFile
#define _BinXCAFDrivers_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <Handle_Standard_Transient.hxx>
#include <Handle_BinMDF_ADriverTable.hxx>
#include <Handle_CDM_MessageDriver.hxx>
class Standard_Transient;
class Standard_GUID;
class BinMDF_ADriverTable;
class CDM_MessageDriver;
class BinXCAFDrivers_DocumentStorageDriver;
class BinXCAFDrivers_DocumentRetrievalDriver;



class BinXCAFDrivers  {
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

  
  Standard_EXPORT   static  Handle_Standard_Transient Factory(const Standard_GUID& theGUID) ;
  //! Creates the table of drivers of types supported <br>
  Standard_EXPORT   static  Handle_BinMDF_ADriverTable AttributeDrivers(const Handle(CDM_MessageDriver)& MsgDrv) ;





protected:





private:




friend class BinXCAFDrivers_DocumentStorageDriver;
friend class BinXCAFDrivers_DocumentRetrievalDriver;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
