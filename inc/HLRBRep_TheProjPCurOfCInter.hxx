// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_TheProjPCurOfCInter_HeaderFile
#define _HLRBRep_TheProjPCurOfCInter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class HLRBRep_CurveTool;
class HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter;
class HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter;
class HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter;
class gp_Pnt2d;



class HLRBRep_TheProjPCurOfCInter  {
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

  
  Standard_EXPORT   static  Standard_Real FindParameter(const Standard_Address& C,const gp_Pnt2d& Pnt,const Standard_Real Tol) ;
  
  Standard_EXPORT   static  Standard_Real FindParameter(const Standard_Address& C,const gp_Pnt2d& Pnt,const Standard_Real LowParameter,const Standard_Real HighParameter,const Standard_Real Tol) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
