// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom2d_BSplineCurve_HeaderFile
#define _PGeom2d_BSplineCurve_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom2d_BSplineCurve_HeaderFile
#include <Handle_PGeom2d_BSplineCurve.hxx>
#endif

#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Handle_PColgp_HArray1OfPnt2d.hxx>
#include <Handle_PColStd_HArray1OfReal.hxx>
#include <Handle_PColStd_HArray1OfInteger.hxx>
#include <PGeom2d_BoundedCurve.hxx>
class PColgp_HArray1OfPnt2d;
class PColStd_HArray1OfReal;
class PColStd_HArray1OfInteger;


class PGeom2d_BSplineCurve : public PGeom2d_BoundedCurve {

public:

  //! Creates a BSplineCurve with default values. <br>
  Standard_EXPORT   PGeom2d_BSplineCurve();
  //! Creates a BSplineCurve with these field values. <br>
  Standard_EXPORT   PGeom2d_BSplineCurve(const Standard_Boolean aRational,const Standard_Boolean aPeriodic,const Standard_Integer aSpineDegree,const Handle(PColgp_HArray1OfPnt2d)& aPoles,const Handle(PColStd_HArray1OfReal)& aWeights,const Handle(PColStd_HArray1OfReal)& aKnots,const Handle(PColStd_HArray1OfInteger)& aMultiplicities);
  //!Set the field periodic with <aPeriodic>. <br>
  Standard_EXPORT     void Periodic(const Standard_Boolean aPeriodic) ;
  //!Returns the value of the field periodic. <br>
  Standard_EXPORT     Standard_Boolean Periodic() const;
  //!Set  the   value  of  the    field rational   with <br>
//!         <aRational>. <br>
  Standard_EXPORT     void Rational(const Standard_Boolean aRational) ;
  //!Returns the value of the field rational. <br>
  Standard_EXPORT     Standard_Boolean Rational() const;
  //! Set the value of the field spineDegree with <aSpineDegree>. <br>
  Standard_EXPORT     void SpineDegree(const Standard_Integer aSpineDegree) ;
  //! Returns the value of the field spineDegree. <br>
  Standard_EXPORT     Standard_Integer SpineDegree() const;
  //! Set the value of the field poles with <aPoles>. <br>
  Standard_EXPORT     void Poles(const Handle(PColgp_HArray1OfPnt2d)& aPoles) ;
  //! Returns the value of the field poles. <br>
  Standard_EXPORT     Handle_PColgp_HArray1OfPnt2d Poles() const;
  //! Set the value of the field weights with <aWeights>. <br>
  Standard_EXPORT     void Weights(const Handle(PColStd_HArray1OfReal)& aWeights) ;
  //! Returns the the value of the field weights. <br>
  Standard_EXPORT     Handle_PColStd_HArray1OfReal Weights() const;
  //!  Set the field knots with <aKnots>. <br>
//!  The multiplicity of the knots are not modified. <br>
  Standard_EXPORT     void Knots(const Handle(PColStd_HArray1OfReal)& aKnots) ;
  //! returns the value of the field knots. <br>
  Standard_EXPORT     Handle_PColStd_HArray1OfReal Knots() const;
  //!  Set the field multiplicities with <aMultiplicities>. <br>
  Standard_EXPORT     void Multiplicities(const Handle(PColStd_HArray1OfInteger)& aMultiplicities) ;
  //! returns the value of the field multiplicities. <br>
  Standard_EXPORT     Handle_PColStd_HArray1OfInteger Multiplicities() const;

PGeom2d_BSplineCurve(const Storage_stCONSTclCOM& a) : PGeom2d_BoundedCurve(a)
{
  
}
    Standard_Boolean _CSFDB_GetPGeom2d_BSplineCurverational() const { return rational; }
    void _CSFDB_SetPGeom2d_BSplineCurverational(const Standard_Boolean p) { rational = p; }
    Standard_Boolean _CSFDB_GetPGeom2d_BSplineCurveperiodic() const { return periodic; }
    void _CSFDB_SetPGeom2d_BSplineCurveperiodic(const Standard_Boolean p) { periodic = p; }
    Standard_Integer _CSFDB_GetPGeom2d_BSplineCurvespineDegree() const { return spineDegree; }
    void _CSFDB_SetPGeom2d_BSplineCurvespineDegree(const Standard_Integer p) { spineDegree = p; }
    Handle(PColgp_HArray1OfPnt2d) _CSFDB_GetPGeom2d_BSplineCurvepoles() const { return poles; }
    void _CSFDB_SetPGeom2d_BSplineCurvepoles(const Handle(PColgp_HArray1OfPnt2d)& p) { poles = p; }
    Handle(PColStd_HArray1OfReal) _CSFDB_GetPGeom2d_BSplineCurveweights() const { return weights; }
    void _CSFDB_SetPGeom2d_BSplineCurveweights(const Handle(PColStd_HArray1OfReal)& p) { weights = p; }
    Handle(PColStd_HArray1OfReal) _CSFDB_GetPGeom2d_BSplineCurveknots() const { return knots; }
    void _CSFDB_SetPGeom2d_BSplineCurveknots(const Handle(PColStd_HArray1OfReal)& p) { knots = p; }
    Handle(PColStd_HArray1OfInteger) _CSFDB_GetPGeom2d_BSplineCurvemultiplicities() const { return multiplicities; }
    void _CSFDB_SetPGeom2d_BSplineCurvemultiplicities(const Handle(PColStd_HArray1OfInteger)& p) { multiplicities = p; }



  DEFINE_STANDARD_RTTI(PGeom2d_BSplineCurve)

protected:




private: 


Standard_Boolean rational;
Standard_Boolean periodic;
Standard_Integer spineDegree;
Handle_PColgp_HArray1OfPnt2d poles;
Handle_PColStd_HArray1OfReal weights;
Handle_PColStd_HArray1OfReal knots;
Handle_PColStd_HArray1OfInteger multiplicities;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
