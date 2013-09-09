// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PPrsStd_AISPresentation_HeaderFile
#define _PPrsStd_AISPresentation_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PPrsStd_AISPresentation_HeaderFile
#include <Handle_PPrsStd_AISPresentation.hxx>
#endif

#include <Standard_Boolean.hxx>
#include <Handle_PCollection_HExtendedString.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
#include <PDF_Attribute.hxx>
class PCollection_HExtendedString;


class PPrsStd_AISPresentation : public PDF_Attribute {

public:

  
  Standard_EXPORT   PPrsStd_AISPresentation();
  
  Standard_EXPORT     Standard_Boolean IsDisplayed() const;
  
  Standard_EXPORT     void SetDisplayed(const Standard_Boolean B) ;
  
  Standard_EXPORT     void SetDriverGUID(const Handle(PCollection_HExtendedString)& guid) ;
  
  Standard_EXPORT     Handle_PCollection_HExtendedString GetDriverGUID() const;
  
  Standard_EXPORT     Standard_Integer Color() const;
  
  Standard_EXPORT     void SetColor(const Standard_Integer C) ;
  
  Standard_EXPORT     Standard_Real Transparency() const;
  
  Standard_EXPORT     void SetTransparency(const Standard_Real T) ;
  
  Standard_EXPORT     Standard_Integer Material() const;
  
  Standard_EXPORT     void SetMaterial(const Standard_Integer M) ;
  
  Standard_EXPORT     Standard_Real Width() const;
  
  Standard_EXPORT     void SetWidth(const Standard_Real W) ;

PPrsStd_AISPresentation(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Standard_Boolean _CSFDB_GetPPrsStd_AISPresentationmyIsDisplayed() const { return myIsDisplayed; }
    void _CSFDB_SetPPrsStd_AISPresentationmyIsDisplayed(const Standard_Boolean p) { myIsDisplayed = p; }
    Handle(PCollection_HExtendedString) _CSFDB_GetPPrsStd_AISPresentationmyDriverGUID() const { return myDriverGUID; }
    void _CSFDB_SetPPrsStd_AISPresentationmyDriverGUID(const Handle(PCollection_HExtendedString)& p) { myDriverGUID = p; }
    Standard_Real _CSFDB_GetPPrsStd_AISPresentationmyTransparency() const { return myTransparency; }
    void _CSFDB_SetPPrsStd_AISPresentationmyTransparency(const Standard_Real p) { myTransparency = p; }
    Standard_Integer _CSFDB_GetPPrsStd_AISPresentationmyColor() const { return myColor; }
    void _CSFDB_SetPPrsStd_AISPresentationmyColor(const Standard_Integer p) { myColor = p; }
    Standard_Integer _CSFDB_GetPPrsStd_AISPresentationmyMaterial() const { return myMaterial; }
    void _CSFDB_SetPPrsStd_AISPresentationmyMaterial(const Standard_Integer p) { myMaterial = p; }
    Standard_Real _CSFDB_GetPPrsStd_AISPresentationmyWidth() const { return myWidth; }
    void _CSFDB_SetPPrsStd_AISPresentationmyWidth(const Standard_Real p) { myWidth = p; }



  DEFINE_STANDARD_RTTI(PPrsStd_AISPresentation)

protected:




private: 


Standard_Boolean myIsDisplayed;
Handle_PCollection_HExtendedString myDriverGUID;
Standard_Real myTransparency;
Standard_Integer myColor;
Standard_Integer myMaterial;
Standard_Real myWidth;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
