// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_Generator_HeaderFile
#define _BRepFill_Generator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopTools_SequenceOfShape_HeaderFile
#include <TopTools_SequenceOfShape.hxx>
#endif
#ifndef _TopoDS_Shell_HeaderFile
#include <TopoDS_Shell.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeListOfShape_HeaderFile
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#endif
class TopoDS_Wire;
class TopoDS_Shell;
class TopTools_DataMapOfShapeListOfShape;
class TopTools_ListOfShape;
class TopoDS_Shape;


//! Compute a topological surface ( a  shell) using <br>
//!          generating wires. The face of the shell will be <br>
//!          ruled surfaces passing by the wires. <br>
//!          The wires must have the same number of edges. <br>
class BRepFill_Generator  {
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

  
  Standard_EXPORT   BRepFill_Generator();
  
  Standard_EXPORT     void AddWire(const TopoDS_Wire& Wire) ;
  //! Compute the  shell. <br>
  Standard_EXPORT     void Perform() ;
  
       const TopoDS_Shell& Shell() const;
  //! Returns  all   the shapes created <br>
  Standard_EXPORT    const TopTools_DataMapOfShapeListOfShape& Generated() const;
  //! Returns   the  shapes  created  from   a  subshape <br>
//!          <SSection>  of a  section. <br>
//! <br>
  Standard_EXPORT    const TopTools_ListOfShape& GeneratedShapes(const TopoDS_Shape& SSection) const;





protected:





private:



TopTools_SequenceOfShape myWires;
TopoDS_Shell myShell;
TopTools_DataMapOfShapeListOfShape myMap;


};


#include <BRepFill_Generator.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
