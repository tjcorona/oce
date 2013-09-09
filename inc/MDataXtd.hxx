// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDataXtd_HeaderFile
#define _MDataXtd_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <Handle_MDF_ASDriverHSequence.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Handle_MDF_ARDriverHSequence.hxx>
#include <Handle_PGeom_Geometry.hxx>
#include <Handle_Geom_Geometry.hxx>
#include <Standard_Integer.hxx>
#include <TDataXtd_ConstraintEnum.hxx>
#include <TDataXtd_GeometryEnum.hxx>
class MDF_ASDriverHSequence;
class CDM_MessageDriver;
class MDF_ARDriverHSequence;
class PGeom_Geometry;
class Geom_Geometry;
class MDataXtd_ShapeStorageDriver;
class MDataXtd_PointStorageDriver;
class MDataXtd_AxisStorageDriver;
class MDataXtd_PlaneStorageDriver;
class MDataXtd_GeometryStorageDriver;
class MDataXtd_ConstraintStorageDriver;
class MDataXtd_PlacementStorageDriver;
class MDataXtd_PatternStdStorageDriver;
class MDataXtd_ShapeRetrievalDriver;
class MDataXtd_PointRetrievalDriver;
class MDataXtd_AxisRetrievalDriver;
class MDataXtd_PlaneRetrievalDriver;
class MDataXtd_GeometryRetrievalDriver;
class MDataXtd_ConstraintRetrievalDriver;
class MDataXtd_PlacementRetrievalDriver;
class MDataXtd_PatternStdRetrievalDriver;


//! Storage    and  Retrieval  drivers   for modelling <br>
//!          attributes.   Transient  attributes are defined in <br>
//!          package TDataStd and persistent one are defined in <br>
//!          package PDataStd <br>
class MDataXtd  {
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

  //! Adds the attribute storage drivers to <aDriverSeq>. <br>
  Standard_EXPORT   static  void AddStorageDrivers(const Handle(MDF_ASDriverHSequence)& aDriverSeq,const Handle(CDM_MessageDriver)& theMessageDriver) ;
  //! Adds the attribute retrieval drivers to <aDriverSeq>. <br>
  Standard_EXPORT   static  void AddRetrievalDrivers(const Handle(MDF_ARDriverHSequence)& aDriverSeq,const Handle(CDM_MessageDriver)& theMessageDriver) ;
  
  Standard_EXPORT   static  Handle_PGeom_Geometry Translate(const Handle(Geom_Geometry)& Geometry) ;
  //! Translation of TDataXtd enumerations to integer <br>
//!          =============================================== <br>
  Standard_EXPORT   static  Handle_Geom_Geometry Translate(const Handle(PGeom_Geometry)& Geometry) ;
  
  Standard_EXPORT   static  Standard_Integer ConstraintTypeToInteger(const TDataXtd_ConstraintEnum e) ;
  
  Standard_EXPORT   static  TDataXtd_ConstraintEnum IntegerToConstraintType(const Standard_Integer i) ;
  
  Standard_EXPORT   static  Standard_Integer GeometryTypeToInteger(const TDataXtd_GeometryEnum e) ;
  
  Standard_EXPORT   static  TDataXtd_GeometryEnum IntegerToGeometryType(const Standard_Integer i) ;





protected:





private:




friend class MDataXtd_ShapeStorageDriver;
friend class MDataXtd_PointStorageDriver;
friend class MDataXtd_AxisStorageDriver;
friend class MDataXtd_PlaneStorageDriver;
friend class MDataXtd_GeometryStorageDriver;
friend class MDataXtd_ConstraintStorageDriver;
friend class MDataXtd_PlacementStorageDriver;
friend class MDataXtd_PatternStdStorageDriver;
friend class MDataXtd_ShapeRetrievalDriver;
friend class MDataXtd_PointRetrievalDriver;
friend class MDataXtd_AxisRetrievalDriver;
friend class MDataXtd_PlaneRetrievalDriver;
friend class MDataXtd_GeometryRetrievalDriver;
friend class MDataXtd_ConstraintRetrievalDriver;
friend class MDataXtd_PlacementRetrievalDriver;
friend class MDataXtd_PatternStdRetrievalDriver;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
