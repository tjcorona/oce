// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Precision_HeaderFile
#define _Precision_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>


//! The Precision package offers a set of functions defining precision criteria <br>
//! for use in conventional situations when comparing two numbers. <br>
//! Generalities <br>
//! It is not advisable to use floating number equality. Instead, the difference <br>
//! between numbers must be compared with a given precision, i.e. : <br>
//! Standard_Real x1, x2 ; <br>
//! x1 = ... <br>
//! x2 = ... <br>
//! If ( x1 == x2 ) ... <br>
//! should not be used and must be written as indicated below: <br>
//! Standard_Real x1, x2 ; <br>
//! Standard_Real Precision = ... <br>
//! x1 = ... <br>
//! x2 = ... <br>
//! If ( Abs ( x1 - x2 ) < Precision ) ... <br>
//! Likewise, when ordering floating numbers, you must take the following into account : <br>
//! Standard_Real x1, x2 ; <br>
//! Standard_Real Precision = ... <br>
//! x1 = ...       ! a large number <br>
//! x2 = ...       ! another large number <br>
//! If ( x1 < x2 - Precision ) ... <br>
//! is incorrect when x1 and x2 are large numbers ; it is better to write : <br>
//! Standard_Real x1, x2 ; <br>
//! Standard_Real Precision = ... <br>
//! x1 = ...       ! a large number <br>
//! x2 = ...       ! another large number <br>
//! If ( x2 - x1 > Precision ) ... <br>
//! Precision in Cas.Cade <br>
//! Generally speaking, the precision criterion is not implicit in Cas.Cade. Low-level geometric algorithms accept <br>
//! precision criteria as arguments. As a rule, they should not refer directly to the precision criteria provided by the <br>
//! Precision package. <br>
//! On the other hand, high-level modeling algorithms have to provide the low-level geometric algorithms that they <br>
//! call, with a precision criteria. One way of doing this is to use the above precision criteria. <br>
//! Alternatively, the high-level algorithms can have their own system for precision management. For example, the <br>
//! Topology Data Structure stores precision criteria for each elementary shape (as a vertex, an edge or a face). When <br>
//! a new topological object is constructed, the precision criteria are taken from those provided by the Precision <br>
//! package, and stored in the related data structure. Later, a topological algorithm which analyses these objects will <br>
//! work with the values stored in the data structure. Also, if this algorithm is to build a new topological object, from <br>
//! these precision criteria, it will compute a new precision criterion for the new topological object, and write it into the <br>
//! data structure of the new topological object. <br>
//! The different precision criteria offered by the Precision package, cover the most common requirements of <br>
//! geometric algorithms, such as intersections, approximations, and so on. <br>
//! The choice of precision depends on the algorithm and on the geometric space. The geometric space may be : <br>
//! -   a "real" 2D or 3D space, where the lengths are measured in meters, millimeters, microns, inches, etc ..., or <br>
//! -   a "parametric" space, 1D on a curve or 2D on a surface, where lengths have no dimension. <br>
//! The choice of precision criteria for real space depends on the choice of the product, as it is based on the accuracy <br>
//! of the machine and the unit of measurement. <br>
//! The choice of precision criteria for parametric space depends on both the accuracy of the machine and the <br>
//! dimensions of the curve or the surface, since the parametric precision criterion and the real precision criterion are <br>
//! linked : if the curve is defined by the equation P(t), the inequation : <br>
//! Abs ( t2 - t1 ) < ParametricPrecision <br>
//! means that the parameters t1 and t2 are considered to be equal, and the inequation : <br>
//! Distance ( P(t2) , P(t1) ) < RealPrecision <br>
//! means that the points P(t1) and P(t2) are considered to be coincident. It seems to be the same idea, and it <br>
//! would be wonderful if these two inequations were equivalent. Note that this is rarely the case ! <br>
//! What is provided in this package? <br>
//! The Precision package provides : <br>
//! -   a set of real space precision criteria for the algorithms, in view of checking distances and angles, <br>
//! -   a set of parametric space precision criteria for the algorithms, in view of checking both : <br>
//!   -   the equality of parameters in a parametric space, <br>
//!   -   or the coincidence of points in the real space, by using parameter values, <br>
//! -   the notion of infinite value, composed of a value assumed to be infinite, and checking tests designed to verify <br>
//!   if any value could be considered as infinite. <br>
//!  All the provided functions are very simple. The returned values result from the adaptation of the applications <br>
//! developed by the Open CASCADE company to Open CASCADE algorithms. The main interest of these functions <br>
//! lies in that it incites engineers developing applications to ask questions on precision factors. Which one is to be <br>
//! used in such or such case ? Tolerance criteria are context dependent. They must first choose : <br>
//! -   either to work in real space, <br>
//! -   or to work in parametric space, <br>
//! -   or to work in a combined real and parametric space. <br>
//!   They must next decide which precision factor will give the best answer to the current problem. Within an application <br>
//! environment, it is crucial to master precision even though this process may take a great deal of time. <br>
class Precision  {
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

  //!  Returns the recommended precision value <br>
//!  when checking the equality of two angles (given in radians). <br>
//! Standard_Real Angle1 = ... , Angle2 = ... ; <br>
//! If ( Abs( Angle2 - Angle1 ) < Precision::Angular() ) ... <br>
//! The tolerance of angular equality may be used to check the parallelism of two vectors : <br>
//! gp_Vec V1, V2 ; <br>
//! V1 = ... <br>
//! V2 = ... <br>
//! If ( V1.IsParallel (V2, Precision::Angular() ) ) ... <br>
//! The tolerance of angular equality is equal to 1.e-12. <br>
//! Note : The tolerance of angular equality can be used when working with scalar products or <br>
//! cross products since sines and angles are equivalent for small angles. Therefore, in order to <br>
//! check whether two unit vectors are perpendicular : <br>
//! gp_Dir D1, D2 ; <br>
//! D1 = ... <br>
//! D2 = ... <br>
//! you can use : <br>
//! If ( Abs( D1.D2 ) < Precision::Angular() ) ... <br>
//! (although the function IsNormal does exist). <br>
  Standard_EXPORT   static  Standard_Real Angular() ;
  
//! Returns the recommended precision value when <br>
//! checking coincidence of two points in real space. <br>
//! The tolerance of confusion is used for testing a 3D <br>
//! distance : <br>
//! -   Two points are considered to be coincident if their <br>
//!   distance is smaller than the tolerance of confusion. <br>
//!  gp_Pnt P1, P2 ; <br>
//! P1 = ... <br>
//! P2 = ... <br>
//! if ( P1.IsEqual ( P2 , Precision::Confusion() ) ) <br>
//!     then ... <br>
//! -   A vector is considered to be null if it has a null length : <br>
//!   gp_Vec V ; <br>
//! V = ... <br>
//! if ( V.Magnitude() < Precision::Confusion() ) then ... <br>
//! The tolerance of confusion is equal to 1.e-7. <br>
//! The value of the tolerance of confusion is also used to <br>
//! define : <br>
//! -   the tolerance of intersection, and <br>
//! -   the tolerance of approximation. <br>
//!   Note : As a rule, coordinate values in Cas.Cade are not <br>
//! dimensioned, so 1. represents one user unit, whatever <br>
//! value the unit may have : the millimeter, the meter, the <br>
//! inch, or any other unit. Let's say that Cas.Cade <br>
//! algorithms are written to be tuned essentially with <br>
//! mechanical design applications, on the basis of the <br>
//! millimeter. However, these algorithms may be used with <br>
//! any other unit but the tolerance criterion does no longer <br>
//! have the same signification. <br>
//! So pay particular attention to the type of your application, <br>
//! in relation with the impact of your unit on the precision criterion. <br>
//! -   For example in mechanical design, if the unit is the <br>
//!   millimeter, the tolerance of confusion corresponds to a <br>
//!   distance of 1 / 10000 micron, which is rather difficult to measure. <br>
//! -   However in other types of applications, such as <br>
//!   cartography, where the kilometer is frequently used, <br>
//!   the tolerance of confusion corresponds to a greater <br>
//!   distance (1 / 10 millimeter). This distance <br>
//!   becomes easily measurable, but only within a restricted <br>
//! space which contains some small objects of the complete scene. <br>
  Standard_EXPORT   static  Standard_Real Confusion() ;
  
//! Returns square of Confusion. <br>
//! Created for speed and convenience. <br>
  Standard_EXPORT   static  Standard_Real SquareConfusion() ;
  //!Returns the precision value in real space, frequently <br>
//! used by intersection algorithms to decide that a solution is reached. <br>
//! This function provides an acceptable level of precision <br>
//! for an intersection process to define the adjustment limits. <br>
//! The tolerance of intersection is designed to ensure <br>
//! that a point computed by an iterative algorithm as the <br>
//! intersection between two curves is indeed on the <br>
//! intersection. It is obvious that two tangent curves are <br>
//! close to each other, on a large distance. An iterative <br>
//! algorithm of intersection may find points on these <br>
//! curves within the scope of the confusion tolerance, but <br>
//! still far from the true intersection point. In order to force <br>
//! the intersection algorithm to continue the iteration <br>
//! process until a correct point is found on the tangent <br>
//! objects, the tolerance of intersection must be smaller <br>
//! than the tolerance of confusion. <br>
//! On the other hand, the tolerance of intersection must <br>
//! be large enough to minimize the time required by the <br>
//! process to converge to a solution. <br>
//! The tolerance of intersection is equal to : <br>
//! Precision::Confusion() / 100. <br>
//! (that is, 1.e-9). <br>
  Standard_EXPORT   static  Standard_Real Intersection() ;
  //! Returns the precision value in real space, frequently used <br>
//! by approximation algorithms. <br>
//! This function provides an acceptable level of precision for <br>
//! an approximation process to define adjustment limits. <br>
//! The tolerance of approximation is designed to ensure <br>
//! an acceptable computation time when performing an <br>
//! approximation process. That is why the tolerance of <br>
//! approximation is greater than the tolerance of confusion. <br>
//! The tolerance of approximation is equal to : <br>
//! Precision::Confusion() * 10. <br>
//! (that is, 1.e-6). <br>
//! You may use a smaller tolerance in an approximation <br>
//! algorithm, but this option might be costly. <br>
  Standard_EXPORT   static  Standard_Real Approximation() ;
  //! Convert a real  space precision  to  a  parametric <br>
//!          space precision.   <T>  is the mean  value  of the <br>
//!          length of the tangent of the curve or the surface. <br>
//! <br>
//!          Value is P / T <br>
//! <br>
      static  Standard_Real Parametric(const Standard_Real P,const Standard_Real T) ;
  
//! Returns a precision value in parametric space, which may be used : <br>
//! -   to test the coincidence of two points in the real space, <br>
//!   by using parameter values, or <br>
//! -   to test the equality of two parameter values in a parametric space. <br>
//!  The parametric tolerance of confusion is designed to <br>
//! give a mean value in relation with the dimension of <br>
//! the curve or the surface. It considers that a variation of <br>
//! parameter equal to 1. along a curve (or an <br>
//! isoparametric curve of a surface) generates a segment <br>
//! whose length is equal to 100. (default value), or T. <br>
//!   The parametric tolerance of confusion is equal to : <br>
//! -   Precision::Confusion() / 100., or Precision::Confusion() / T. <br>
//!   The value of the parametric tolerance of confusion is also used to define : <br>
//! -   the parametric tolerance of intersection, and <br>
//! -   the parametric tolerance of approximation. <br>
//!   Warning <br>
//! It is rather difficult to define a unique precision value in parametric space. <br>
//! -   First consider a curve (c) ; if M is the point of <br>
//!   parameter u and M' the point of parameter u+du on <br>
//!   the curve, call 'parametric tangent' at point M, for the <br>
//!   variation du of the parameter, the quantity : <br>
//!   T(u,du)=MM'/du (where MM' represents the <br>
//!   distance between the two points M and M', in the real space). <br>
//! -   Consider the other curve resulting from a scaling <br>
//!   transformation of (c) with a scale factor equal to <br>
//!   10. The 'parametric tangent' at the point of <br>
//!   parameter u of this curve is ten times greater than the <br>
//!   previous one. This shows that for two different curves, <br>
//!   the distance between two points on the curve, resulting <br>
//!   from the same variation of parameter du, may vary   considerably. <br>
//! -   Moreover, the variation of the parameter along the <br>
//!   curve is generally not proportional to the curvilinear <br>
//!   abscissa along the curve. So the distance between two <br>
//!   points resulting from the same variation of parameter <br>
//!   du, at two different points of a curve, may completely differ. <br>
//! -   Moreover, the parameterization of a surface may <br>
//!   generate two quite different 'parametric tangent' values <br>
//!   in the u or in the v parametric direction. <br>
//! -   Last, close to the poles of a sphere (the points which <br>
//!   correspond to the values -Pi/2. and Pi/2. of the <br>
//!   v parameter) the u parameter may change from 0 to <br>
//!   2.Pi without impacting on the resulting point. <br>
//!   Therefore, take great care when adjusting a parametric <br>
//! tolerance to your own algorithm. <br>
  Standard_EXPORT   static  Standard_Real PConfusion(const Standard_Real T) ;
  
//! Returns a precision value in parametric space, which <br>
//! may be used by intersection algorithms, to decide that <br>
//! a solution is reached. The purpose of this function is to <br>
//! provide an acceptable level of precision in parametric <br>
//! space, for an intersection process to define the adjustment limits. <br>
//! The parametric tolerance of intersection is <br>
//! designed to give a mean value in relation with the <br>
//! dimension of the curve or the surface. It considers <br>
//! that a variation of parameter equal to 1. along a curve <br>
//! (or an isoparametric curve of a surface) generates a <br>
//! segment whose length is equal to 100. (default value), or T. <br>
//!   The parametric tolerance of intersection is equal to : <br>
//! -   Precision::Intersection() / 100., or Precision::Intersection() / T. <br>
  Standard_EXPORT   static  Standard_Real PIntersection(const Standard_Real T) ;
  //! Returns a precision value in parametric space, which may <br>
//! be used by approximation algorithms. The purpose of this <br>
//! function is to provide an acceptable level of precision in <br>
//! parametric space, for an approximation process to define <br>
//! the adjustment limits. <br>
//! The parametric tolerance of approximation is <br>
//! designed to give a mean value in relation with the <br>
//! dimension of the curve or the surface. It considers <br>
//! that a variation of parameter equal to 1. along a curve <br>
//! (or an isoparametric curve of a surface) generates a <br>
//! segment whose length is equal to 100. (default value), or T. <br>
//! The parametric tolerance of intersection is equal to : <br>
//! -   Precision::Approximation() / 100., or Precision::Approximation() / T. <br>
  Standard_EXPORT   static  Standard_Real PApproximation(const Standard_Real T) ;
  //! Convert a real  space precision  to  a  parametric <br>
//!          space precision on a default curve. <br>
//! <br>
//!          Value is Parametric(P,1.e+2) <br>
//! <br>
  Standard_EXPORT   static  Standard_Real Parametric(const Standard_Real P) ;
  //! Used  to test distances  in parametric  space on a <br>
//!          default curve. <br>
//! <br>
//!          This is Precision::Parametric(Precision::Confusion()) <br>
//! <br>
      static  Standard_Real PConfusion() ;
  //! Used for Intersections  in parametric  space  on a <br>
//!          default curve. <br>
//! <br>
//!          This is Precision::Parametric(Precision::Intersection()) <br>
//! <br>
      static  Standard_Real PIntersection() ;
  //! Used for  Approximations  in parametric space on a <br>
//!          default curve. <br>
//! <br>
//!          This is Precision::Parametric(Precision::Approximation()) <br>
//! <br>
      static  Standard_Real PApproximation() ;
  //! Returns True if R may be considered as an infinite <br>
//!          number. Currently Abs(R) > 1e100 <br>
  Standard_EXPORT   static  Standard_Boolean IsInfinite(const Standard_Real R) ;
  //! Returns True if R may be considered as  a positive <br>
//!          infinite number. Currently R > 1e100 <br>
  Standard_EXPORT   static  Standard_Boolean IsPositiveInfinite(const Standard_Real R) ;
  //! Returns True if R may  be considered as a negative <br>
//!          infinite number. Currently R < -1e100 <br>
  Standard_EXPORT   static  Standard_Boolean IsNegativeInfinite(const Standard_Real R) ;
  //! Returns a  big number that  can  be  considered as <br>
//!          infinite. Use -Infinite() for a negative big number. <br>
  Standard_EXPORT   static  Standard_Real Infinite() ;





protected:





private:





};


#include <Precision.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
