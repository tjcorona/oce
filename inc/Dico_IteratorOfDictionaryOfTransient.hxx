// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dico_IteratorOfDictionaryOfTransient_HeaderFile
#define _Dico_IteratorOfDictionaryOfTransient_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Dico_DictionaryOfTransient_HeaderFile
#include <Handle_Dico_DictionaryOfTransient.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Handle_Dico_StackItemOfDictionaryOfTransient_HeaderFile
#include <Handle_Dico_StackItemOfDictionaryOfTransient.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class Dico_DictionaryOfTransient;
class Dico_StackItemOfDictionaryOfTransient;
class Standard_NoSuchObject;
class Standard_Transient;
class TCollection_AsciiString;



class Dico_IteratorOfDictionaryOfTransient  {
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

  
  Standard_EXPORT   Dico_IteratorOfDictionaryOfTransient(const Handle(Dico_DictionaryOfTransient)& acell);
  
  Standard_EXPORT   Dico_IteratorOfDictionaryOfTransient(const Handle(Dico_DictionaryOfTransient)& acell,const Standard_CString basename);
  
  Standard_EXPORT   Dico_IteratorOfDictionaryOfTransient(const Handle(Dico_DictionaryOfTransient)& acell,const TCollection_AsciiString& basename);
  
  Standard_EXPORT     void Start() ;
  
  Standard_EXPORT     Standard_Boolean More() ;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT    const Handle_Standard_Transient& Value() const;
  
  Standard_EXPORT     TCollection_AsciiString Name() const;





protected:





private:

  
  Standard_EXPORT     void AppendStack(const Handle(Dico_DictionaryOfTransient)& val) ;


Handle_Dico_DictionaryOfTransient thebase;
TCollection_AsciiString thename;
Handle_Dico_StackItemOfDictionaryOfTransient thelast;
Standard_Integer thenb;
Standard_Boolean themore;
Standard_Boolean theinit;
Standard_Boolean thenext;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
