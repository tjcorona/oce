// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeCurve_HeaderFile
#define _GeomToStep_MakeCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepGeom_Curve_HeaderFile
#include <Handle_StepGeom_Curve.hxx>
#endif
#ifndef _GeomToStep_Root_HeaderFile
#include <GeomToStep_Root.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
class StepGeom_Curve;
class StdFail_NotDone;
class Geom_Curve;
class Geom2d_Curve;


//! This class implements the mapping between classes <br>
//!          Curve from Geom and the class Curve from StepGeom which <br>
//!          describes a Curve from prostep. As Curve is an <br>
//!          abstract curve this class an access to the sub-class required. <br>
class GeomToStep_MakeCurve  : public GeomToStep_Root {
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

  
  Standard_EXPORT   GeomToStep_MakeCurve(const Handle(Geom_Curve)& C);
  
  Standard_EXPORT   GeomToStep_MakeCurve(const Handle(Geom2d_Curve)& C);
  
  Standard_EXPORT    const Handle_StepGeom_Curve& Value() const;





protected:





private:



Handle_StepGeom_Curve theCurve;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
