// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_HeaderFile
#define _IGESData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <Handle_IGESData_Protocol.hxx>
class IGESData_Protocol;
class IGESData_Protocol;
class IGESData_IGESModel;
class IGESData_IGESEntity;
class IGESData_LineFontEntity;
class IGESData_LevelListEntity;
class IGESData_TransfEntity;
class IGESData_ViewKindEntity;
class IGESData_LabelDisplayEntity;
class IGESData_ColorEntity;
class IGESData_NameEntity;
class IGESData_SingleParentEntity;
class IGESData_UndefinedEntity;
class IGESData_FreeFormatEntity;
class IGESData_GlobalSection;
class IGESData_DefSwitch;
class IGESData_DirChecker;
class IGESData_IGESReaderData;
class IGESData_IGESReaderTool;
class IGESData_ParamReader;
class IGESData_ParamCursor;
class IGESData_DirPart;
class IGESData_IGESType;
class IGESData_FileRecognizer;
class IGESData_IGESWriter;
class IGESData_IGESDumper;
class IGESData_BasicEditor;
class IGESData_ToolLocation;
class IGESData_GeneralModule;
class IGESData_DefaultGeneral;
class IGESData_ReadWriteModule;
class IGESData_SpecificModule;
class IGESData_DefaultSpecific;
class IGESData_FileProtocol;
class IGESData_WriterLib;
class IGESData_SpecificLib;
class IGESData_Array1OfDirPart;
class IGESData_Array1OfIGESEntity;
class IGESData_HArray1OfIGESEntity;
class IGESData_GlobalNodeOfWriterLib;
class IGESData_NodeOfWriterLib;
class IGESData_GlobalNodeOfSpecificLib;
class IGESData_NodeOfSpecificLib;


//! basic description of an IGES Interface <br>
class IGESData  {
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

  //! Prepares General dynamic data used for IGESData specifically : <br>
//!           Protocol and Modules, which treat UndefinedEntity <br>
  Standard_EXPORT   static  void Init() ;
  //! Returns a Protocol from IGESData (avoids to create it) <br>
  Standard_EXPORT   static  Handle_IGESData_Protocol Protocol() ;





protected:





private:




friend class IGESData_Protocol;
friend class IGESData_IGESModel;
friend class IGESData_IGESEntity;
friend class IGESData_LineFontEntity;
friend class IGESData_LevelListEntity;
friend class IGESData_TransfEntity;
friend class IGESData_ViewKindEntity;
friend class IGESData_LabelDisplayEntity;
friend class IGESData_ColorEntity;
friend class IGESData_NameEntity;
friend class IGESData_SingleParentEntity;
friend class IGESData_UndefinedEntity;
friend class IGESData_FreeFormatEntity;
friend class IGESData_GlobalSection;
friend class IGESData_DefSwitch;
friend class IGESData_DirChecker;
friend class IGESData_IGESReaderData;
friend class IGESData_IGESReaderTool;
friend class IGESData_ParamReader;
friend class IGESData_ParamCursor;
friend class IGESData_DirPart;
friend class IGESData_IGESType;
friend class IGESData_FileRecognizer;
friend class IGESData_IGESWriter;
friend class IGESData_IGESDumper;
friend class IGESData_BasicEditor;
friend class IGESData_ToolLocation;
friend class IGESData_GeneralModule;
friend class IGESData_DefaultGeneral;
friend class IGESData_ReadWriteModule;
friend class IGESData_SpecificModule;
friend class IGESData_DefaultSpecific;
friend class IGESData_FileProtocol;
friend class IGESData_WriterLib;
friend class IGESData_SpecificLib;
friend class IGESData_Array1OfDirPart;
friend class IGESData_Array1OfIGESEntity;
friend class IGESData_HArray1OfIGESEntity;
friend class IGESData_GlobalNodeOfWriterLib;
friend class IGESData_NodeOfWriterLib;
friend class IGESData_GlobalNodeOfSpecificLib;
friend class IGESData_NodeOfSpecificLib;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
