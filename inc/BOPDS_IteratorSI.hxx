// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPDS_IteratorSI_HeaderFile
#define _BOPDS_IteratorSI_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOPDS_Iterator_HeaderFile
#include <BOPDS_Iterator.hxx>
#endif
#ifndef _BOPCol_BaseAllocator_HeaderFile
#include <BOPCol_BaseAllocator.hxx>
#endif



//! The class BOPDS_IteratorSI is <br>
//!  1.to compute self-intersections between BRep sub-shapes <br>
//!    of each argument of an operation (see the class BOPDS_DS) <br>
//!    in terms of theirs bounding boxes <br>
//!  2.provides interface to iterare the pairs of <br>
//!    intersected sub-shapes of given type <br>
class BOPDS_IteratorSI  : public BOPDS_Iterator {
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

  
//! Empty contructor <br>
//! <br>
  Standard_EXPORT   BOPDS_IteratorSI();
Standard_EXPORT virtual ~BOPDS_IteratorSI();
  
//!  Contructor <br>
//!  theAllocator - the allocator to manage the memory <br>
//! <br>
  Standard_EXPORT   BOPDS_IteratorSI(const BOPCol_BaseAllocator& theAllocator);





protected:

  
  Standard_EXPORT   virtual  void Intersect() ;




private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
