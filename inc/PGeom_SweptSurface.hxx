// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_SweptSurface_HeaderFile
#define _PGeom_SweptSurface_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom_SweptSurface_HeaderFile
#include <Handle_PGeom_SweptSurface.hxx>
#endif

#include <Handle_PGeom_Curve.hxx>
#include <gp_Dir.hxx>
#include <PGeom_Surface.hxx>
class PGeom_Curve;
class gp_Dir;


class PGeom_SweptSurface : public PGeom_Surface {

public:

  //! Set the value of the field basisCurve with <aBasisCurve>. <br>
  Standard_EXPORT     void BasisCurve(const Handle(PGeom_Curve)& aBasisCurve) ;
  //! Returns the value of the field basisCurve. <br>
  Standard_EXPORT     Handle_PGeom_Curve BasisCurve() const;
  //! Set the value of the field direction with <aDirection>. <br>
  Standard_EXPORT     void Direction(const gp_Dir& aDirection) ;
  //! Returns the value of the field direction. <br>
  Standard_EXPORT     gp_Dir Direction() const;

PGeom_SweptSurface(const Storage_stCONSTclCOM& a) : PGeom_Surface(a)
{
  
}
    Handle(PGeom_Curve) _CSFDB_GetPGeom_SweptSurfacebasisCurve() const { return basisCurve; }
    void _CSFDB_SetPGeom_SweptSurfacebasisCurve(const Handle(PGeom_Curve)& p) { basisCurve = p; }
    const gp_Dir& _CSFDB_GetPGeom_SweptSurfacedirection() const { return direction; }



  DEFINE_STANDARD_RTTI(PGeom_SweptSurface)

protected:

  //! Initializes the field(s) with default value(s). <br>
  Standard_EXPORT   PGeom_SweptSurface();
  //! Initialize the fields with these values. <br>
  Standard_EXPORT   PGeom_SweptSurface(const Handle(PGeom_Curve)& aBasisCurve,const gp_Dir& aDirection);

Handle_PGeom_Curve basisCurve;
gp_Dir direction;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
