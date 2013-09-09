// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Quantity_Color_HeaderFile
#define _Quantity_Color_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <Standard_ShortReal.hxx>
#include <Standard_Storable.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Quantity_Parameter.hxx>
#include <Quantity_TypeOfColor.hxx>
#include <Quantity_Rate.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_CString.hxx>
#include <Standard_Integer.hxx>
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Quantity_ColorDefinitionError;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(Quantity_Color);

//! This class allows the definition of a colour. <br>
//!	    The names of the colours are from the X11 specification. <br>
//! color object may be used for numerous applicative purposes. <br>
//! A color is defined by: <br>
//! -   its respective quantities of red, green and blue (R-G-B values), or <br>
//! -   its hue angle and its values of lightness and  saturation (H-L-S values). <br>
//! These two color definition systems are equivalent. <br>
//! Use this class in conjunction with: <br>
//! -   the Quantity_TypeOfColor enumeration <br>
//!   which identifies the color definition system you are using, <br>
//! -   the Quantity_NameOfColor enumeration <br>
//!   which lists numerous predefined colors and <br>
//!   identifies them by their name. <br>
class Quantity_Color  {

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

  //! Creates a colour with the default value of <br>
//!	    Colour name : YELLOW <br>
  Standard_EXPORT   Quantity_Color();
  //! Creates the colour <AName>. <br>
  Standard_EXPORT   Quantity_Color(const Quantity_NameOfColor AName);
  //! Creates a colour according to the definition system <br>
//!	    TypeOfColor. <br>
//!	    TOC_RGB : <R1> the value of red between 0. and 1. <br>
//!		      <R2> the value of green between 0. and 1. <br>
//!		      <R3> the value of blue between 0. and 1. <br>
  Standard_EXPORT   Quantity_Color(const Quantity_Parameter R1,const Quantity_Parameter R2,const Quantity_Parameter R3,const Quantity_TypeOfColor AType);
  //! Updates the colour <me> from the definition of the <br>
//!	    colour <Other>. <br>
  Standard_EXPORT     Quantity_Color& Assign(const Quantity_Color& Other) ;
    Quantity_Color& operator =(const Quantity_Color& Other) 
{
  return Assign(Other);
}
  //! Increases or decreases the contrast by <ADelta>. <br>
//!	    <ADelta> is a percentage. Any value greater than zero <br>
//!	    will increase the contrast. <br>
//!	    The variation is expressed as a percentage of the <br>
//!	    current value. <br>
//!	    It is a variation of the saturation. <br>
  Standard_EXPORT     void ChangeContrast(const Quantity_Rate ADelta) ;
  //! Increases or decreases the intensity by <ADelta>. <br>
//!	    <ADelta> is a percentage. Any value greater than zero <br>
//!	    will increase the intensity. <br>
//!	    The variation is expressed as a percentage of the <br>
//!	    current value. <br>
//!	    It is a variation of the lightness. <br>
  Standard_EXPORT     void ChangeIntensity(const Quantity_Rate ADelta) ;
  //! Updates the colour <me> from the definition of the <br>
//!	    colour <AName>. <br>
  Standard_EXPORT     void SetValues(const Quantity_NameOfColor AName) ;
  //! Updates a colour according to the mode specified by <br>
//!	    TypeOfColor <br>
//!	    TOC_RGB : <R1> the value of red between 0. and 1. <br>
//!		      <R2> the value of green between 0. and 1. <br>
//!		      <R3> the value of blue between 0. and 1. <br>
  Standard_EXPORT     void SetValues(const Quantity_Parameter R1,const Quantity_Parameter R2,const Quantity_Parameter R3,const Quantity_TypeOfColor AType) ;
  //! Returns the percentage change of contrast and intensity <br>
//!	    between <me> and <AColor>. <br>
//!	    <DC> and <DI> are percentages, either positive or negative. <br>
//!	    The calculation is with respect to the current value of <me> <br>
//!	    If <DC> is positive then <me> is more contrasty. <br>
//!	    If <DI> is positive then <me> is more intense. <br>
  Standard_EXPORT     void Delta(const Quantity_Color& AColor,Quantity_Parameter& DC,Quantity_Parameter& DI) const;
  //! Returns the distance between two colours. It's a <br>
//!	    value between 0 and the square root of 3 <br>
//!	    (the black/white distance) <br>
  Standard_EXPORT     Standard_Real Distance(const Quantity_Color& AColor) const;
  //! Returns the square of distance between two colours. <br>
  Standard_EXPORT     Standard_Real SquareDistance(const Quantity_Color& AColor) const;
  //! Returns the Blue component (quantity of blue) of the <br>
//!	    color <me>. <br>
  Standard_EXPORT     Quantity_Parameter Blue() const;
  //! Returns the Green component (quantity of green) of the <br>
//!	    color <me>. <br>
  Standard_EXPORT     Quantity_Parameter Green() const;
  //! Returns the Hue component (hue angle) of the <br>
//!	    color <me>. <br>
  Standard_EXPORT     Quantity_Parameter Hue() const;
  //! Returns Standard_True if the distance between <me> and <br>
//!	    <Other> is greater than Epsilon (). <br>
  Standard_EXPORT     Standard_Boolean IsDifferent(const Quantity_Color& Other) const;
    Standard_Boolean operator !=(const Quantity_Color& Other) const
{
  return IsDifferent(Other);
}
  //! Returns true if the Other color is <br>
//! -   different from, or <br>
//! -   equal to this color. <br>
//! Two colors are considered to be equal if their <br>
//! distance is no greater than Epsilon(). <br>
//! These methods are aliases of operator != and operator ==. <br>
  Standard_EXPORT     Standard_Boolean IsEqual(const Quantity_Color& Other) const;
    Standard_Boolean operator ==(const Quantity_Color& Other) const
{
  return IsEqual(Other);
}
  //! Returns the Light component (value of the lightness) of the <br>
//!	    color <me>. <br>
  Standard_EXPORT     Quantity_Parameter Light() const;
  //! Returns the name of the color defined by its <br>
//! quantities of red R, green G and blue B; more <br>
//! precisely this is the nearest color from the <br>
//! Quantity_NameOfColor enumeration. <br>
//! Exceptions <br>
//! Standard_OutOfRange if R, G or B is less than 0. or greater than 1. <br>
  Standard_EXPORT     Quantity_NameOfColor Name() const;
  //! Returns the Red component (quantity of red) of the <br>
//!	    color <me>. <br>
  Standard_EXPORT     Quantity_Parameter Red() const;
  //! Returns the Saturation component (value of the saturation) <br>
//!	    of the color <me>. <br>
  Standard_EXPORT     Quantity_Parameter Saturation() const;
  //! Returns in R1, R2 and R3 the components of <br>
//! this color according to the color system definition AType. <br>
//! -   if AType is Quantity_TOC_RGB R1 is the <br>
//!   quantity of red, R2 is the quantity of green and <br>
//!   R3 is the quantity of blue in this color. <br>
//! -   if AType is Quantity_TOC_HLS R1 is the <br>
//!   hue angle in degrees (0 being red), R2 is the <br>
//!   lightness and R3 is the saturation of this color. <br>
  Standard_EXPORT     void Values(Quantity_Parameter& R1,Quantity_Parameter& R2,Quantity_Parameter& R3,const Quantity_TypeOfColor AType) const;
  //! Sets the specified value used to compare <me> and <br>
//!	    an other color in IsDifferent and in IsEqual methods. <br>
//!  Warning: The default value is 0.0001 <br>
  Standard_EXPORT   static  void SetEpsilon(const Quantity_Parameter AnEpsilon) ;
  //! Returns the specified value used to compare <me> and <br>
//!	    an other color in IsDifferent and in IsEqual methods. <br>
  Standard_EXPORT   static  Quantity_Parameter Epsilon() ;
  //! Returns the name of the colour for which the RGB components <br>
//!	    are nearest to <R>, <G> and <B>. <br>
  Standard_EXPORT   static  Quantity_NameOfColor Name(const Quantity_Parameter R,const Quantity_Parameter G,const Quantity_Parameter B) ;
  //!  Returns the name of the color identified by <br>
//! AName in the Quantity_NameOfColor enumeration. <br>
//! For example, the name of the color which <br>
//! corresponds to Quantity_NOC_BLACK is "BLACK". <br>
//! Exceptions <br>
//! Standard_OutOfRange if AName in not known <br>
//! in the Quantity_NameOfColor enumeration. <br>
  Standard_EXPORT   static  Standard_CString StringName(const Quantity_NameOfColor AColor) ;
  //! Converts HLS components into RGB ones. <br>
  Standard_EXPORT   static  void HlsRgb(const Quantity_Parameter H,const Quantity_Parameter L,const Quantity_Parameter S,Quantity_Parameter& R,Quantity_Parameter& G,Quantity_Parameter& B) ;
  //! Converts RGB components into HLS ones. <br>
  Standard_EXPORT   static  void RgbHls(const Quantity_Parameter R,const Quantity_Parameter G,const Quantity_Parameter B,Quantity_Parameter& H,Quantity_Parameter& L,Quantity_Parameter& S) ;
  //! Convert the Color value to ARGB integer value. <br>
//!          theARGB has Alpha equal to zero, so the output is <br>
//!          formatted as 0x00RRGGBB <br>
  Standard_EXPORT   static  void Color2argb(const Quantity_Color& theColor,Standard_Integer& theARGB) ;
  //! Convert integer ARGB value to Color. Alpha bits are ignored <br>
  Standard_EXPORT   static  void Argb2color(const Standard_Integer theARGB,Quantity_Color& theColor) ;
  //! Internal test <br>
  Standard_EXPORT   static  void Test() ;
    Standard_ShortReal _CSFDB_GetQuantity_ColorMyRed() const { return MyRed; }
    void _CSFDB_SetQuantity_ColorMyRed(const Standard_ShortReal p) { MyRed = p; }
    Standard_ShortReal _CSFDB_GetQuantity_ColorMyGreen() const { return MyGreen; }
    void _CSFDB_SetQuantity_ColorMyGreen(const Standard_ShortReal p) { MyGreen = p; }
    Standard_ShortReal _CSFDB_GetQuantity_ColorMyBlue() const { return MyBlue; }
    void _CSFDB_SetQuantity_ColorMyBlue(const Standard_ShortReal p) { MyBlue = p; }



protected:




private: 

  //! Converts HLS components into RGB ones. <br>
  Standard_EXPORT   static  void hlsrgb(const Standard_ShortReal H,const Standard_ShortReal L,const Standard_ShortReal S,Standard_ShortReal& R,Standard_ShortReal& G,Standard_ShortReal& B) ;
  //! Converts RGB components into HLS ones. <br>
  Standard_EXPORT   static  void rgbhls(const Standard_ShortReal R,const Standard_ShortReal G,const Standard_ShortReal B,Standard_ShortReal& H,Standard_ShortReal& L,Standard_ShortReal& S) ;
  //! Returns the values of a predefined colour according to <br>
//!	    the mode specified by TypeOfColor <br>
//!	    TOC_RGB : <R1> the value of red between 0. and 1. <br>
//!		      <R2> the value of green between 0. and 1. <br>
//!		      <R3> the value of blue between 0. and 1. <br>
  Standard_EXPORT   static  void ValuesOf(const Quantity_NameOfColor AName,const Quantity_TypeOfColor AType,Standard_ShortReal& R1,Standard_ShortReal& R2,Standard_ShortReal& R3) ;

Standard_ShortReal MyRed;
Standard_ShortReal MyGreen;
Standard_ShortReal MyBlue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
