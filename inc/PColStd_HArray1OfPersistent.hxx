// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_HArray1OfPersistent_HeaderFile
#define _PColStd_HArray1OfPersistent_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColStd_HArray1OfPersistent_HeaderFile
#include <Handle_PColStd_HArray1OfPersistent.hxx>
#endif

#include <Standard_Integer.hxx>
#include <Handle_Standard_Persistent.hxx>
#include <PColStd_FieldOfHArray1OfPersistent.hxx>
#include <Standard_Address.hxx>
#include <Standard_Persistent.hxx>
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray1OfPersistent.hxx>
#include <Standard_OStream.hxx>
class Standard_Persistent;
class Standard_OutOfRange;
class Standard_RangeError;
class PColStd_FieldOfHArray1OfPersistent;
class PColStd_VArrayNodeOfFieldOfHArray1OfPersistent;
class PColStd_VArrayTNodeOfFieldOfHArray1OfPersistent;


class PColStd_HArray1OfPersistent : public Standard_Persistent {

public:

  
  Standard_EXPORT   PColStd_HArray1OfPersistent(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   PColStd_HArray1OfPersistent(const Standard_Integer Low,const Standard_Integer Up,const Handle(Standard_Persistent)& V);
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Standard_Persistent)& Value) ;
  
        Standard_Integer Upper() const;
  
  Standard_EXPORT     Handle_Standard_Persistent Value(const Standard_Integer Index) const;
  
  Standard_EXPORT   virtual  Handle_Standard_Persistent ShallowCopy() const;
  
  Standard_EXPORT   virtual  void ShallowDump(Standard_OStream& s) const;

  PColStd_HArray1OfPersistent( )
{
  
}
PColStd_HArray1OfPersistent(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColStd_HArray1OfPersistentLowerBound() const { return LowerBound; }
    void _CSFDB_SetPColStd_HArray1OfPersistentLowerBound(const Standard_Integer p) { LowerBound = p; }
    Standard_Integer _CSFDB_GetPColStd_HArray1OfPersistentUpperBound() const { return UpperBound; }
    void _CSFDB_SetPColStd_HArray1OfPersistentUpperBound(const Standard_Integer p) { UpperBound = p; }
    const PColStd_FieldOfHArray1OfPersistent& _CSFDB_GetPColStd_HArray1OfPersistentData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColStd_HArray1OfPersistent)

protected:




private: 

  
  Standard_EXPORT     PColStd_FieldOfHArray1OfPersistent Field() const;
  
  Standard_EXPORT     Standard_Address Datas() const;

Standard_Integer LowerBound;
Standard_Integer UpperBound;
PColStd_FieldOfHArray1OfPersistent Data;


};

#define Item Handle_Standard_Persistent
#define Item_hxx <Standard_Persistent.hxx>
#define PCollection_FieldOfHArray1 PColStd_FieldOfHArray1OfPersistent
#define PCollection_FieldOfHArray1_hxx <PColStd_FieldOfHArray1OfPersistent.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColStd_VArrayNodeOfFieldOfHArray1OfPersistent
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PColStd_VArrayNodeOfFieldOfHArray1OfPersistent.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColStd_VArrayTNodeOfFieldOfHArray1OfPersistent
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PColStd_VArrayTNodeOfFieldOfHArray1OfPersistent.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColStd_VArrayNodeOfFieldOfHArray1OfPersistent
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PColStd_VArrayNodeOfFieldOfHArray1OfPersistent.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColStd_VArrayTNodeOfFieldOfHArray1OfPersistent
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PColStd_VArrayTNodeOfFieldOfHArray1OfPersistent.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColStd_VArrayNodeOfFieldOfHArray1OfPersistent
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColStd_VArrayNodeOfFieldOfHArray1OfPersistent_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColStd_VArrayNodeOfFieldOfHArray1OfPersistent
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColStd_VArrayNodeOfFieldOfHArray1OfPersistent_Type_()
#define PCollection_HArray1 PColStd_HArray1OfPersistent
#define PCollection_HArray1_hxx <PColStd_HArray1OfPersistent.hxx>
#define Handle_PCollection_HArray1 Handle_PColStd_HArray1OfPersistent
#define PCollection_HArray1_Type_() PColStd_HArray1OfPersistent_Type_()

#include <PCollection_HArray1.lxx>

#undef Item
#undef Item_hxx
#undef PCollection_FieldOfHArray1
#undef PCollection_FieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef PCollection_HArray1
#undef PCollection_HArray1_hxx
#undef Handle_PCollection_HArray1
#undef PCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline void ShallowDump(const Handle_PColStd_HArray1OfPersistent& me,Standard_OStream& s) {
 me->ShallowDump(s);
}



#endif
