// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom2d_Parabola_HeaderFile
#define _PGeom2d_Parabola_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom2d_Parabola_HeaderFile
#include <Handle_PGeom2d_Parabola.hxx>
#endif

#include <Standard_Real.hxx>
#include <PGeom2d_Conic.hxx>
class gp_Ax22d;


class PGeom2d_Parabola : public PGeom2d_Conic {

public:

  //! Creates a parabola with default values. <br>
  Standard_EXPORT   PGeom2d_Parabola();
  //! Creates a Parabola with <aPosition> and <aFocalLength> <br>
//!         as field values. <br>
  Standard_EXPORT   PGeom2d_Parabola(const gp_Ax22d& aPosition,const Standard_Real aFocalLength);
  //!   Set the value  of   the  field focalLength with <br>
//!         <aFocalLength>. <br>
  Standard_EXPORT     void FocalLength(const Standard_Real aFocalLength) ;
  //! Retruns the value of the field focalLength. <br>
  Standard_EXPORT     Standard_Real FocalLength() const;

PGeom2d_Parabola(const Storage_stCONSTclCOM& a) : PGeom2d_Conic(a)
{
  
}
    Standard_Real _CSFDB_GetPGeom2d_ParabolafocalLength() const { return focalLength; }
    void _CSFDB_SetPGeom2d_ParabolafocalLength(const Standard_Real p) { focalLength = p; }



  DEFINE_STANDARD_RTTI(PGeom2d_Parabola)

protected:




private: 


Standard_Real focalLength;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
