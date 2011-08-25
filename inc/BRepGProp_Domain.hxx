// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepGProp_Domain_HeaderFile
#define _BRepGProp_Domain_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopExp_Explorer_HeaderFile
#include <TopExp_Explorer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopoDS_Face;
class TopoDS_Edge;


//! Arc iterator. Returns only Forward and Reversed edges from <br>
//!          the face in an undigested order. <br>
class BRepGProp_Domain  {
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

  //! Empty constructor. <br>
      BRepGProp_Domain();
  //! Constructor. Initializes the domain with the face. <br>
      BRepGProp_Domain(const TopoDS_Face& F);
  //! Initializes the domain with the face. <br>
        void Init(const TopoDS_Face& F) ;
  
//!  Returns True if there is another arc of curve in the list. <br>
        Standard_Boolean More() ;
  //! Initializes the exploration with the face already set. <br>
        void Init() ;
  //! Returns the current edge. <br>
       const TopoDS_Edge& Value() ;
  
//!  Sets the index of the arc iterator to the next arc of <br>
//!  curve. <br>
  Standard_EXPORT     void Next() ;





protected:





private:



TopExp_Explorer myExplorer;


};


#include <BRepGProp_Domain.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif