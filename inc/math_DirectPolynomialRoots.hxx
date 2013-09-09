// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_DirectPolynomialRoots_HeaderFile
#define _math_DirectPolynomialRoots_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_RangeError;
class StdFail_InfiniteSolutions;



//! This class implements the calculation of all the real roots of a real <br>
//! polynomial of degree <= 4 using a direct method. Once found, <br>
//! the roots are polished using the Newton method. <br>
class math_DirectPolynomialRoots  {
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

  
//! computes all the real roots of the polynomial <br>
//! Ax4 + Bx3 + Cx2 + Dx + E using a direct method. <br>
  Standard_EXPORT   math_DirectPolynomialRoots(const Standard_Real A,const Standard_Real B,const Standard_Real C,const Standard_Real D,const Standard_Real E);
  
//! computes all the real roots of the polynomial <br>
//! Ax3 + Bx2 + Cx + D using a direct method. <br>
  Standard_EXPORT   math_DirectPolynomialRoots(const Standard_Real A,const Standard_Real B,const Standard_Real C,const Standard_Real D);
  
//! computes all the real roots of the polynomial <br>
//! Ax2 + Bx + C using a direct method. <br>
  Standard_EXPORT   math_DirectPolynomialRoots(const Standard_Real A,const Standard_Real B,const Standard_Real C);
  
//! computes the real root of the polynomial Ax + B. <br>
  Standard_EXPORT   math_DirectPolynomialRoots(const Standard_Real A,const Standard_Real B);
  //! Returns true if the computations are successful, otherwise returns false. <br>
        Standard_Boolean IsDone() const;
  //! Returns true if there is an infinity of roots, otherwise returns false. <br>
        Standard_Boolean InfiniteRoots() const;
  //! returns the number of solutions. <br>
//!          An exception is raised if there are an infinity of roots. <br>
        Standard_Integer NbSolutions() const;
  //! returns the value of the Nieme root. <br>
//!          An exception is raised if there are an infinity of roots. <br>
//!          Exception RangeError is raised if Nieme is < 1 <br>
//!          or Nieme > NbSolutions. <br>
        Standard_Real Value(const Standard_Integer Nieme) const;
  //! Prints on the stream o information on the current state <br>
//!          of the object. <br>
//!          Is used to redefine the operator <<. <br>
  Standard_EXPORT     void Dump(Standard_OStream& o) const;





protected:

  
  Standard_EXPORT     void Solve(const Standard_Real A,const Standard_Real B,const Standard_Real C,const Standard_Real D,const Standard_Real E) ;
  
  Standard_EXPORT     void Solve(const Standard_Real A,const Standard_Real B,const Standard_Real C,const Standard_Real D) ;
  
  Standard_EXPORT     void Solve(const Standard_Real A,const Standard_Real B,const Standard_Real C) ;
  
  Standard_EXPORT     void Solve(const Standard_Real A,const Standard_Real B) ;




private:



Standard_Boolean Done;
Standard_Boolean InfiniteStatus;
Standard_Integer NbSol;
Standard_Real TheRoots[4];


};


#include <math_DirectPolynomialRoots.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
