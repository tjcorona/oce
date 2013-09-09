// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomLib_Tool_HeaderFile
#define _GeomLib_Tool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
class Geom_Curve;
class gp_Pnt;
class Geom_Surface;
class Geom2d_Curve;
class gp_Pnt2d;


//!   The methods of this class compute the parameter(s) of a given point on a <br>
//! curve or a surface. The point must be located either <br>
//! on the curve (surface) itself or relatively to the latter at <br>
//! a distance less than the tolerance value. <br>
//! Return FALSE if the point is beyond the tolerance <br>
//! limit or if computation fails. <br>
//! Max Tolerance value is currently limited to 1.e-4 for <br>
//! geometrical curves and 1.e-3 for BSpline, Bezier and <br>
//! other parametrical curves. <br>
class GeomLib_Tool  {
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

  
//! Extracts the parameter of a 3D point lying on a 3D curve <br>
//! or at a distance less than the tolerance value. <br>
  Standard_EXPORT   static  Standard_Boolean Parameter(const Handle(Geom_Curve)& Curve,const gp_Pnt& Point,const Standard_Real Tolerance,Standard_Real& U) ;
  //! Extracts the parameter of a 3D point lying on a surface <br>
//! or at a distance less than the tolerance value. <br>
  Standard_EXPORT   static  Standard_Boolean Parameters(const Handle(Geom_Surface)& Surface,const gp_Pnt& Point,const Standard_Real Tolerance,Standard_Real& U,Standard_Real& V) ;
  //! Extracts the parameter of a 2D point lying on a 2D curve <br>
//! or at a distance less than the tolerance value. <br>
  Standard_EXPORT   static  Standard_Boolean Parameter(const Handle(Geom2d_Curve)& Curve,const gp_Pnt2d& Point,const Standard_Real Tolerance,Standard_Real& U) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
