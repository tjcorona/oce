// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_MapOfInteractive_HeaderFile
#define _AIS_MapOfInteractive_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_AIS_InteractiveObject_HeaderFile
#include <Handle_AIS_InteractiveObject.hxx>
#endif
#ifndef _Handle_AIS_StdMapNodeOfMapOfInteractive_HeaderFile
#include <Handle_AIS_StdMapNodeOfMapOfInteractive.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class AIS_InteractiveObject;
class TColStd_MapTransientHasher;
class AIS_StdMapNodeOfMapOfInteractive;
class AIS_MapIteratorOfMapOfInteractive;



class AIS_MapOfInteractive  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   AIS_MapOfInteractive(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     AIS_MapOfInteractive& Assign(const AIS_MapOfInteractive& Other) ;
    AIS_MapOfInteractive& operator =(const AIS_MapOfInteractive& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~AIS_MapOfInteractive()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Add(const Handle(AIS_InteractiveObject)& aKey) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(AIS_InteractiveObject)& aKey) const;
  
  Standard_EXPORT     Standard_Boolean Remove(const Handle(AIS_InteractiveObject)& aKey) ;





protected:





private:

  
  Standard_EXPORT   AIS_MapOfInteractive(const AIS_MapOfInteractive& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
