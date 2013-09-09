// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToIGES_GeomPoint_HeaderFile
#define _GeomToIGES_GeomPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _GeomToIGES_GeomEntity_HeaderFile
#include <GeomToIGES_GeomEntity.hxx>
#endif
#ifndef _Handle_IGESGeom_Point_HeaderFile
#include <Handle_IGESGeom_Point.hxx>
#endif
#ifndef _Handle_Geom_Point_HeaderFile
#include <Handle_Geom_Point.hxx>
#endif
#ifndef _Handle_Geom_CartesianPoint_HeaderFile
#include <Handle_Geom_CartesianPoint.hxx>
#endif
class GeomToIGES_GeomEntity;
class IGESGeom_Point;
class Geom_Point;
class Geom_CartesianPoint;


//! This class implements the transfer of the Point Entity from Geom <br>
//!          to IGES . These are : <br>
//!          . Point <br>
//!              * CartesianPoint <br>
class GeomToIGES_GeomPoint  : public GeomToIGES_GeomEntity {
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

  
  Standard_EXPORT   GeomToIGES_GeomPoint();
  //! Creates a tool GeomPoint ready to run and sets its <br>
//!         fields as GE's. <br>
  Standard_EXPORT   GeomToIGES_GeomPoint(const GeomToIGES_GeomEntity& GE);
  //!  Transfert  a  Point from Geom to IGES. If this <br>
//!            Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESGeom_Point TransferPoint(const Handle(Geom_Point)& start) ;
  //!  Transfert  a  CartesianPoint from Geom to IGES. If this <br>
//!            Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESGeom_Point TransferPoint(const Handle(Geom_CartesianPoint)& start) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
