// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_HArray2OfDir_HeaderFile
#define _PColgp_HArray2OfDir_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColgp_HArray2OfDir_HeaderFile
#include <Handle_PColgp_HArray2OfDir.hxx>
#endif

#include <Standard_Integer.hxx>
#include <gp_Dir.hxx>
#include <Handle_Standard_Persistent.hxx>
#include <PColgp_FieldOfHArray2OfDir.hxx>
#include <Standard_Address.hxx>
#include <Standard_Persistent.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray2OfDir.hxx>
#include <Standard_OStream.hxx>
class Standard_Persistent;
class Standard_RangeError;
class Standard_OutOfRange;
class gp_Dir;
class PColgp_FieldOfHArray2OfDir;
class PColgp_VArrayNodeOfFieldOfHArray2OfDir;
class PColgp_VArrayTNodeOfFieldOfHArray2OfDir;


class PColgp_HArray2OfDir : public Standard_Persistent {

public:

  
  Standard_EXPORT   PColgp_HArray2OfDir(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT   PColgp_HArray2OfDir(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2,const gp_Dir& V);
  
  Standard_EXPORT     Standard_Integer ColLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
  Standard_EXPORT     Standard_Integer RowLength() const;
  
  Standard_EXPORT     void SetValue(const Standard_Integer Row,const Standard_Integer Col,const gp_Dir& Value) ;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
  Standard_EXPORT     gp_Dir Value(const Standard_Integer Row,const Standard_Integer Col) const;
  
  Standard_EXPORT   virtual  Handle_Standard_Persistent ShallowCopy() const;
  
  Standard_EXPORT   virtual  void ShallowDump(Standard_OStream& s) const;

  PColgp_HArray2OfDir( )
{
  
}
PColgp_HArray2OfDir(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColgp_HArray2OfDirmyLowerRow() const { return myLowerRow; }
    void _CSFDB_SetPColgp_HArray2OfDirmyLowerRow(const Standard_Integer p) { myLowerRow = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray2OfDirmyLowerCol() const { return myLowerCol; }
    void _CSFDB_SetPColgp_HArray2OfDirmyLowerCol(const Standard_Integer p) { myLowerCol = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray2OfDirmyUpperRow() const { return myUpperRow; }
    void _CSFDB_SetPColgp_HArray2OfDirmyUpperRow(const Standard_Integer p) { myUpperRow = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray2OfDirmyUpperCol() const { return myUpperCol; }
    void _CSFDB_SetPColgp_HArray2OfDirmyUpperCol(const Standard_Integer p) { myUpperCol = p; }
    const PColgp_FieldOfHArray2OfDir& _CSFDB_GetPColgp_HArray2OfDirData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColgp_HArray2OfDir)

protected:




private: 

  
  Standard_EXPORT     PColgp_FieldOfHArray2OfDir Field() const;
  
  Standard_EXPORT     Standard_Address Datas() const;

Standard_Integer myLowerRow;
Standard_Integer myLowerCol;
Standard_Integer myUpperRow;
Standard_Integer myUpperCol;
PColgp_FieldOfHArray2OfDir Data;


};

#define Item gp_Dir
#define Item_hxx <gp_Dir.hxx>
#define PCollection_FieldOfHArray2 PColgp_FieldOfHArray2OfDir
#define PCollection_FieldOfHArray2_hxx <PColgp_FieldOfHArray2OfDir.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray2 PColgp_VArrayNodeOfFieldOfHArray2OfDir
#define PCollection_VArrayNodeOfFieldOfHArray2_hxx <PColgp_VArrayNodeOfFieldOfHArray2OfDir.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray2 PColgp_VArrayTNodeOfFieldOfHArray2OfDir
#define PCollection_VArrayTNodeOfFieldOfHArray2_hxx <PColgp_VArrayTNodeOfFieldOfHArray2OfDir.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray2 PColgp_VArrayNodeOfFieldOfHArray2OfDir
#define PCollection_VArrayNodeOfFieldOfHArray2_hxx <PColgp_VArrayNodeOfFieldOfHArray2OfDir.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray2 PColgp_VArrayTNodeOfFieldOfHArray2OfDir
#define PCollection_VArrayTNodeOfFieldOfHArray2_hxx <PColgp_VArrayTNodeOfFieldOfHArray2OfDir.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray2 Handle_PColgp_VArrayNodeOfFieldOfHArray2OfDir
#define PCollection_VArrayNodeOfFieldOfHArray2_Type_() PColgp_VArrayNodeOfFieldOfHArray2OfDir_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray2 Handle_PColgp_VArrayNodeOfFieldOfHArray2OfDir
#define PCollection_VArrayNodeOfFieldOfHArray2_Type_() PColgp_VArrayNodeOfFieldOfHArray2OfDir_Type_()
#define PCollection_HArray2 PColgp_HArray2OfDir
#define PCollection_HArray2_hxx <PColgp_HArray2OfDir.hxx>
#define Handle_PCollection_HArray2 Handle_PColgp_HArray2OfDir
#define PCollection_HArray2_Type_() PColgp_HArray2OfDir_Type_()

#include <PCollection_HArray2.lxx>

#undef Item
#undef Item_hxx
#undef PCollection_FieldOfHArray2
#undef PCollection_FieldOfHArray2_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray2
#undef PCollection_VArrayNodeOfFieldOfHArray2_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray2
#undef PCollection_VArrayTNodeOfFieldOfHArray2_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray2
#undef PCollection_VArrayNodeOfFieldOfHArray2_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray2
#undef PCollection_VArrayTNodeOfFieldOfHArray2_hxx
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray2
#undef PCollection_VArrayNodeOfFieldOfHArray2_Type_
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray2
#undef PCollection_VArrayNodeOfFieldOfHArray2_Type_
#undef PCollection_HArray2
#undef PCollection_HArray2_hxx
#undef Handle_PCollection_HArray2
#undef PCollection_HArray2_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline void ShallowDump(const Handle_PColgp_HArray2OfDir& me,Standard_OStream& s) {
 me->ShallowDump(s);
}



#endif
