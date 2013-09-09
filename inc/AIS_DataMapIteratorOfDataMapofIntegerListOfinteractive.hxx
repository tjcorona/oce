// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive_HeaderFile
#define _AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_AIS_DataMapNodeOfDataMapofIntegerListOfinteractive_HeaderFile
#include <Handle_AIS_DataMapNodeOfDataMapofIntegerListOfinteractive.hxx>
#endif
class Standard_NoSuchObject;
class AIS_ListOfInteractive;
class TColStd_MapIntegerHasher;
class AIS_DataMapofIntegerListOfinteractive;
class AIS_DataMapNodeOfDataMapofIntegerListOfinteractive;



class AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive();
  
  Standard_EXPORT   AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive(const AIS_DataMapofIntegerListOfinteractive& aMap);
  
  Standard_EXPORT     void Initialize(const AIS_DataMapofIntegerListOfinteractive& aMap) ;
  
  Standard_EXPORT    const Standard_Integer& Key() const;
  
  Standard_EXPORT    const AIS_ListOfInteractive& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
