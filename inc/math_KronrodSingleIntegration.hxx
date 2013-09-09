// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_KronrodSingleIntegration_HeaderFile
#define _math_KronrodSingleIntegration_HeaderFile

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
class StdFail_NotDone;
class math_Function;
class math_Vector;


//! This class implements the Gauss-Kronrod method of <br>
//!          integral computation. <br>
class math_KronrodSingleIntegration  {
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

  //! An empty constructor. <br>
  Standard_EXPORT   math_KronrodSingleIntegration();
  //! Constructor. Takes the function, the lower and upper bound <br>
//!          values, the initial number of Kronrod points <br>
  Standard_EXPORT   math_KronrodSingleIntegration(math_Function& theFunction,const Standard_Real theLower,const Standard_Real theUpper,const Standard_Integer theNbPnts);
  //! Constructor. Takes the function, the lower and upper bound <br>
//!          values, the initial number of Kronrod points, the <br>
//!          tolerance value and the maximal number of iterations as <br>
//!          parameters. <br>
  Standard_EXPORT   math_KronrodSingleIntegration(math_Function& theFunction,const Standard_Real theLower,const Standard_Real theUpper,const Standard_Integer theNbPnts,const Standard_Real theTolerance,const Standard_Integer theMaxNbIter);
  //! Computation of the integral. Takes the function, <br>
//!          the lower and upper bound values, the initial number <br>
//!          of Kronrod points, the relative tolerance value and the <br>
//!          maximal number of iterations as parameters. <br>
//!          theNbPnts should be odd and greater then or equal to 3. <br>
  Standard_EXPORT     void Perform(math_Function& theFunction,const Standard_Real theLower,const Standard_Real theUpper,const Standard_Integer theNbPnts) ;
  //! Computation of the integral. Takes the function, <br>
//!          the lower and upper bound values, the initial number <br>
//!          of Kronrod points, the relative tolerance value and the <br>
//!          maximal number of iterations as parameters. <br>
//!          theNbPnts should be odd and greater then or equal to 3. <br>
//!          Note that theTolerance is relative, i.e. the criterion of <br>
//!          solution reaching is: <br>
//!          Abs(Kronrod - Gauss)/Abs(Kronrod) < theTolerance. <br>
//!          theTolerance should be positive. <br>
  Standard_EXPORT     void Perform(math_Function& theFunction,const Standard_Real theLower,const Standard_Real theUpper,const Standard_Integer theNbPnts,const Standard_Real theTolerance,const Standard_Integer theMaxNbIter) ;
  //! Returns Standard_True if computation is performed <br>
//!          successfully. <br>
        Standard_Boolean IsDone() const;
  //! Returns the value of the integral. <br>
        Standard_Real Value() const;
  //! Returns the value of the relative error reached. <br>
        Standard_Real ErrorReached() const;
  //! Returns the value of the relative error reached. <br>
        Standard_Real AbsolutError() const;
  //! Returns the number of Kronrod points <br>
//!          for which the result is computed. <br>
        Standard_Integer OrderReached() const;
  //! Returns the number of iterations <br>
//!          that were made to compute result. <br>
        Standard_Integer NbIterReached() const;
  
  Standard_EXPORT   static  Standard_Boolean GKRule(math_Function& theFunction,const Standard_Real theLower,const Standard_Real theUpper,const math_Vector& theGaussP,const math_Vector& theGaussW,const math_Vector& theKronrodP,const math_Vector& theKronrodW,Standard_Real& theValue,Standard_Real& theError) ;





protected:





private:



Standard_Boolean myIsDone;
Standard_Real myValue;
Standard_Real myErrorReached;
Standard_Real myAbsolutError;
Standard_Integer myNbPntsReached;
Standard_Integer myNbIterReached;


};


#include <math_KronrodSingleIntegration.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
