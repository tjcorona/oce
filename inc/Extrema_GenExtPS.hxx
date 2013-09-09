// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_GenExtPS_HeaderFile
#define _Extrema_GenExtPS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Extrema_HArray2OfPOnSurfParams_HeaderFile
#include <Handle_Extrema_HArray2OfPOnSurfParams.hxx>
#endif
#ifndef _Extrema_HUBTreeOfSphere_HeaderFile
#include <Extrema_HUBTreeOfSphere.hxx>
#endif
#ifndef _Handle_Bnd_HArray1OfSphere_HeaderFile
#include <Handle_Bnd_HArray1OfSphere.hxx>
#endif
#ifndef _Extrema_FuncExtPS_HeaderFile
#include <Extrema_FuncExtPS.hxx>
#endif
#ifndef _Adaptor3d_SurfacePtr_HeaderFile
#include <Adaptor3d_SurfacePtr.hxx>
#endif
#ifndef _Extrema_ExtFlag_HeaderFile
#include <Extrema_ExtFlag.hxx>
#endif
#ifndef _Extrema_ExtAlgo_HeaderFile
#include <Extrema_ExtAlgo.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
class Extrema_HArray2OfPOnSurfParams;
class Bnd_HArray1OfSphere;
class TColStd_HArray1OfReal;
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_TypeMismatch;
class gp_Pnt;
class Adaptor3d_Surface;
class Extrema_POnSurf;
class Extrema_POnSurfParams;


//! It calculates all the extremum distances <br>
//!          between a point and a surface. <br>
//!          These distances can be minimum or maximum. <br>
class Extrema_GenExtPS  {
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

  
  Standard_EXPORT   Extrema_GenExtPS();
  //! It calculates all the distances. <br>
//!          The function F(u,v)=distance(P,S(u,v)) has an <br>
//!          extremum when gradient(F)=0. The algorithm searchs <br>
//!          all the zeros inside the definition ranges of the <br>
//!          surface. <br>
//!          NbU and NbV are used to locate the close points <br>
//!          to find the zeros. They must be great enough <br>
//!          such that if there is N extrema, there will <br>
//!          be N extrema between P and the grid. <br>
//!          TolU et TolV are used to determine the conditions <br>
//!          to stop the iterations; at the iteration number n: <br>
//!           (Un - Un-1) < TolU and (Vn - Vn-1) < TolV . <br>
  Standard_EXPORT   Extrema_GenExtPS(const gp_Pnt& P,const Adaptor3d_Surface& S,const Standard_Integer NbU,const Standard_Integer NbV,const Standard_Real TolU,const Standard_Real TolV,const Extrema_ExtFlag F = Extrema_ExtFlag_MINMAX,const Extrema_ExtAlgo A = Extrema_ExtAlgo_Grad);
  //! It calculates all the distances. <br>
//!          The function F(u,v)=distance(P,S(u,v)) has an <br>
//!          extremum when gradient(F)=0. The algorithm searchs <br>
//!          all the zeros inside the definition ranges of the <br>
//!          surface. <br>
//!          NbU and NbV are used to locate the close points <br>
//!          to find the zeros. They must be great enough <br>
//!          such that if there is N extrema, there will <br>
//!          be N extrema between P and the grid. <br>
//!          TolU et TolV are used to determine the conditions <br>
//!          to stop the iterations; at the iteration number n: <br>
//!           (Un - Un-1) < TolU and (Vn - Vn-1) < TolV . <br>
  Standard_EXPORT   Extrema_GenExtPS(const gp_Pnt& P,const Adaptor3d_Surface& S,const Standard_Integer NbU,const Standard_Integer NbV,const Standard_Real Umin,const Standard_Real Usup,const Standard_Real Vmin,const Standard_Real Vsup,const Standard_Real TolU,const Standard_Real TolV,const Extrema_ExtFlag F = Extrema_ExtFlag_MINMAX,const Extrema_ExtAlgo A = Extrema_ExtAlgo_Grad);
  
  Standard_EXPORT     void Initialize(const Adaptor3d_Surface& S,const Standard_Integer NbU,const Standard_Integer NbV,const Standard_Real TolU,const Standard_Real TolV) ;
  
  Standard_EXPORT     void Initialize(const Adaptor3d_Surface& S,const Standard_Integer NbU,const Standard_Integer NbV,const Standard_Real Umin,const Standard_Real Usup,const Standard_Real Vmin,const Standard_Real Vsup,const Standard_Real TolU,const Standard_Real TolV) ;
  //! the algorithm is done with the point P. <br>
//!          An exception is raised if the fields have not <br>
//!          been initialized. <br>
  Standard_EXPORT     void Perform(const gp_Pnt& P) ;
  
  Standard_EXPORT     void SetFlag(const Extrema_ExtFlag F) ;
  
  Standard_EXPORT     void SetAlgo(const Extrema_ExtAlgo A) ;
  //! Returns True if the distances are found. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns the number of extremum distances. <br>
  Standard_EXPORT     Standard_Integer NbExt() const;
  //! Returns the value of the Nth resulting square distance. <br>
  Standard_EXPORT     Standard_Real SquareDistance(const Standard_Integer N) const;
  //! Returns the point of the Nth resulting distance. <br>
  Standard_EXPORT     Extrema_POnSurf Point(const Standard_Integer N) const;





protected:





private:

  
  Standard_EXPORT     Adaptor3d_SurfacePtr Bidon() const;
  
  Standard_EXPORT     void BuildTree() ;
  
  Standard_EXPORT     void FindSolution(const gp_Pnt& P,const Extrema_POnSurfParams& theParams) ;
  //! Selection of points to build grid, depending on the type of surface <br>
  Standard_EXPORT     void GetGridPoints(const Adaptor3d_Surface& theSurf) ;
  //! Creation of grid of parametric points <br>
  Standard_EXPORT     void BuildGrid(const gp_Pnt& thePoint) ;


Standard_Boolean myDone;
Standard_Boolean myInit;
Standard_Real myumin;
Standard_Real myusup;
Standard_Real myvmin;
Standard_Real myvsup;
Standard_Integer myusample;
Standard_Integer myvsample;
Standard_Real mytolu;
Standard_Real mytolv;
Handle_Extrema_HArray2OfPOnSurfParams myPoints;
Extrema_HUBTreeOfSphere mySphereUBTree;
Handle_Bnd_HArray1OfSphere mySphereArray;
Extrema_FuncExtPS myF;
Adaptor3d_SurfacePtr myS;
Extrema_ExtFlag myFlag;
Extrema_ExtAlgo myAlgo;
Handle_TColStd_HArray1OfReal myUParams;
Handle_TColStd_HArray1OfReal myVParams;
Handle_Extrema_HArray2OfPOnSurfParams myFacePntParams;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
