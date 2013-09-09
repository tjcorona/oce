// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_BeanFaceIntersector_HeaderFile
#define _IntTools_BeanFaceIntersector_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepAdaptor_Curve_HeaderFile
#include <BRepAdaptor_Curve.hxx>
#endif
#ifndef _BRepAdaptor_Surface_HeaderFile
#include <BRepAdaptor_Surface.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Extrema_ExtCS_HeaderFile
#include <Extrema_ExtCS.hxx>
#endif
#ifndef _GeomAPI_ProjectPointOnSurf_HeaderFile
#include <GeomAPI_ProjectPointOnSurf.hxx>
#endif
#ifndef _IntTools_MarkedRangeSet_HeaderFile
#include <IntTools_MarkedRangeSet.hxx>
#endif
#ifndef _Handle_BOPInt_Context_HeaderFile
#include <Handle_BOPInt_Context.hxx>
#endif
#ifndef _IntTools_SequenceOfRanges_HeaderFile
#include <IntTools_SequenceOfRanges.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Geom_Surface;
class BOPInt_Context;
class TopoDS_Edge;
class TopoDS_Face;
class BRepAdaptor_Curve;
class BRepAdaptor_Surface;
class IntTools_SequenceOfRanges;
class IntTools_CurveRangeSample;
class Bnd_Box;
class IntTools_SurfaceRangeSample;
class IntTools_CurveRangeLocalizeData;
class IntTools_SurfaceRangeLocalizeData;
class IntTools_ListOfCurveRangeSample;
class IntTools_ListOfSurfaceRangeSample;


//! The class BeanFaceIntersector computes ranges of parameters on <br>
//!          the curve of a bean(part of edge) that bound the parts of bean which <br>
//!          are on the surface of a face according to edge and face tolerances. <br>
//!  Warning: The real boundaries of the face are not taken into account, <br>
//!          Most of the result parts of the bean lays only inside the region of the surface, <br>
//!          which includes the inside of the face. And the parts which are out of this region can be <br>
//!          excluded from the result. <br>
class IntTools_BeanFaceIntersector  {
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

  
  Standard_EXPORT   IntTools_BeanFaceIntersector();
  
//! Initializes the algorithm <br>
  Standard_EXPORT   IntTools_BeanFaceIntersector(const TopoDS_Edge& theEdge,const TopoDS_Face& theFace);
  
//! Initializes the algorithm <br>
  Standard_EXPORT   IntTools_BeanFaceIntersector(const BRepAdaptor_Curve& theCurve,const BRepAdaptor_Surface& theSurface,const Standard_Real theBeanTolerance,const Standard_Real theFaceTolerance);
  
//! Initializes the algorithm <br>
//! theUMinParameter, ... are used for <br>
//! optimization purposes <br>
  Standard_EXPORT   IntTools_BeanFaceIntersector(const BRepAdaptor_Curve& theCurve,const BRepAdaptor_Surface& theSurface,const Standard_Real theFirstParOnCurve,const Standard_Real theLastParOnCurve,const Standard_Real theUMinParameter,const Standard_Real theUMaxParameter,const Standard_Real theVMinParameter,const Standard_Real theVMaxParameter,const Standard_Real theBeanTolerance,const Standard_Real theFaceTolerance);
  
//! Initializes the algorithm <br>
  Standard_EXPORT     void Init(const TopoDS_Edge& theEdge,const TopoDS_Face& theFace) ;
  
//! Initializes the algorithm <br>
  Standard_EXPORT     void Init(const BRepAdaptor_Curve& theCurve,const BRepAdaptor_Surface& theSurface,const Standard_Real theBeanTolerance,const Standard_Real theFaceTolerance) ;
  
//! Initializes the algorithm <br>
//! theUMinParameter, ... are used for <br>
//! optimization purposes <br>
  Standard_EXPORT     void Init(const BRepAdaptor_Curve& theCurve,const BRepAdaptor_Surface& theSurface,const Standard_Real theFirstParOnCurve,const Standard_Real theLastParOnCurve,const Standard_Real theUMinParameter,const Standard_Real theUMaxParameter,const Standard_Real theVMinParameter,const Standard_Real theVMaxParameter,const Standard_Real theBeanTolerance,const Standard_Real theFaceTolerance) ;
  
//! Sets the intersecton context <br>
  Standard_EXPORT     void SetContext(const Handle(BOPInt_Context)& theContext) ;
  
//! Gets the intersecton context <br>
//! <br>
  Standard_EXPORT    const Handle_BOPInt_Context& Context() const;
  
//! Set restrictions for curve <br>
  Standard_EXPORT     void SetBeanParameters(const Standard_Real theFirstParOnCurve,const Standard_Real theLastParOnCurve) ;
  
//! Set restrictions for surface <br>
  Standard_EXPORT     void SetSurfaceParameters(const Standard_Real theUMinParameter,const Standard_Real theUMaxParameter,const Standard_Real theVMinParameter,const Standard_Real theVMaxParameter) ;
  
//! Launches the algorithm <br>
  Standard_EXPORT     void Perform() ;
  
        Standard_Boolean IsDone() const;
  
  Standard_EXPORT    const IntTools_SequenceOfRanges& Result() const;
  
  Standard_EXPORT     void Result(IntTools_SequenceOfRanges& theResults) const;





protected:





private:

  
  Standard_EXPORT     void ComputeAroundExactIntersection() ;
  
  Standard_EXPORT     void ComputeLinePlane() ;
  
  Standard_EXPORT     Standard_Integer FastComputeExactIntersection() ;
  
  Standard_EXPORT     void ComputeUsingExtremum() ;
  
  Standard_EXPORT     void ComputeNearRangeBoundaries() ;
  
  Standard_EXPORT     Standard_Boolean ComputeLocalized() ;
  
  Standard_EXPORT     void ComputeRangeFromStartPoint(const Standard_Boolean ToIncreaseParameter,const Standard_Real theParameter,const Standard_Real theUParameter,const Standard_Real theVParameter) ;
  
  Standard_EXPORT     void ComputeRangeFromStartPoint(const Standard_Boolean ToIncreaseParameter,const Standard_Real theParameter,const Standard_Real theUParameter,const Standard_Real theVParameter,const Standard_Integer theIndex) ;
  
  Standard_EXPORT     Standard_Real Distance(const Standard_Real theArg,Standard_Real& theUParameter,Standard_Real& theVParameter) ;
  
  Standard_EXPORT     Standard_Real Distance(const Standard_Real theArg) ;
  
  Standard_EXPORT     Standard_Boolean LocalizeSolutions(const IntTools_CurveRangeSample& theCurveRange,const Bnd_Box& theBoxCurve,const IntTools_SurfaceRangeSample& theSurfaceRange,const Bnd_Box& theBoxSurface,IntTools_CurveRangeLocalizeData& theCurveData,IntTools_SurfaceRangeLocalizeData& theSurfaceData,IntTools_ListOfCurveRangeSample& theListCurveRange,IntTools_ListOfSurfaceRangeSample& theListSurfaceRange) ;
  
  Standard_EXPORT     Standard_Boolean TestComputeCoinside() ;


BRepAdaptor_Curve myCurve;
BRepAdaptor_Surface mySurface;
Handle_Geom_Surface myTrsfSurface;
Standard_Real myFirstParameter;
Standard_Real myLastParameter;
Standard_Real myUMinParameter;
Standard_Real myUMaxParameter;
Standard_Real myVMinParameter;
Standard_Real myVMaxParameter;
Standard_Real myBeanTolerance;
Standard_Real myFaceTolerance;
Standard_Real myCurveResolution;
Standard_Real myCriteria;
Extrema_ExtCS myExtrema;
GeomAPI_ProjectPointOnSurf myProjector;
IntTools_MarkedRangeSet myRangeManager;
Standard_Real myDeflection;
Handle_BOPInt_Context myContext;
IntTools_SequenceOfRanges myResults;
Standard_Boolean myIsDone;


};


#include <IntTools_BeanFaceIntersector.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
