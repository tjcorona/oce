// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTopoDS_TCompound_HeaderFile
#define _PTopoDS_TCompound_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PTopoDS_TCompound_HeaderFile
#include <Handle_PTopoDS_TCompound.hxx>
#endif

#include <TopAbs_ShapeEnum.hxx>
#include <PTopoDS_TShape.hxx>


class PTopoDS_TCompound : public PTopoDS_TShape {

public:

  //! the new TCompound is empty. <br>
  Standard_EXPORT   PTopoDS_TCompound();
  
  Standard_EXPORT     TopAbs_ShapeEnum ShapeType() const;

PTopoDS_TCompound(const Storage_stCONSTclCOM& a) : PTopoDS_TShape(a)
{
  
}



  DEFINE_STANDARD_RTTI(PTopoDS_TCompound)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
