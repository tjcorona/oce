// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_DoubleMapIteratorOfAttributeDoubleMap_HeaderFile
#define _TDF_DoubleMapIteratorOfAttributeDoubleMap_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_DoubleMapNodeOfAttributeDoubleMap.hxx>
class Standard_NoSuchObject;
class TDF_Attribute;
class TColStd_MapTransientHasher;
class TDF_AttributeDoubleMap;
class TDF_DoubleMapNodeOfAttributeDoubleMap;



class TDF_DoubleMapIteratorOfAttributeDoubleMap  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TDF_DoubleMapIteratorOfAttributeDoubleMap();
  
  Standard_EXPORT TDF_DoubleMapIteratorOfAttributeDoubleMap(const TDF_AttributeDoubleMap& aMap);
  
  Standard_EXPORT   void Initialize (const TDF_AttributeDoubleMap& aMap) ;
  
  Standard_EXPORT  const  Handle(TDF_Attribute)& Key1()  const;
  
  Standard_EXPORT  const  Handle(TDF_Attribute)& Key2()  const;




protected:





private:





};







#endif // _TDF_DoubleMapIteratorOfAttributeDoubleMap_HeaderFile
