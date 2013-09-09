// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_HDoubleListOfReal_HeaderFile
#define _PColStd_HDoubleListOfReal_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColStd_HDoubleListOfReal_HeaderFile
#include <Handle_PColStd_HDoubleListOfReal.hxx>
#endif

#include <Standard_Boolean.hxx>
#include <Handle_PColStd_HDoubleListOfReal.hxx>
#include <Standard_Real.hxx>
#include <Handle_Standard_Persistent.hxx>
#include <PMMgt_PManaged.hxx>
#include <Standard_OStream.hxx>
class Standard_Persistent;
class Standard_NoSuchObject;


class PColStd_HDoubleListOfReal : public PMMgt_PManaged {

public:

  
  Standard_EXPORT   PColStd_HDoubleListOfReal();
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     Handle_PColStd_HDoubleListOfReal Construct(const Standard_Real& T) ;
  
  Standard_EXPORT     Standard_Real Value() const;
  
  Standard_EXPORT     Handle_PColStd_HDoubleListOfReal Tail() const;
  
  Standard_EXPORT     Handle_PColStd_HDoubleListOfReal Previous() const;
  
  Standard_EXPORT     void SwapTail(Handle(PColStd_HDoubleListOfReal)& WithList) ;
  
  Standard_EXPORT     void SetValue(const Standard_Real& T) ;
  
  Standard_EXPORT     void ChangeBackPointer(const Handle(PColStd_HDoubleListOfReal)& BackPointer) ;
  
  Standard_EXPORT     void ChangeForwardPointer(const Handle(PColStd_HDoubleListOfReal)& ForwardPointer) ;
  
  Standard_EXPORT   virtual  Handle_Standard_Persistent ShallowCopy() const;
  
  Standard_EXPORT   virtual  void ShallowDump(Standard_OStream& s) const;
  
  Standard_EXPORT     void Destroy() ;
~PColStd_HDoubleListOfReal()
{
  Destroy();
}
PColStd_HDoubleListOfReal(const Storage_stCONSTclCOM& a) : PMMgt_PManaged(a)
{
  
}
    Standard_Real _CSFDB_GetPColStd_HDoubleListOfRealData() const { return Data; }
    void _CSFDB_SetPColStd_HDoubleListOfRealData(const Standard_Real p) { Data = p; }
    Handle(PColStd_HDoubleListOfReal) _CSFDB_GetPColStd_HDoubleListOfRealNext() const { return Next; }
    void _CSFDB_SetPColStd_HDoubleListOfRealNext(const Handle(PColStd_HDoubleListOfReal)& p) { Next = p; }
    Handle(PColStd_HDoubleListOfReal) _CSFDB_GetPColStd_HDoubleListOfRealBefore() const { return Before; }
    void _CSFDB_SetPColStd_HDoubleListOfRealBefore(const Handle(PColStd_HDoubleListOfReal)& p) { Before = p; }



  DEFINE_STANDARD_RTTI(PColStd_HDoubleListOfReal)

protected:




private: 


Standard_Real Data;
Handle_PColStd_HDoubleListOfReal Next;
Handle_PColStd_HDoubleListOfReal Before;


};





// other Inline functions and methods (like "C++: function call" methods)
inline Handle_Standard_Persistent ShallowCopy(const Handle_PColStd_HDoubleListOfReal& me) {
 return me->ShallowCopy();
}

inline void ShallowDump(const Handle_PColStd_HDoubleListOfReal& me,Standard_OStream& s) {
 me->ShallowDump(s);
}



#endif
