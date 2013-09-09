// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plate_PlaneConstraint_HeaderFile
#define _Plate_PlaneConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Plate_LinearScalarConstraint_HeaderFile
#include <Plate_LinearScalarConstraint.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class gp_XY;
class gp_Pln;
class Plate_LinearScalarConstraint;


//! constraint a point to belong to a Plane <br>
//! <br>
class Plate_PlaneConstraint  {
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

  
  Standard_EXPORT   Plate_PlaneConstraint(const gp_XY& point2d,const gp_Pln& pln,const Standard_Integer iu = 0,const Standard_Integer iv = 0);
  
       const Plate_LinearScalarConstraint& LSC() const;





protected:





private:



Plate_LinearScalarConstraint myLSC;


};


#include <Plate_PlaneConstraint.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
