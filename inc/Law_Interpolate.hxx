// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Law_Interpolate_HeaderFile
#define _Law_Interpolate_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Law_BSpline_HeaderFile
#include <Handle_Law_BSpline.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfBoolean_HeaderFile
#include <Handle_TColStd_HArray1OfBoolean.hxx>
#endif
class TColStd_HArray1OfReal;
class Law_BSpline;
class TColStd_HArray1OfBoolean;
class StdFail_NotDone;
class Standard_ConstructionError;
class TColStd_Array1OfReal;


//! This  class   is used  to   interpolate a BsplineCurve <br>
//!          passing through    an  array of  points,   with   a C2 <br>
//!          Continuity if tangency  is not requested at the point. <br>
//!          If tangency is  requested at the  point the continuity <br>
//!          will be C1.  If Perodicity is requested the curve will <br>
//!          be  closed  and the junction will  be  the first point <br>
//!          given. The curve will than be only C1 <br>
//! <br>
//! <br>
class Law_Interpolate  {
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

  //! Tolerance is to check if  the points are not too close <br>
//!          to one an  other.  It is  also  used to check   if the <br>
//!          tangent vector  is not too small.   There should be at <br>
//!          least 2 points. If PeriodicFlag is True then the curve <br>
//!          will be periodic be periodic <br>
  Standard_EXPORT   Law_Interpolate(const Handle(TColStd_HArray1OfReal)& Points,const Standard_Boolean PeriodicFlag,const Standard_Real Tolerance);
  //! Tolerance is to check if  the points are not too close <br>
//!          to one an  other.  It is  also  used to check   if the <br>
//!          tangent vector  is not too small.   There should be at <br>
//!          least 2 points. If PeriodicFlag is True then the curve <br>
//!          will be periodic be periodic <br>
  Standard_EXPORT   Law_Interpolate(const Handle(TColStd_HArray1OfReal)& Points,const Handle(TColStd_HArray1OfReal)& Parameters,const Standard_Boolean PeriodicFlag,const Standard_Real Tolerance);
  //! loads initial and final tangents if any. <br>
  Standard_EXPORT     void Load(const Standard_Real InitialTangent,const Standard_Real FinalTangent) ;
  //! loads the tangents. We should have as many tangents as <br>
//!          they are points  in the array if TangentFlags.Value(i) <br>
//!          is    Standard_True  use the tangent Tangents.Value(i) <br>
//!          otherwise the tangent is not constrained. <br>
//! <br>
  Standard_EXPORT     void Load(const TColStd_Array1OfReal& Tangents,const Handle(TColStd_HArray1OfBoolean)& TangentFlags) ;
  //! Clears the tangents if any <br>
  Standard_EXPORT     void ClearTangents() ;
  //! Makes the interpolation <br>
  Standard_EXPORT     void Perform() ;
  
  Standard_EXPORT    const Handle_Law_BSpline& Curve() const;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;





protected:





private:

  //! Interpolates in a non periodic fashion. <br>
  Standard_EXPORT     void PerformNonPeriodic() ;
  //! Interpolates in a C1 periodic fashion. <br>
  Standard_EXPORT     void PerformPeriodic() ;


Standard_Real myTolerance;
Handle_TColStd_HArray1OfReal myPoints;
Standard_Boolean myIsDone;
Handle_Law_BSpline myCurve;
Handle_TColStd_HArray1OfReal myTangents;
Handle_TColStd_HArray1OfBoolean myTangentFlags;
Handle_TColStd_HArray1OfReal myParameters;
Standard_Boolean myPeriodic;
Standard_Boolean myTangentRequest;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
