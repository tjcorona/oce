// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepGProp_HeaderFile
#define _BRepGProp_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
class TopoDS_Shape;
class GProp_GProps;
class gp_Pln;
class BRepGProp_EdgeTool;
class BRepGProp_Face;
class BRepGProp_Domain;
class BRepGProp_Cinert;
class BRepGProp_Sinert;
class BRepGProp_Vinert;
class BRepGProp_VinertGK;
class BRepGProp_UFunctionOfVinertGK;
class BRepGProp_TFunctionOfVinertGK;


//! Provides global functions to compute a shape's global <br>
//! properties for lines, surfaces or volumes, and bring <br>
//! them together with the global properties already <br>
//! computed for a geometric system. <br>
//! The global properties computed for a system are : <br>
//! - its mass, <br>
//! - its center of mass, <br>
//! - its matrix of inertia, <br>
//! - its moment about an axis, <br>
//! - its radius of gyration about an axis, <br>
//! - and its principal properties of inertia such as <br>
//!   principal axis, principal moments, principal radius of gyration. <br>
class BRepGProp  {
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

  //! Computes the linear global properties of the shape S, <br>
//! i.e. the global properties induced by each edge of the <br>
//! shape S, and brings them together with the global <br>
//! properties still retained by the framework LProps. If <br>
//! the current system of LProps was empty, its global <br>
//! properties become equal to the linear global <br>
//! properties of S. <br>
//! For this computation no linear density is attached to <br>
//! the edges. So, for example, the added mass <br>
//! corresponds to the sum of the lengths of the edges of <br>
//! S. The density of the composed systems, i.e. that of <br>
//! each component of the current system of LProps, and <br>
//! that of S which is considered to be equal to 1, must be coherent. <br>
//! Note that this coherence cannot be checked. You are <br>
//! advised to use a separate framework for each <br>
//! density, and then to bring these frameworks together <br>
//! into a global one. <br>
//! The point relative to which the inertia of the system is <br>
//! computed is the reference point of the framework LProps. <br>
//! Note: if your programming ensures that the framework <br>
//! LProps retains only linear global properties (brought <br>
//! together for example, by the function <br>
//! LinearProperties) for objects the density of which is <br>
//! equal to 1 (or is not defined), the function Mass will <br>
//! return the total length of edges of the system analysed by LProps. <br>
//! Warning <br>
//! No check is performed to verify that the shape S <br>
//! retains truly linear properties. If S is simply a vertex, it <br>
//! is not considered to present any additional global properties. <br>
  Standard_EXPORT   static  void LinearProperties(const TopoDS_Shape& S,GProp_GProps& LProps) ;
  //!  Computes the surface global properties of the <br>
//! shape S, i.e. the global properties induced by each <br>
//! face of the shape S, and brings them together with <br>
//! the global properties still retained by the framework <br>
//! SProps. If the current system of SProps was empty, <br>
//! its global properties become equal to the surface <br>
//! global properties of S. <br>
//! For this computation, no surface density is attached <br>
//! to the faces. Consequently, the added mass <br>
//! corresponds to the sum of the areas of the faces of <br>
//! S. The density of the component systems, i.e. that <br>
//! of each component of the current system of <br>
//! SProps, and that of S which is considered to be <br>
//! equal to 1, must be coherent. <br>
//! Note that this coherence cannot be checked. You <br>
//! are advised to use a framework for each different <br>
//! value of density, and then to bring these <br>
//! frameworks together into a global one. <br>
//! The point relative to which the inertia of the system <br>
//! is computed is the reference point of the framework SProps. <br>
//! Note : if your programming ensures that the <br>
//! framework SProps retains only surface global <br>
//! properties, brought together, for example, by the <br>
//! function SurfaceProperties, for objects the density <br>
//! of which is equal to 1 (or is not defined), the <br>
//! function Mass will return the total area of faces of <br>
//! the system analysed by SProps. <br>
//! Warning <br>
//! No check is performed to verify that the shape S <br>
//! retains truly surface properties. If S is simply a <br>
//! vertex, an edge or a wire, it is not considered to <br>
//! present any additional global properties. <br>
  Standard_EXPORT   static  void SurfaceProperties(const TopoDS_Shape& S,GProp_GProps& SProps) ;
  //! Updates <SProps> with the shape <S>, that contains its pricipal properties. <br>
//!          The surface properties of all the faces in <S> are computed. <br>
//!          Adaptive 2D Gauss integration is used. <br>
//!          Parameter Eps sets maximal relative error of computed mass (area) for each face. <br>
//!          Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values <br>
//!          for two successive steps of adaptive integration. <br>
//!          Method returns estimation of relative error reached for whole shape. <br>
//!          WARNING: if Eps > 0.001 algorithm performs non-adaptive integration. <br>
//! Computes the global volume properties of the solid <br>
//! S, and brings them together with the global <br>
//! properties still retained by the framework VProps. If <br>
//! the current system of VProps was empty, its global <br>
//! properties become equal to the global properties of S for volume. <br>
//! For this computation, no volume density is attached <br>
//! to the solid. Consequently, the added mass <br>
//! corresponds to the volume of S. The density of the <br>
//! component systems, i.e. that of each component of <br>
//! the current system of VProps, and that of S which <br>
//! is considered to be equal to 1, must be coherent to each other. <br>
//! Note that this coherence cannot be checked. You <br>
//! are advised to use a separate framework for each <br>
//! density, and then to bring these frameworks <br>
//! together into a global one. <br>
//! The point relative to which the inertia of the system <br>
//! is computed is the reference point of the framework VProps. <br>
//! Note: if your programming ensures that the <br>
//! framework VProps retains only global properties of <br>
//! volume (brought together for example, by the <br>
//! function VolumeProperties) for objects the density <br>
//! of which is equal to 1 (or is not defined), the <br>
//! function Mass will return the total volume of the <br>
//! solids of the system analysed by VProps. <br>
//! Warning <br>
//! The shape S must represent an object whose <br>
//! global volume properties can be computed. It may <br>
//! be a finite solid, or a series of finite solids all <br>
//! oriented in a coherent way. Nonetheless, S must be <br>
//! exempt of any free boundary. Note that these <br>
//! conditions of coherence are not checked by this <br>
//! algorithm, and results will be false if they are not respected. <br>
  Standard_EXPORT   static  Standard_Real SurfaceProperties(const TopoDS_Shape& S,GProp_GProps& SProps,const Standard_Real Eps) ;
  
  Standard_EXPORT   static  void VolumeProperties(const TopoDS_Shape& S,GProp_GProps& VProps,const Standard_Boolean OnlyClosed = Standard_False) ;
  //! Updates <VProps> with the shape <S>, that contains its pricipal properties. <br>
//!          The volume properties of all the FORWARD and REVERSED faces in <S> are computed. <br>
//!          If OnlyClosed is True then computed faces must belong to closed Shells. <br>
//!          Adaptive 2D Gauss integration is used. <br>
//!          Parameter Eps sets maximal relative error of computed mass (volume) for each face. <br>
//!          Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values <br>
//!          for two successive steps of adaptive integration. <br>
//!          Method returns estimation of relative error reached for whole shape. <br>
//!          WARNING: if Eps > 0.001 algorithm performs non-adaptive integration. <br>
  Standard_EXPORT   static  Standard_Real VolumeProperties(const TopoDS_Shape& S,GProp_GProps& VProps,const Standard_Real Eps,const Standard_Boolean OnlyClosed = Standard_False) ;
  //! Updates <VProps> with the shape <S>, that contains its pricipal properties. <br>
//!          The volume properties of all the FORWARD and REVERSED faces in <S> are computed. <br>
//!          If OnlyClosed is True then computed faces must belong to closed Shells. <br>
//!          Adaptive 2D Gauss integration is used. <br>
//!          Parameter IsUseSpan says if it is necessary to define spans on a face. <br>
//!          This option has an effect only for BSpline faces. <br>
//!          Parameter Eps sets maximal relative error of computed property for each face. <br>
//!          Error is delivered by the adaptive Gauss-Kronrod method of integral computation <br>
//!          that is used for properties computation. <br>
//!          Method returns estimation of relative error reached for whole shape. <br>
//!          Returns negative value if the computation is failed. <br>
  Standard_EXPORT   static  Standard_Real VolumePropertiesGK(const TopoDS_Shape& S,GProp_GProps& VProps,const Standard_Real Eps = 0.001,const Standard_Boolean OnlyClosed = Standard_False,const Standard_Boolean IsUseSpan = Standard_False,const Standard_Boolean CGFlag = Standard_False,const Standard_Boolean IFlag = Standard_False) ;
  
  Standard_EXPORT   static  Standard_Real VolumePropertiesGK(const TopoDS_Shape& S,GProp_GProps& VProps,const gp_Pln& thePln,const Standard_Real Eps = 0.001,const Standard_Boolean OnlyClosed = Standard_False,const Standard_Boolean IsUseSpan = Standard_False,const Standard_Boolean CGFlag = Standard_False,const Standard_Boolean IFlag = Standard_False) ;





protected:





private:




friend class BRepGProp_EdgeTool;
friend class BRepGProp_Face;
friend class BRepGProp_Domain;
friend class BRepGProp_Cinert;
friend class BRepGProp_Sinert;
friend class BRepGProp_Vinert;
friend class BRepGProp_VinertGK;
friend class BRepGProp_UFunctionOfVinertGK;
friend class BRepGProp_TFunctionOfVinertGK;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
