// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_ViewsVisibleWithAttr_HeaderFile
#define _IGESDraw_ViewsVisibleWithAttr_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDraw_ViewsVisibleWithAttr_HeaderFile
#include <Handle_IGESDraw_ViewsVisibleWithAttr.hxx>
#endif

#ifndef _Handle_IGESDraw_HArray1OfViewKindEntity_HeaderFile
#include <Handle_IGESDraw_HArray1OfViewKindEntity.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_IGESBasic_HArray1OfLineFontEntity_HeaderFile
#include <Handle_IGESBasic_HArray1OfLineFontEntity.hxx>
#endif
#ifndef _Handle_IGESGraph_HArray1OfColor_HeaderFile
#include <Handle_IGESGraph_HArray1OfColor.hxx>
#endif
#ifndef _Handle_IGESData_HArray1OfIGESEntity_HeaderFile
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#endif
#ifndef _IGESData_ViewKindEntity_HeaderFile
#include <IGESData_ViewKindEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_IGESData_ViewKindEntity_HeaderFile
#include <Handle_IGESData_ViewKindEntity.hxx>
#endif
#ifndef _Handle_IGESData_LineFontEntity_HeaderFile
#include <Handle_IGESData_LineFontEntity.hxx>
#endif
#ifndef _Handle_IGESGraph_Color_HeaderFile
#include <Handle_IGESGraph_Color.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
class IGESDraw_HArray1OfViewKindEntity;
class TColStd_HArray1OfInteger;
class IGESBasic_HArray1OfLineFontEntity;
class IGESGraph_HArray1OfColor;
class IGESData_HArray1OfIGESEntity;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class IGESData_ViewKindEntity;
class IGESData_LineFontEntity;
class IGESGraph_Color;
class IGESData_IGESEntity;


//! defines IGESViewsVisibleWithAttr, Type <402>, Form <4> <br>
//!           in package IGESDraw <br>
class IGESDraw_ViewsVisibleWithAttr : public IGESData_ViewKindEntity {

public:

  
  Standard_EXPORT   IGESDraw_ViewsVisibleWithAttr();
  //! This method is used to set fields of the class <br>
//!           ViewsVisibleWithAttr <br>
//!       - allViewEntities     : All View kind entities <br>
//!       - allLineFonts        : All Line Font values or zero(0) <br>
//!       - allLineDefinitions  : Line Font Definition <br>
//!                               (if Line Font value = 0) <br>
//!       - allColorValues      : All Color values <br>
//!       - allColorDefinitions : All Color Definition Entities <br>
//!       - allLineWeights      : All Line Weight values <br>
//!       - allDisplayEntities  : Entities which are member of <br>
//!                               this associativity <br>
//! raises exception if Lengths of allViewEntities, allLineFonts, <br>
//! allColorValues,allColorDefinitions, allLineWeights are not same <br>
  Standard_EXPORT     void Init(const Handle(IGESDraw_HArray1OfViewKindEntity)& allViewEntities,const Handle(TColStd_HArray1OfInteger)& allLineFonts,const Handle(IGESBasic_HArray1OfLineFontEntity)& allLineDefinitions,const Handle(TColStd_HArray1OfInteger)& allColorValues,const Handle(IGESGraph_HArray1OfColor)& allColorDefinitions,const Handle(TColStd_HArray1OfInteger)& allLineWeights,const Handle(IGESData_HArray1OfIGESEntity)& allDisplayEntities) ;
  //! Changes only the list of Displayed Entities (Null allowed) <br>
  Standard_EXPORT     void InitImplied(const Handle(IGESData_HArray1OfIGESEntity)& allDisplayEntity) ;
  //! Returns False (for a complex view) <br>
  Standard_EXPORT     Standard_Boolean IsSingle() const;
  //! returns the number of Views containing the view visible, line font, <br>
//! color number, and line weight information <br>
  Standard_EXPORT     Standard_Integer NbViews() const;
  //! returns the number of entities which have this particular set of <br>
//! display characteristic, or zero if no Entities specified <br>
  Standard_EXPORT     Standard_Integer NbDisplayedEntities() const;
  //! returns the Index'th ViewKindEntity entity <br>
//! raises exception if Index <= 0 or Index > NbViews() <br>
  Standard_EXPORT     Handle_IGESData_ViewKindEntity ViewItem(const Standard_Integer Index) const;
  //! returns the Index'th Line font value or zero <br>
//! raises exception if Index <= 0 or Index > NbViews() <br>
  Standard_EXPORT     Standard_Integer LineFontValue(const Standard_Integer Index) const;
  //! returns True if the Index'th Line Font Definition is specified <br>
//! else returns False <br>
//! raises exception if Index <= 0 or Index > NbViews() <br>
  Standard_EXPORT     Standard_Boolean IsFontDefinition(const Standard_Integer Index) const;
  //! returns the Index'th Line Font Definition Entity or NULL(0) <br>
//! raises exception if Index <= 0 or Index > NbViews() <br>
  Standard_EXPORT     Handle_IGESData_LineFontEntity FontDefinition(const Standard_Integer Index) const;
  //! returns the Index'th Color number value <br>
//! raises exception if Index <= 0 or Index > NbViews() <br>
  Standard_EXPORT     Standard_Integer ColorValue(const Standard_Integer Index) const;
  //! returns True if Index'th Color Definition is specified <br>
//! else returns False <br>
//! raises exception if Index <= 0 or Index > NbViews() <br>
  Standard_EXPORT     Standard_Boolean IsColorDefinition(const Standard_Integer Index) const;
  //! returns the Index'th Color Definition Entity <br>
//! raises exception if Index <= 0 or Index > NbViews() <br>
  Standard_EXPORT     Handle_IGESGraph_Color ColorDefinition(const Standard_Integer Index) const;
  //! returns the Index'th Color Line Weight <br>
//! raises exception if Index <= 0 or Index > NbViews() <br>
  Standard_EXPORT     Standard_Integer LineWeightItem(const Standard_Integer Index) const;
  //! returns Index'th Display entity with this particular characteristics <br>
//! raises exception if Index  <= 0 or Index > NbEntities() <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity DisplayedEntity(const Standard_Integer Index) const;




  DEFINE_STANDARD_RTTI(IGESDraw_ViewsVisibleWithAttr)

protected:




private: 


Handle_IGESDraw_HArray1OfViewKindEntity theViewEntities;
Handle_TColStd_HArray1OfInteger theLineFonts;
Handle_IGESBasic_HArray1OfLineFontEntity theLineDefinitions;
Handle_TColStd_HArray1OfInteger theColorValues;
Handle_IGESGraph_HArray1OfColor theColorDefinitions;
Handle_TColStd_HArray1OfInteger theLineWeights;
Handle_IGESData_HArray1OfIGESEntity theDisplayEntities;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
