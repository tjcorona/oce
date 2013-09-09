// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFDoc_HeaderFile
#define _XCAFDoc_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <XCAFDoc_ColorType.hxx>
class Standard_GUID;
class XCAFDoc_DocumentTool;
class XCAFDoc_Location;
class XCAFDoc_Color;
class XCAFDoc_DimTol;
class XCAFDoc_Datum;
class XCAFDoc_Material;
class XCAFDoc_Volume;
class XCAFDoc_Area;
class XCAFDoc_Centroid;
class XCAFDoc_ShapeTool;
class XCAFDoc_ShapeMapTool;
class XCAFDoc_ColorTool;
class XCAFDoc_DimTolTool;
class XCAFDoc_LayerTool;
class XCAFDoc_MaterialTool;
class XCAFDoc_GraphNode;
class XCAFDoc_GraphNodeSequence;
class XCAFDoc_DataMapOfShapeLabel;
class XCAFDoc_SequenceNodeOfGraphNodeSequence;
class XCAFDoc_DataMapNodeOfDataMapOfShapeLabel;
class XCAFDoc_DataMapIteratorOfDataMapOfShapeLabel;


//! Definition of general structure of DECAF document <br>
//!          and tools to work with it <br>
class XCAFDoc  {
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

  //! Returns GUID for UAttribute identifying assembly <br>
  Standard_EXPORT   static  Standard_GUID AssemblyGUID() ;
  //! Returns GUID for TreeNode representing assembly link <br>
  Standard_EXPORT   static  Standard_GUID ShapeRefGUID() ;
  //! Return GUIDs for TreeNode representing specified types of colors <br>
  Standard_EXPORT   static  Standard_GUID ColorRefGUID(const XCAFDoc_ColorType type) ;
  //! Return GUIDs for TreeNode representing specified types of DGT <br>
  Standard_EXPORT   static  Standard_GUID DimTolRefGUID() ;
  //! Return GUIDs for TreeNode representing specified types of datum <br>
  Standard_EXPORT   static  Standard_GUID DatumRefGUID() ;
  //! Return GUIDs for TreeNode representing connections Datum-Toler <br>
  Standard_EXPORT   static  Standard_GUID DatumTolRefGUID() ;
  
  Standard_EXPORT   static  Standard_GUID LayerRefGUID() ;
  
  Standard_EXPORT   static  Standard_GUID MaterialRefGUID() ;
  
  Standard_EXPORT   static  Standard_GUID InvisibleGUID() ;
  //! Returns GUID for UAttribute identifying external reference on no-step file <br>
  Standard_EXPORT   static  Standard_GUID ExternRefGUID() ;
  //! Returns GUID for UAttribute identifying specified higher usage occurrence <br>
  Standard_EXPORT   static  Standard_GUID SHUORefGUID() ;





protected:





private:




friend class XCAFDoc_DocumentTool;
friend class XCAFDoc_Location;
friend class XCAFDoc_Color;
friend class XCAFDoc_DimTol;
friend class XCAFDoc_Datum;
friend class XCAFDoc_Material;
friend class XCAFDoc_Volume;
friend class XCAFDoc_Area;
friend class XCAFDoc_Centroid;
friend class XCAFDoc_ShapeTool;
friend class XCAFDoc_ShapeMapTool;
friend class XCAFDoc_ColorTool;
friend class XCAFDoc_DimTolTool;
friend class XCAFDoc_LayerTool;
friend class XCAFDoc_MaterialTool;
friend class XCAFDoc_GraphNode;
friend class XCAFDoc_GraphNodeSequence;
friend class XCAFDoc_DataMapOfShapeLabel;
friend class XCAFDoc_SequenceNodeOfGraphNodeSequence;
friend class XCAFDoc_DataMapNodeOfDataMapOfShapeLabel;
friend class XCAFDoc_DataMapIteratorOfDataMapOfShapeLabel;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
