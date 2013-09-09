// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_GeometricTool_HeaderFile
#define _StepToTopoDS_GeometricTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_StepGeom_SurfaceCurve_HeaderFile
#include <Handle_StepGeom_SurfaceCurve.hxx>
#endif
#ifndef _Handle_StepGeom_Surface_HeaderFile
#include <Handle_StepGeom_Surface.hxx>
#endif
#ifndef _Handle_StepGeom_Pcurve_HeaderFile
#include <Handle_StepGeom_Pcurve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepShape_Edge_HeaderFile
#include <Handle_StepShape_Edge.hxx>
#endif
#ifndef _Handle_StepShape_EdgeLoop_HeaderFile
#include <Handle_StepShape_EdgeLoop.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class StepGeom_SurfaceCurve;
class StepGeom_Surface;
class StepGeom_Pcurve;
class StepShape_Edge;
class StepShape_EdgeLoop;
class Geom_Curve;


//! This class contains some algorithmic services <br>
//!          specific to the mapping STEP to CAS.CADE <br>
class StepToTopoDS_GeometricTool  {
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

  
  Standard_EXPORT   static  Standard_Integer PCurve(const Handle(StepGeom_SurfaceCurve)& SC,const Handle(StepGeom_Surface)& S,Handle(StepGeom_Pcurve)& PC,const Standard_Integer last = 0) ;
  
  Standard_EXPORT   static  Standard_Boolean IsSeamCurve(const Handle(StepGeom_SurfaceCurve)& SC,const Handle(StepGeom_Surface)& S,const Handle(StepShape_Edge)& E,const Handle(StepShape_EdgeLoop)& EL) ;
  
  Standard_EXPORT   static  Standard_Boolean IsLikeSeam(const Handle(StepGeom_SurfaceCurve)& SC,const Handle(StepGeom_Surface)& S,const Handle(StepShape_Edge)& E,const Handle(StepShape_EdgeLoop)& EL) ;
  
  Standard_EXPORT   static  Standard_Boolean UpdateParam3d(const Handle(Geom_Curve)& C,Standard_Real& w1,Standard_Real& w2,const Standard_Real preci) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
