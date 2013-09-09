// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_ColorMapEntry_HeaderFile
#define _Aspect_ColorMapEntry_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <Standard_Boolean.hxx>
#include <Quantity_Color.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Storable.hxx>
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_OutOfRange;
class Aspect_BadAccess;
class Quantity_Color;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(Aspect_ColorMapEntry);

//! This class defines a colormap entry. <br>
//!	    A colormap entry is an association between <br>
//!	    a RGB object and a index in the colormap. <br>
class Aspect_ColorMapEntry  {

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

  //! Creates an unallocated colormap entry <br>
  Standard_EXPORT   Aspect_ColorMapEntry();
  //! Creates an allocated colormap entry <br>
  Standard_EXPORT   Aspect_ColorMapEntry(const Standard_Integer index,const Quantity_Color& rgb);
  //! Creates an allocated colormap entry. <br>
//!  Warning: Raises error if the colormap entry <entry> <br>
//!	    is unallocated. <br>
  Standard_EXPORT   Aspect_ColorMapEntry(const Aspect_ColorMapEntry& entry);
  //! Sets colormap entry value and allocates it. <br>
  Standard_EXPORT     void SetValue(const Standard_Integer index,const Quantity_Color& rgb) ;
  //! Sets colormap entry value and allocates it. <br>
  Standard_EXPORT     void SetValue(const Aspect_ColorMapEntry& entry) ;
    void operator =(const Aspect_ColorMapEntry& entry) 
{
  SetValue(entry);
}
  //! Sets color <rgb> of colormap entry. <br>
  Standard_EXPORT     void SetColor(const Quantity_Color& rgb) ;
  
  Standard_EXPORT    const Quantity_Color& Color() const;
  //! Sets index value of a colormap entry. <br>
  Standard_EXPORT     void SetIndex(const Standard_Integer index) ;
  
  Standard_EXPORT     Standard_Integer Index() const;
  //! Unallocates the colormap entry. <br>
  Standard_EXPORT     void Free() ;
  //! Returns True if the colormap entry is allocated. <br>
//!  Warning: A colormap entry is allocated when the color and <br>
//!	    the index is defined. <br>
  Standard_EXPORT     Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT     void Dump() const;
    Standard_Boolean _CSFDB_GetAspect_ColorMapEntryallocated() const { return allocated; }
    void _CSFDB_SetAspect_ColorMapEntryallocated(const Standard_Boolean p) { allocated = p; }
    const Quantity_Color& _CSFDB_GetAspect_ColorMapEntrymycolor() const { return mycolor; }
    Standard_Integer _CSFDB_GetAspect_ColorMapEntrymyindex() const { return myindex; }
    void _CSFDB_SetAspect_ColorMapEntrymyindex(const Standard_Integer p) { myindex = p; }
    Standard_Boolean _CSFDB_GetAspect_ColorMapEntrymyColorIsDef() const { return myColorIsDef; }
    void _CSFDB_SetAspect_ColorMapEntrymyColorIsDef(const Standard_Boolean p) { myColorIsDef = p; }
    Standard_Boolean _CSFDB_GetAspect_ColorMapEntrymyIndexIsDef() const { return myIndexIsDef; }
    void _CSFDB_SetAspect_ColorMapEntrymyIndexIsDef(const Standard_Boolean p) { myIndexIsDef = p; }



protected:




private: 


Standard_Boolean allocated;
Quantity_Color mycolor;
Standard_Integer myindex;
Standard_Boolean myColorIsDef;
Standard_Boolean myIndexIsDef;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
