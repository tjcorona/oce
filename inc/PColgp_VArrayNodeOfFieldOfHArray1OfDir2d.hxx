// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_VArrayNodeOfFieldOfHArray1OfDir2d_HeaderFile
#define _PColgp_VArrayNodeOfFieldOfHArray1OfDir2d_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColgp_VArrayNodeOfFieldOfHArray1OfDir2d_HeaderFile
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray1OfDir2d.hxx>
#endif

#include <Standard_Address.hxx>
#include <gp_Dir2d.hxx>
#include <PStandard_ArrayNode.hxx>
class gp_Dir2d;
class PColgp_FieldOfHArray1OfDir2d;
class PColgp_VArrayTNodeOfFieldOfHArray1OfDir2d;


class PColgp_VArrayNodeOfFieldOfHArray1OfDir2d : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PColgp_VArrayNodeOfFieldOfHArray1OfDir2d();
  
  Standard_EXPORT   PColgp_VArrayNodeOfFieldOfHArray1OfDir2d(const gp_Dir2d& aValue);
  
  Standard_EXPORT     void SetValue(const gp_Dir2d& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PColgp_VArrayNodeOfFieldOfHArray1OfDir2d(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    const gp_Dir2d& _CSFDB_GetPColgp_VArrayNodeOfFieldOfHArray1OfDir2dmyValue() const { return myValue; }



  DEFINE_STANDARD_RTTI(PColgp_VArrayNodeOfFieldOfHArray1OfDir2d)

protected:




private: 


gp_Dir2d myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
