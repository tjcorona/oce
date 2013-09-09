// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom2d_Direction_HeaderFile
#define _PGeom2d_Direction_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom2d_Direction_HeaderFile
#include <Handle_PGeom2d_Direction.hxx>
#endif

#include <PGeom2d_Vector.hxx>
class gp_Vec2d;


class PGeom2d_Direction : public PGeom2d_Vector {

public:

  //! Creates a unit vector with default values. <br>
  Standard_EXPORT   PGeom2d_Direction();
  //! Create a unit vector with <aVec>. <br>
  Standard_EXPORT   PGeom2d_Direction(const gp_Vec2d& aVec);

PGeom2d_Direction(const Storage_stCONSTclCOM& a) : PGeom2d_Vector(a)
{
  
}



  DEFINE_STANDARD_RTTI(PGeom2d_Direction)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
