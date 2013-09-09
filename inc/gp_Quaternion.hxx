// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_Quaternion_HeaderFile
#define _gp_Quaternion_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_EulerSequence_HeaderFile
#include <gp_EulerSequence.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
class gp_Vec;
class gp_Mat;


//! Represents operation of rotation in 3d space as queternion <br>
//!          and implements operations with rotations basing on <br>
//!          quaternion mathematics. <br>
class gp_Quaternion  {
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

  //! Creates an identity quaternion <br>
      gp_Quaternion();
  //! Creates quaternion directly from component values <br>
  Standard_EXPORT   gp_Quaternion(const Standard_Real x,const Standard_Real y,const Standard_Real z,const Standard_Real w);
  //! Creates copy of another quaternion <br>
  Standard_EXPORT   gp_Quaternion(const gp_Quaternion& theToCopy);
  //! Creates quaternion representing shortest-arc rotation <br>
//!          operator producing vector theVecTo from vector theVecFrom. <br>
  Standard_EXPORT   gp_Quaternion(const gp_Vec& theVecFrom,const gp_Vec& theVecTo);
  //! Creates quaternion representing shortest-arc rotation <br>
//!          operator producing vector theVecTo from vector theVecFrom. <br>
//!          Additional vector theHelpCrossVec defines preferred direction for <br>
//!          rotation and is used when theVecTo and theVecFrom are directed <br>
//!          oppositely. <br>
  Standard_EXPORT   gp_Quaternion(const gp_Vec& theVecFrom,const gp_Vec& theVecTo,const gp_Vec& theHelpCrossVec);
  //! Creates quaternion representing rotation on angle <br>
//!          theAngle around vector theAxis <br>
  Standard_EXPORT   gp_Quaternion(const gp_Vec& theAxis,const Standard_Real theAngle);
  //! Creates quaternion from rotation matrix 3*3 <br>
//!          (which should be orthonormal skew-symmetric matrix) <br>
  Standard_EXPORT   gp_Quaternion(const gp_Mat& theMat);
  //! Simple equal test without precision <br>
  Standard_EXPORT     Standard_Boolean IsEqual(const gp_Quaternion& theOther) const;
  //! Sets quaternion to shortest-arc rotation producing <br>
//!          vector theVecTo from vector theVecFrom. <br>
//!          If vectors theVecFrom and theVecTo are opposite then rotation <br>
//!          axis is computed as theVecFrom ^ (1,0,0) or theVecFrom ^ (0,0,1). <br>
  Standard_EXPORT     void SetRotation(const gp_Vec& theVecFrom,const gp_Vec& theVecTo) ;
  //! Sets quaternion to shortest-arc rotation producing <br>
//!          vector theVecTo from vector theVecFrom. <br>
//!          If vectors theVecFrom and theVecTo are opposite then rotation <br>
//!          axis is computed as theVecFrom ^ theHelpCrossVec. <br>
  Standard_EXPORT     void SetRotation(const gp_Vec& theVecFrom,const gp_Vec& theVecTo,const gp_Vec& theHelpCrossVec) ;
  //! Create a unit quaternion from Axis+Angle representation <br>
  Standard_EXPORT     void SetVectorAndAngle(const gp_Vec& theAxis,const Standard_Real theAngle) ;
  //! Convert a quaternion to Axis+Angle representation, <br>
//!          preserve the axis direction and angle from -PI to +PI <br>
  Standard_EXPORT     void GetVectorAndAngle(gp_Vec& theAxis,Standard_Real& theAngle) const;
  //! Create a unit quaternion by rotation matrix <br>
//!          matrix must contain only rotation (not scale or shear) <br>
//! <br>
//!          For numerical stability we find first the greatest component of quaternion <br>
//!          and than search others from this one <br>
  Standard_EXPORT     void SetMatrix(const gp_Mat& theMat) ;
  //! Returns rotation operation as 3*3 matrix <br>
  Standard_EXPORT     gp_Mat GetMatrix() const;
  //! Create a unit quaternion representing rotation defined <br>
//!          by generalized Euler angles <br>
  Standard_EXPORT     void SetEulerAngles(const gp_EulerSequence theOrder,const Standard_Real theAlpha,const Standard_Real theBeta,const Standard_Real theGamma) ;
  //! Returns Euler angles describing current rotation <br>
  Standard_EXPORT     void GetEulerAngles(const gp_EulerSequence theOrder,Standard_Real& theAlpha,Standard_Real& theBeta,Standard_Real& theGamma) const;
  
  Standard_EXPORT     void Set(const Standard_Real x,const Standard_Real y,const Standard_Real z,const Standard_Real w) ;
  
  Standard_EXPORT     void Set(const gp_Quaternion& theQuaternion) ;
  
  Standard_EXPORT     Standard_Real X() const;
  
  Standard_EXPORT     Standard_Real Y() const;
  
  Standard_EXPORT     Standard_Real Z() const;
  
  Standard_EXPORT     Standard_Real W() const;
  //! Make identity quaternion (zero-rotation) <br>
  Standard_EXPORT     void SetIdent() ;
  //! Reverse direction of rotation (conjugate quaternion) <br>
  Standard_EXPORT     void Reverse() ;
  //! Return rotation with reversed direction (conjugated quaternion) <br>
  Standard_EXPORT     gp_Quaternion Reversed() const;
  //! Inverts quaternion (both rotation direction and norm) <br>
  Standard_EXPORT     void Invert() ;
  //! Return inversed quaternion q^-1 <br>
  Standard_EXPORT     gp_Quaternion Inverted() const;
  //! Returns square norm of quaternion <br>
  Standard_EXPORT     Standard_Real SquareNorm() const;
  //! Returns norm of quaternion <br>
  Standard_EXPORT     Standard_Real Norm() const;
  //! Scale all components by quaternion by theScale; note that <br>
//!          rotation is not changed by this operation (except 0-scaling) <br>
  Standard_EXPORT     void Scale(const Standard_Real theScale) ;
    void operator *=(const Standard_Real theScale) 
{
  Scale(theScale);
}
  //! Returns scaled quaternion <br>
  Standard_EXPORT     gp_Quaternion Scaled(const Standard_Real theScale) const;
    gp_Quaternion operator *(const Standard_Real theScale) const
{
  return Scaled(theScale);
}
  //! Stabilize quaternion length within 1 - 1/4. <br>
//!          This operation is a lot faster than normalization <br>
//!          and preserve length goes to 0 or infinity <br>
  Standard_EXPORT     void StabilizeLength() ;
  //! Scale quaternion that its norm goes to 1. <br>
//!          The appearing of 0 magnitude or near is a error, <br>
//!          so we can be sure that can divide by magnitude <br>
  Standard_EXPORT     void Normalize() ;
  //! Returns quaternion scaled so that its norm goes to 1. <br>
  Standard_EXPORT     gp_Quaternion Normalized() const;
  //! Returns quaternion with all components negated. <br>
//!          Note that this operation does not affect neither <br>
//!          rotation operator defined by quaternion nor its norm. <br>
  Standard_EXPORT     gp_Quaternion Negated() const;
    gp_Quaternion operator -() const
{
  return Negated();
}
  //! Makes sum of quaternion components; result is "rotations mix" <br>
  Standard_EXPORT     gp_Quaternion Added(const gp_Quaternion& theOther) const;
    gp_Quaternion operator +(const gp_Quaternion& theOther) const
{
  return Added(theOther);
}
  //! Makes difference of quaternion components; result is "rotations mix" <br>
  Standard_EXPORT     gp_Quaternion Subtracted(const gp_Quaternion& theOther) const;
    gp_Quaternion operator -(const gp_Quaternion& theOther) const
{
  return Subtracted(theOther);
}
  //! Multiply function - work the same as Matrices multiplying. <br>
//!          qq' = (cross(v,v') + wv' + w'v, ww' - dot(v,v')) <br>
//!          Result is rotation combination: q' than q (here q=this, q'=theQ). <br>
//!          Notices than: <br>
//!          qq' != q'q; <br>
//!          qq^-1 = q; <br>
  Standard_EXPORT     gp_Quaternion Multiplied(const gp_Quaternion& theOther) const;
    gp_Quaternion operator *(const gp_Quaternion& theOther) const
{
  return Multiplied(theOther);
}
  //! Adds componnets of other quaternion; result is "rotations mix" <br>
  Standard_EXPORT     void Add(const gp_Quaternion& theOther) ;
    void operator +=(const gp_Quaternion& theOther) 
{
  Add(theOther);
}
  //! Subtracts componnets of other quaternion; result is "rotations mix" <br>
  Standard_EXPORT     void Subtract(const gp_Quaternion& theOther) ;
    void operator -=(const gp_Quaternion& theOther) 
{
  Subtract(theOther);
}
  //! Adds rotation by multiplication <br>
  Standard_EXPORT     void Multiply(const gp_Quaternion& theOther) ;
    void operator *=(const gp_Quaternion& theOther) 
{
  Multiply(theOther);
}
  //! Computes inner product / scalar product / Dot <br>
  Standard_EXPORT     Standard_Real Dot(const gp_Quaternion& theOther) const;
  //! Return rotation angle from -PI to PI <br>
  Standard_EXPORT     Standard_Real GetRotationAngle() const;
  //! Rotates vector by quaternion as rotation operator <br>
  Standard_EXPORT     gp_Vec Multiply(const gp_Vec& theVec) const;
    gp_Vec operator *(const gp_Vec& theVec) const
{
  return Multiply(theVec);
}





protected:





private:



Standard_Real x;
Standard_Real y;
Standard_Real z;
Standard_Real w;


};


#include <gp_Quaternion.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
