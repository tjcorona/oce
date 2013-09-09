// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_Array2OfDir_HeaderFile
#define _TColgp_Array2OfDir_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class gp_Dir;



class TColgp_Array2OfDir  {
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

  
  Standard_EXPORT   TColgp_Array2OfDir(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT   TColgp_Array2OfDir(const gp_Dir& Item,const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT     void Init(const gp_Dir& V) ;
  
  Standard_EXPORT     void Destroy() ;
~TColgp_Array2OfDir()
{
  Destroy();
}
  
  Standard_EXPORT    const TColgp_Array2OfDir& Assign(const TColgp_Array2OfDir& Other) ;
   const TColgp_Array2OfDir& operator =(const TColgp_Array2OfDir& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer ColLength() const;
  
        Standard_Integer RowLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const gp_Dir& Value) ;
  
       const gp_Dir& Value(const Standard_Integer Row,const Standard_Integer Col) const;
     const gp_Dir& operator()(const Standard_Integer Row,const Standard_Integer Col) const
{
  return Value(Row,Col);
}
  
        gp_Dir& ChangeValue(const Standard_Integer Row,const Standard_Integer Col) ;
      gp_Dir& operator()(const Standard_Integer Row,const Standard_Integer Col) 
{
  return ChangeValue(Row,Col);
}





protected:





private:

  
  Standard_EXPORT   TColgp_Array2OfDir(const TColgp_Array2OfDir& AnArray);
  
  Standard_EXPORT     void Allocate() ;


Standard_Integer myLowerRow;
Standard_Integer myLowerColumn;
Standard_Integer myUpperRow;
Standard_Integer myUpperColumn;
Standard_Boolean myDeletable;
Standard_Address myData;


};

#define Array2Item gp_Dir
#define Array2Item_hxx <gp_Dir.hxx>
#define TCollection_Array2 TColgp_Array2OfDir
#define TCollection_Array2_hxx <TColgp_Array2OfDir.hxx>

#include <TCollection_Array2.lxx>

#undef Array2Item
#undef Array2Item_hxx
#undef TCollection_Array2
#undef TCollection_Array2_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
