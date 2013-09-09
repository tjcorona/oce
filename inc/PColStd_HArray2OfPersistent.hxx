// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_HArray2OfPersistent_HeaderFile
#define _PColStd_HArray2OfPersistent_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColStd_HArray2OfPersistent_HeaderFile
#include <Handle_PColStd_HArray2OfPersistent.hxx>
#endif

#include <Standard_Integer.hxx>
#include <Handle_Standard_Persistent.hxx>
#include <PColStd_FieldOfHArray2OfPersistent.hxx>
#include <Standard_Address.hxx>
#include <Standard_Persistent.hxx>
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray2OfPersistent.hxx>
#include <Standard_OStream.hxx>
class Standard_Persistent;
class Standard_RangeError;
class Standard_OutOfRange;
class PColStd_FieldOfHArray2OfPersistent;
class PColStd_VArrayNodeOfFieldOfHArray2OfPersistent;
class PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent;


class PColStd_HArray2OfPersistent : public Standard_Persistent {

public:

  
  Standard_EXPORT   PColStd_HArray2OfPersistent(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT   PColStd_HArray2OfPersistent(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2,const Handle(Standard_Persistent)& V);
  
  Standard_EXPORT     Standard_Integer ColLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
  Standard_EXPORT     Standard_Integer RowLength() const;
  
  Standard_EXPORT     void SetValue(const Standard_Integer Row,const Standard_Integer Col,const Handle(Standard_Persistent)& Value) ;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
  Standard_EXPORT     Handle_Standard_Persistent Value(const Standard_Integer Row,const Standard_Integer Col) const;
  
  Standard_EXPORT   virtual  Handle_Standard_Persistent ShallowCopy() const;
  
  Standard_EXPORT   virtual  void ShallowDump(Standard_OStream& s) const;

  PColStd_HArray2OfPersistent( )
{
  
}
PColStd_HArray2OfPersistent(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColStd_HArray2OfPersistentmyLowerRow() const { return myLowerRow; }
    void _CSFDB_SetPColStd_HArray2OfPersistentmyLowerRow(const Standard_Integer p) { myLowerRow = p; }
    Standard_Integer _CSFDB_GetPColStd_HArray2OfPersistentmyLowerCol() const { return myLowerCol; }
    void _CSFDB_SetPColStd_HArray2OfPersistentmyLowerCol(const Standard_Integer p) { myLowerCol = p; }
    Standard_Integer _CSFDB_GetPColStd_HArray2OfPersistentmyUpperRow() const { return myUpperRow; }
    void _CSFDB_SetPColStd_HArray2OfPersistentmyUpperRow(const Standard_Integer p) { myUpperRow = p; }
    Standard_Integer _CSFDB_GetPColStd_HArray2OfPersistentmyUpperCol() const { return myUpperCol; }
    void _CSFDB_SetPColStd_HArray2OfPersistentmyUpperCol(const Standard_Integer p) { myUpperCol = p; }
    const PColStd_FieldOfHArray2OfPersistent& _CSFDB_GetPColStd_HArray2OfPersistentData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColStd_HArray2OfPersistent)

protected:




private: 

  
  Standard_EXPORT     PColStd_FieldOfHArray2OfPersistent Field() const;
  
  Standard_EXPORT     Standard_Address Datas() const;

Standard_Integer myLowerRow;
Standard_Integer myLowerCol;
Standard_Integer myUpperRow;
Standard_Integer myUpperCol;
PColStd_FieldOfHArray2OfPersistent Data;


};

#define Item Handle_Standard_Persistent
#define Item_hxx <Standard_Persistent.hxx>
#define PCollection_FieldOfHArray2 PColStd_FieldOfHArray2OfPersistent
#define PCollection_FieldOfHArray2_hxx <PColStd_FieldOfHArray2OfPersistent.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray2 PColStd_VArrayNodeOfFieldOfHArray2OfPersistent
#define PCollection_VArrayNodeOfFieldOfHArray2_hxx <PColStd_VArrayNodeOfFieldOfHArray2OfPersistent.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray2 PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent
#define PCollection_VArrayTNodeOfFieldOfHArray2_hxx <PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray2 PColStd_VArrayNodeOfFieldOfHArray2OfPersistent
#define PCollection_VArrayNodeOfFieldOfHArray2_hxx <PColStd_VArrayNodeOfFieldOfHArray2OfPersistent.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray2 PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent
#define PCollection_VArrayTNodeOfFieldOfHArray2_hxx <PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray2 Handle_PColStd_VArrayNodeOfFieldOfHArray2OfPersistent
#define PCollection_VArrayNodeOfFieldOfHArray2_Type_() PColStd_VArrayNodeOfFieldOfHArray2OfPersistent_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray2 Handle_PColStd_VArrayNodeOfFieldOfHArray2OfPersistent
#define PCollection_VArrayNodeOfFieldOfHArray2_Type_() PColStd_VArrayNodeOfFieldOfHArray2OfPersistent_Type_()
#define PCollection_HArray2 PColStd_HArray2OfPersistent
#define PCollection_HArray2_hxx <PColStd_HArray2OfPersistent.hxx>
#define Handle_PCollection_HArray2 Handle_PColStd_HArray2OfPersistent
#define PCollection_HArray2_Type_() PColStd_HArray2OfPersistent_Type_()

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
inline void ShallowDump(const Handle_PColStd_HArray2OfPersistent& me,Standard_OStream& s) {
 me->ShallowDump(s);
}



#endif
