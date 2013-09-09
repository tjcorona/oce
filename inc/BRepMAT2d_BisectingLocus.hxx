// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMAT2d_BisectingLocus_HeaderFile
#define _BRepMAT2d_BisectingLocus_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_MAT_Graph_HeaderFile
#include <Handle_MAT_Graph.hxx>
#endif
#ifndef _MAT2d_Tool2d_HeaderFile
#include <MAT2d_Tool2d.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MAT2d_DataMapOfBiIntInteger_HeaderFile
#include <MAT2d_DataMapOfBiIntInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MAT_Side_HeaderFile
#include <MAT_Side.hxx>
#endif
#ifndef _Handle_MAT_BasicElt_HeaderFile
#include <Handle_MAT_BasicElt.hxx>
#endif
#ifndef _Handle_Geom2d_Geometry_HeaderFile
#include <Handle_Geom2d_Geometry.hxx>
#endif
#ifndef _Handle_MAT_Node_HeaderFile
#include <Handle_MAT_Node.hxx>
#endif
#ifndef _Handle_MAT_Arc_HeaderFile
#include <Handle_MAT_Arc.hxx>
#endif
class MAT_Graph;
class BRepMAT2d_Explorer;
class MAT_BasicElt;
class Geom2d_Geometry;
class gp_Pnt2d;
class MAT_Node;
class Bisector_Bisec;
class MAT_Arc;
class MAT_DataMapOfIntegerBasicElt;



class BRepMAT2d_BisectingLocus  {
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

  
  Standard_EXPORT   BRepMAT2d_BisectingLocus();
  
  Standard_EXPORT     void Compute(BRepMAT2d_Explorer& anExplo,const Standard_Integer LineIndex = 1,const MAT_Side aSide = MAT_Left) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     Handle_MAT_Graph Graph() const;
  
  Standard_EXPORT     Standard_Integer NumberOfContours() const;
  
  Standard_EXPORT     Standard_Integer NumberOfElts(const Standard_Integer IndLine) const;
  
  Standard_EXPORT     Standard_Integer NumberOfSections(const Standard_Integer IndLine,const Standard_Integer Index) const;
  
  Standard_EXPORT     Handle_MAT_BasicElt BasicElt(const Standard_Integer IndLine,const Standard_Integer Index) const;
  
  Standard_EXPORT     Handle_Geom2d_Geometry GeomElt(const Handle(MAT_BasicElt)& aBasicElt) const;
  
  Standard_EXPORT     gp_Pnt2d GeomElt(const Handle(MAT_Node)& aNode) const;
  
  Standard_EXPORT     Bisector_Bisec GeomBis(const Handle(MAT_Arc)& anArc,Standard_Boolean& Reverse) const;





protected:





private:

  
  Standard_EXPORT     void Fusion() ;
  
  Standard_EXPORT     void RenumerationAndFusion(const Standard_Integer IndexLine,const Standard_Integer LengthLine,Standard_Integer& IndexLast,MAT_DataMapOfIntegerBasicElt& NewMap) ;


Handle_MAT_Graph theGraph;
MAT2d_Tool2d theTool;
Standard_Boolean isDone;
MAT2d_DataMapOfBiIntInteger nbSect;
Standard_Integer nbContours;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
