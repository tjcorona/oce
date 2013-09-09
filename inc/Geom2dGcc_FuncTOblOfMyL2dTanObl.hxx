// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dGcc_FuncTOblOfMyL2dTanObl_HeaderFile
#define _Geom2dGcc_FuncTOblOfMyL2dTanObl_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Geom2dAdaptor_Curve_HeaderFile
#include <Geom2dAdaptor_Curve.hxx>
#endif
#ifndef _gp_Dir2d_HeaderFile
#include <gp_Dir2d.hxx>
#endif
#ifndef _math_FunctionWithDerivative_HeaderFile
#include <math_FunctionWithDerivative.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Geom2dAdaptor_Curve;
class Geom2dGcc_CurveTool;
class gp_Dir2d;



class Geom2dGcc_FuncTOblOfMyL2dTanObl  : public math_FunctionWithDerivative {
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

  
  Standard_EXPORT   Geom2dGcc_FuncTOblOfMyL2dTanObl(const Geom2dAdaptor_Curve& Curve,const gp_Dir2d& Dir);
  
  Standard_EXPORT     Standard_Boolean Value(const Standard_Real X,Standard_Real& F) ;
  
  Standard_EXPORT     Standard_Boolean Derivative(const Standard_Real X,Standard_Real& Deriv) ;
  
  Standard_EXPORT     Standard_Boolean Values(const Standard_Real X,Standard_Real& F,Standard_Real& Deriv) ;





protected:





private:



Geom2dAdaptor_Curve TheCurv;
gp_Dir2d TheDirection;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
