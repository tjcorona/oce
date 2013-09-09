// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Message_ProgressSentry_HeaderFile
#define _Message_ProgressSentry_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Message_ProgressIndicator_HeaderFile
#include <Handle_Message_ProgressIndicator.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class Message_ProgressIndicator;
class TCollection_HAsciiString;


//! This class is a tool allowing to manage opening/closing <br>
//!          scopes in the ProgressIndicator in convenient and safe way. <br>
class Message_ProgressSentry  {
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

  
  Standard_EXPORT   Message_ProgressSentry(const Handle(Message_ProgressIndicator)& PI,const Standard_CString name,const Standard_Real min,const Standard_Real max,const Standard_Real step,const Standard_Boolean isInf = Standard_False,const Standard_Real newScopeSpan = 0.0);
  //! Creates an instance of ProgressSentry attaching it to <br>
//!          the specified ProgressIndicator, selects parameters of <br>
//!          the current scale, and opens a new scope with specified <br>
//!          span (equal to step by default) <br>
  Standard_EXPORT   Message_ProgressSentry(const Handle(Message_ProgressIndicator)& PI,const Handle(TCollection_HAsciiString)& name,const Standard_Real min,const Standard_Real max,const Standard_Real step,const Standard_Boolean isInf = Standard_False,const Standard_Real newScopeSpan = 0.0);
  //! Moves progress indicator to the end of the current scale <br>
//!          and relieves sentry from its duty. Methods other than Show() <br>
//!          will do nothing after this one is called. <br>
        void Relieve() ;
~Message_ProgressSentry()
{
  Relieve();
}
  
        void Next(const Standard_CString name = 0) const;
  
        void Next(const Standard_Real span,const Standard_CString name = 0) const;
  //! Closes current scope and opens next one <br>
//!          with either specified or default span <br>
        void Next(const Standard_Real span,const Handle(TCollection_HAsciiString)& name) const;
  //! Returns False if ProgressIndicator signals UserBreak <br>
        Standard_Boolean More() const;
  //! Forces update of progress indicator display <br>
        void Show() const;





protected:





private:



Handle_Message_ProgressIndicator myProgress;
Standard_Boolean myActive;


};


#include <Message_ProgressSentry.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
