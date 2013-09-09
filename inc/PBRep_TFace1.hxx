// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_TFace1_HeaderFile
#define _PBRep_TFace1_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PBRep_TFace1_HeaderFile
#include <Handle_PBRep_TFace1.hxx>
#endif

#include <Handle_PGeom_Surface.hxx>
#include <Handle_PPoly_Triangulation.hxx>
#include <PTopLoc_Location.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#include <PTopoDS_TFace1.hxx>
class PGeom_Surface;
class PPoly_Triangulation;
class PTopLoc_Location;


class PBRep_TFace1 : public PTopoDS_TFace1 {

public:

  //! Creates an empty TFace1. <br>
  Standard_EXPORT   PBRep_TFace1();
  
  Standard_EXPORT     Handle_PGeom_Surface Surface() const;
  
  Standard_EXPORT     Handle_PPoly_Triangulation Triangulation() const;
  
  Standard_EXPORT     PTopLoc_Location Location() const;
  
  Standard_EXPORT     Standard_Real Tolerance() const;
  
  Standard_EXPORT     void Surface(const Handle(PGeom_Surface)& S) ;
  
  Standard_EXPORT     void Triangulation(const Handle(PPoly_Triangulation)& T) ;
  
  Standard_EXPORT     void Location(const PTopLoc_Location& L) ;
  
  Standard_EXPORT     void Tolerance(const Standard_Real T) ;
  
  Standard_EXPORT     Standard_Boolean NaturalRestriction() const;
  
  Standard_EXPORT     void NaturalRestriction(const Standard_Boolean N) ;

PBRep_TFace1(const Storage_stCONSTclCOM& a) : PTopoDS_TFace1(a)
{
  
}
    Handle(PGeom_Surface) _CSFDB_GetPBRep_TFace1mySurface() const { return mySurface; }
    void _CSFDB_SetPBRep_TFace1mySurface(const Handle(PGeom_Surface)& p) { mySurface = p; }
    Handle(PPoly_Triangulation) _CSFDB_GetPBRep_TFace1myTriangulation() const { return myTriangulation; }
    void _CSFDB_SetPBRep_TFace1myTriangulation(const Handle(PPoly_Triangulation)& p) { myTriangulation = p; }
    const PTopLoc_Location& _CSFDB_GetPBRep_TFace1myLocation() const { return myLocation; }
    Standard_Real _CSFDB_GetPBRep_TFace1myTolerance() const { return myTolerance; }
    void _CSFDB_SetPBRep_TFace1myTolerance(const Standard_Real p) { myTolerance = p; }
    Standard_Boolean _CSFDB_GetPBRep_TFace1myNaturalRestriction() const { return myNaturalRestriction; }
    void _CSFDB_SetPBRep_TFace1myNaturalRestriction(const Standard_Boolean p) { myNaturalRestriction = p; }



  DEFINE_STANDARD_RTTI(PBRep_TFace1)

protected:




private: 


Handle_PGeom_Surface mySurface;
Handle_PPoly_Triangulation myTriangulation;
PTopLoc_Location myLocation;
Standard_Real myTolerance;
Standard_Boolean myNaturalRestriction;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
