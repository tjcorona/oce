// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PPoly_VArrayNodeOfFieldOfHArray1OfTriangle_HeaderFile
#define _PPoly_VArrayNodeOfFieldOfHArray1OfTriangle_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PPoly_VArrayNodeOfFieldOfHArray1OfTriangle_HeaderFile
#include <Handle_PPoly_VArrayNodeOfFieldOfHArray1OfTriangle.hxx>
#endif

#include <Standard_Address.hxx>
#include <PPoly_Triangle.hxx>
#include <PStandard_ArrayNode.hxx>
class PPoly_Triangle;
class PPoly_FieldOfHArray1OfTriangle;
class PPoly_VArrayTNodeOfFieldOfHArray1OfTriangle;


class PPoly_VArrayNodeOfFieldOfHArray1OfTriangle : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PPoly_VArrayNodeOfFieldOfHArray1OfTriangle();
  
  Standard_EXPORT   PPoly_VArrayNodeOfFieldOfHArray1OfTriangle(const PPoly_Triangle& aValue);
  
  Standard_EXPORT     void SetValue(const PPoly_Triangle& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PPoly_VArrayNodeOfFieldOfHArray1OfTriangle(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    const PPoly_Triangle& _CSFDB_GetPPoly_VArrayNodeOfFieldOfHArray1OfTrianglemyValue() const { return myValue; }



  DEFINE_STANDARD_RTTI(PPoly_VArrayNodeOfFieldOfHArray1OfTriangle)

protected:




private: 


PPoly_Triangle myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
