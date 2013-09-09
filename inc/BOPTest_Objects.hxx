// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTest_Objects_HeaderFile
#define _BOPTest_Objects_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOPDS_PDS_HeaderFile
#include <BOPDS_PDS.hxx>
#endif
#ifndef _BOPCol_ListOfShape_HeaderFile
#include <BOPCol_ListOfShape.hxx>
#endif
#ifndef _BOPAlgo_PBuilder_HeaderFile
#include <BOPAlgo_PBuilder.hxx>
#endif
class BOPAlgo_PaveFiller;
class BOPAlgo_Builder;
class BOPAlgo_BOP;



class BOPTest_Objects  {
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

  
  Standard_EXPORT   static  BOPAlgo_PaveFiller& PaveFiller() ;
  
  Standard_EXPORT   static  void Init() ;
  
  Standard_EXPORT   static  void Clear() ;
  
  Standard_EXPORT   static  BOPDS_PDS PDS() ;
  
  Standard_EXPORT   static  BOPAlgo_Builder& Builder() ;
  
  Standard_EXPORT   static  BOPAlgo_BOP& BOP() ;
  
  Standard_EXPORT   static  BOPCol_ListOfShape& Shapes() ;
  
  Standard_EXPORT   static  BOPCol_ListOfShape& Tools() ;
  
  Standard_EXPORT   static  void SetBuilder(const BOPAlgo_PBuilder& theBuilder) ;
  
  Standard_EXPORT   static  void SetBuilderDefault() ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
