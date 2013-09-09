// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dInt_TheIntPCurvePCurveOfGInter_HeaderFile
#define _Geom2dInt_TheIntPCurvePCurveOfGInter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _IntRes2d_Domain_HeaderFile
#include <IntRes2d_Domain.hxx>
#endif
#ifndef _IntRes2d_Intersection_HeaderFile
#include <IntRes2d_Intersection.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Adaptor2d_Curve2d;
class Geom2dInt_Geom2dCurveTool;
class Geom2dInt_TheProjPCurOfGInter;
class Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter;
class Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter;
class Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter;
class IntRes2d_Domain;



class Geom2dInt_TheIntPCurvePCurveOfGInter  : public IntRes2d_Intersection {
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

  
  Standard_EXPORT   Geom2dInt_TheIntPCurvePCurveOfGInter();
  
  Standard_EXPORT     void Perform(const Adaptor2d_Curve2d& Curve1,const IntRes2d_Domain& Domain1,const Adaptor2d_Curve2d& Curve2,const IntRes2d_Domain& Domain2,const Standard_Real TolConf,const Standard_Real Tol) ;
  
  Standard_EXPORT     void Perform(const Adaptor2d_Curve2d& Curve1,const IntRes2d_Domain& Domain1,const Standard_Real TolConf,const Standard_Real Tol) ;





protected:

  
  Standard_EXPORT     void Perform(const Adaptor2d_Curve2d& Curve1,const IntRes2d_Domain& Domain1,const Adaptor2d_Curve2d& Curve2,const IntRes2d_Domain& Domain2,const Standard_Real TolConf,const Standard_Real Tol,const Standard_Integer NbIter,const Standard_Real DeltaU,const Standard_Real DeltaV) ;
  
  Standard_EXPORT     void Perform(const Adaptor2d_Curve2d& Curve1,const IntRes2d_Domain& Domain1,const Standard_Real TolConf,const Standard_Real Tol,const Standard_Integer NbIter,const Standard_Real DeltaU,const Standard_Real DeltaV) ;




private:

  
  Standard_EXPORT     Standard_Boolean findIntersect(const Adaptor2d_Curve2d& Curve1,const IntRes2d_Domain& Domain1,const Adaptor2d_Curve2d& Curve2,const IntRes2d_Domain& Domain2,const Standard_Real TolConf,const Standard_Real Tol,const Standard_Integer NbIter,const Standard_Real DeltaU,const Standard_Real DeltaV,const Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter& thePoly1,const Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter& thePoly2,const Standard_Boolean isFullRepresentation) ;


IntRes2d_Domain DomainOnCurve1;
IntRes2d_Domain DomainOnCurve2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
