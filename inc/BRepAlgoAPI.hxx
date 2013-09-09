// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgoAPI_HeaderFile
#define _BRepAlgoAPI_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <Standard_CString.hxx>
#include <BOPAlgo_Operation.hxx>
#include <Standard_Boolean.hxx>
class TopoDS_Shape;
class BRepAlgoAPI_BooleanOperation;
class BRepAlgoAPI_Fuse;
class BRepAlgoAPI_Common;
class BRepAlgoAPI_Cut;
class BRepAlgoAPI_Section;
class BRepAlgoAPI_Check;


//!  The BRepAlgoAPI package provides a full range of <br>
//! services to perform Boolean Operations on arguments (shapes <br>
//! that are defined in the BRep data structures). The <br>
//! implemented new algorithm is intended to replace the Old <br>
//! Boolean Operations algorithm in the BRepAlgoAPI package. <br>
//! The New algorithm is free of a large number of weak spots <br>
//! and limitations characteristics of the Old algorithm. <br>
//! It is more powerful and flexible. <br>
//! It can process arguments the Old algorithm was not adapted for. <br>
//! The new algorithm is based on a new approach to operations <br>
//! with interfered shapes. The advantages of the new algorithm <br>
//! include an ability to treat arguments that have shared <br>
//! entities. It can properly process two solids with shared <br>
//! faces (in terms of TopoDS_Shape::IsSame()), two <br>
//! faces that have shared edges and so on. Now the New Boolean <br>
//! Operation algorithm can treat a wide range of shapes while the <br>
//! Old one fails on them. <br>
//! A generalization of treatment of same-domain faces <br>
//! was included into the New algorithm. Two faces that share <br>
//! the same domain are processed according to the common rule <br>
//! even if the underlying surfaces are of different types. This <br>
//! allows to execute Boolean Operations properly for the same <br>
//! domain faces. It also concerns solids and shells that have the <br>
//! same domain faces. It is quite frequent when two faces share <br>
//! the same domain. And the New algorithm successfully copes <br>
//! with it in contrast to the Old one. <br>
//!  Generalization oftreatment of degenerated edges <br>
//! gives a possibility to process them properly. Although there <br>
//! are still some difficulties with processing faces in areas close <br>
//! to degenerated edges. <br>
//!  Now the processing of arguments having internal sub-shapes gives <br>
//! a correct result. Internal sub-shape means a sub-shape of a <br>
//! shape with the orientation TopAbs_INTERNAL and is located <br>
//! inside the shape boundaries. The New algorithm processes faces <br>
//! with internal edges properly. The new API of the Boolean <br>
//! Operations (in addition to the old API) allows to reuse the <br>
//! already computed interference between arguments in different <br>
//! types of Boolean Operations. It is possible to use once computed <br>
//! interference in FUSE, CUT and COMMON operations on given <br>
//! arguments. So there is no need to re-compute the interference <br>
//! between the arguments. It allows to reduce time for more than one <br>
//! operation on given arguments. <br>
//!   The shape type of a Boolean Operation result and types of the arguments: <br>
//! -      For arguments with the same shape type (e.g. SOLID / <br>
//!   SOLID) the type of the resulting shape will be a <br>
//!   COMPOUND, containing shapes of this type; <br>
//! -      For arguments with different shape types (e.g. <br>
//!   SHELL / SOLID) the type of the resulting shape will be a <br>
//!   COMPOUND, containing shapes of the type that is the same as <br>
//!   that of the low type of the argument. Example: For <br>
//!   SHELL/SOLID the result is a COMPOUND of SHELLs. <br>
//! -      For arguments with different shape types some of <br>
//!   Boolean Operations can not be done using the default <br>
//!   implementation, because of a non-manifold type of the <br>
//!   result. Example: the FUSE operation for SHELL and SOLID <br>
//!   can not be done, but the CUT operation can be done, where <br>
//!   SHELL is the object and SOLID is the tool. <br>
//! It is possible to perform Boolean Operations on arguments <br>
//! of the COMPOUND shape type. In this case each compound must not <br>
//! be heterogeneous, i.e. it must contain equidimensional shapes <br>
//! (EDGEs or/and WIREs, FACEs or/and SHELLs, SOLIDs). SOLIDs <br>
//! inside the COMPOUND must not contact (intersect or touch) <br>
//! each other. The same condition is true for SHELLs or FACEs, <br>
//! WIREs or EDGEs. <br>
//! It does not support Boolean Operations for COMPSOLID type of shape. <br>
class BRepAlgoAPI  {
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

  //! Dump arguments and result of boolean operation in the file specified by path. <br>
  Standard_EXPORT   static  void DumpOper(const Standard_CString theFilePath,const TopoDS_Shape& theShape1,const TopoDS_Shape& theShape2,const TopoDS_Shape& theResult,const BOPAlgo_Operation theOperation,const Standard_Boolean isNonValidArgs) ;





protected:





private:




friend class BRepAlgoAPI_BooleanOperation;
friend class BRepAlgoAPI_Fuse;
friend class BRepAlgoAPI_Common;
friend class BRepAlgoAPI_Cut;
friend class BRepAlgoAPI_Section;
friend class BRepAlgoAPI_Check;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
