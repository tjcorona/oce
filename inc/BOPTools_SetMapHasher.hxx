// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_SetMapHasher_HeaderFile
#define _BOPTools_SetMapHasher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class BOPTools_Set;



class BOPTools_SetMapHasher  {
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

  
      static  Standard_Integer HashCode(const BOPTools_Set& aSet,const Standard_Integer Upper) ;
  
      static  Standard_Boolean IsEqual(const BOPTools_Set& aSet1,const BOPTools_Set& aSet2) ;





protected:





private:





};


#include <BOPTools_SetMapHasher.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
