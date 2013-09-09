// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGeom_HeaderFile
#define _IGESGeom_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <Handle_IGESGeom_Protocol.hxx>
class IGESGeom_Protocol;
class IGESGeom_CircularArc;
class IGESGeom_CompositeCurve;
class IGESGeom_ConicArc;
class IGESGeom_CopiousData;
class IGESGeom_Plane;
class IGESGeom_Line;
class IGESGeom_SplineCurve;
class IGESGeom_SplineSurface;
class IGESGeom_Point;
class IGESGeom_RuledSurface;
class IGESGeom_SurfaceOfRevolution;
class IGESGeom_TabulatedCylinder;
class IGESGeom_Direction;
class IGESGeom_TransformationMatrix;
class IGESGeom_Flash;
class IGESGeom_BSplineCurve;
class IGESGeom_BSplineSurface;
class IGESGeom_OffsetCurve;
class IGESGeom_OffsetSurface;
class IGESGeom_Boundary;
class IGESGeom_CurveOnSurface;
class IGESGeom_BoundedSurface;
class IGESGeom_TrimmedSurface;
class IGESGeom_ToolCircularArc;
class IGESGeom_ToolCompositeCurve;
class IGESGeom_ToolConicArc;
class IGESGeom_ToolCopiousData;
class IGESGeom_ToolPlane;
class IGESGeom_ToolLine;
class IGESGeom_ToolSplineCurve;
class IGESGeom_ToolSplineSurface;
class IGESGeom_ToolPoint;
class IGESGeom_ToolRuledSurface;
class IGESGeom_ToolSurfaceOfRevolution;
class IGESGeom_ToolTabulatedCylinder;
class IGESGeom_ToolDirection;
class IGESGeom_ToolTransformationMatrix;
class IGESGeom_ToolFlash;
class IGESGeom_ToolBSplineCurve;
class IGESGeom_ToolBSplineSurface;
class IGESGeom_ToolOffsetCurve;
class IGESGeom_ToolOffsetSurface;
class IGESGeom_ToolBoundary;
class IGESGeom_ToolCurveOnSurface;
class IGESGeom_ToolBoundedSurface;
class IGESGeom_ToolTrimmedSurface;
class IGESGeom_Protocol;
class IGESGeom_ReadWriteModule;
class IGESGeom_GeneralModule;
class IGESGeom_SpecificModule;
class IGESGeom_Array1OfBoundary;
class IGESGeom_Array1OfCurveOnSurface;
class IGESGeom_Array1OfTransformationMatrix;
class IGESGeom_HArray1OfBoundary;
class IGESGeom_HArray1OfCurveOnSurface;
class IGESGeom_HArray1OfTransformationMatrix;


//! This package consists of B-Rep and CSG Solid entities <br>
class IGESGeom  {
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

  //! Prepares dymanic data (Protocol, Modules) for this package <br>
  Standard_EXPORT   static  void Init() ;
  //! Returns the Protocol for this Package <br>
  Standard_EXPORT   static  Handle_IGESGeom_Protocol Protocol() ;





protected:





private:




friend class IGESGeom_CircularArc;
friend class IGESGeom_CompositeCurve;
friend class IGESGeom_ConicArc;
friend class IGESGeom_CopiousData;
friend class IGESGeom_Plane;
friend class IGESGeom_Line;
friend class IGESGeom_SplineCurve;
friend class IGESGeom_SplineSurface;
friend class IGESGeom_Point;
friend class IGESGeom_RuledSurface;
friend class IGESGeom_SurfaceOfRevolution;
friend class IGESGeom_TabulatedCylinder;
friend class IGESGeom_Direction;
friend class IGESGeom_TransformationMatrix;
friend class IGESGeom_Flash;
friend class IGESGeom_BSplineCurve;
friend class IGESGeom_BSplineSurface;
friend class IGESGeom_OffsetCurve;
friend class IGESGeom_OffsetSurface;
friend class IGESGeom_Boundary;
friend class IGESGeom_CurveOnSurface;
friend class IGESGeom_BoundedSurface;
friend class IGESGeom_TrimmedSurface;
friend class IGESGeom_ToolCircularArc;
friend class IGESGeom_ToolCompositeCurve;
friend class IGESGeom_ToolConicArc;
friend class IGESGeom_ToolCopiousData;
friend class IGESGeom_ToolPlane;
friend class IGESGeom_ToolLine;
friend class IGESGeom_ToolSplineCurve;
friend class IGESGeom_ToolSplineSurface;
friend class IGESGeom_ToolPoint;
friend class IGESGeom_ToolRuledSurface;
friend class IGESGeom_ToolSurfaceOfRevolution;
friend class IGESGeom_ToolTabulatedCylinder;
friend class IGESGeom_ToolDirection;
friend class IGESGeom_ToolTransformationMatrix;
friend class IGESGeom_ToolFlash;
friend class IGESGeom_ToolBSplineCurve;
friend class IGESGeom_ToolBSplineSurface;
friend class IGESGeom_ToolOffsetCurve;
friend class IGESGeom_ToolOffsetSurface;
friend class IGESGeom_ToolBoundary;
friend class IGESGeom_ToolCurveOnSurface;
friend class IGESGeom_ToolBoundedSurface;
friend class IGESGeom_ToolTrimmedSurface;
friend class IGESGeom_Protocol;
friend class IGESGeom_ReadWriteModule;
friend class IGESGeom_GeneralModule;
friend class IGESGeom_SpecificModule;
friend class IGESGeom_Array1OfBoundary;
friend class IGESGeom_Array1OfCurveOnSurface;
friend class IGESGeom_Array1OfTransformationMatrix;
friend class IGESGeom_HArray1OfBoundary;
friend class IGESGeom_HArray1OfCurveOnSurface;
friend class IGESGeom_HArray1OfTransformationMatrix;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
