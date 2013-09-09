// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppCont_Function2d_HeaderFile
#define _AppCont_Function2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class gp_Pnt2d;
class gp_Vec2d;


//! deferred class describing a continous 2d function f(u) <br>
class AppCont_Function2d  {
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

  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~AppCont_Function2d(){Delete() ; }
  //! returns the first parameter of the function. <br>
  Standard_EXPORT   virtual  Standard_Real FirstParameter() const = 0;
  //! returns the last parameter of the function. <br>
  Standard_EXPORT   virtual  Standard_Real LastParameter() const = 0;
  //! returns the point at parameter <U>. <br>
  Standard_EXPORT   virtual  gp_Pnt2d Value(const Standard_Real U) const = 0;
  //! returns the point and the derivative values at <br>
//!          the parameter <U>. <br>
  Standard_EXPORT   virtual  Standard_Boolean D1(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V) const = 0;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
