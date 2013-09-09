// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_SeqNodeOfHSequenceOfPnt_HeaderFile
#define _PColgp_SeqNodeOfHSequenceOfPnt_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColgp_SeqNodeOfHSequenceOfPnt_HeaderFile
#include <Handle_PColgp_SeqNodeOfHSequenceOfPnt.hxx>
#endif

#include <gp_Pnt.hxx>
#include <Handle_PColgp_SeqNodeOfHSequenceOfPnt.hxx>
#include <PMMgt_PManaged.hxx>
#include <Handle_PColgp_HSequenceOfPnt.hxx>
class PColgp_HSequenceOfPnt;
class PColgp_SeqExplorerOfHSequenceOfPnt;
class gp_Pnt;


class PColgp_SeqNodeOfHSequenceOfPnt : public PMMgt_PManaged {

public:

  
  Standard_EXPORT   PColgp_SeqNodeOfHSequenceOfPnt(const Handle(PColgp_SeqNodeOfHSequenceOfPnt)& TheLast,const gp_Pnt& TheItem);
  
  Standard_EXPORT   PColgp_SeqNodeOfHSequenceOfPnt(const gp_Pnt& TheItem,const Handle(PColgp_SeqNodeOfHSequenceOfPnt)& TheFirst);
  
  Standard_EXPORT   PColgp_SeqNodeOfHSequenceOfPnt(const Handle(PColgp_SeqNodeOfHSequenceOfPnt)& ThePrevious,const Handle(PColgp_SeqNodeOfHSequenceOfPnt)& TheNext,const gp_Pnt& TheItem);
  
  Standard_EXPORT     gp_Pnt Value() const;
  
  Standard_EXPORT     Handle_PColgp_SeqNodeOfHSequenceOfPnt Next() const;
  
  Standard_EXPORT     Handle_PColgp_SeqNodeOfHSequenceOfPnt Previous() const;
  
  Standard_EXPORT     void SetValue(const gp_Pnt& AnItem) ;
  
  Standard_EXPORT     void SetNext(const Handle(PColgp_SeqNodeOfHSequenceOfPnt)& ANode) ;
  
  Standard_EXPORT     void SetPrevious(const Handle(PColgp_SeqNodeOfHSequenceOfPnt)& ANode) ;

  PColgp_SeqNodeOfHSequenceOfPnt( )
{
  
}
PColgp_SeqNodeOfHSequenceOfPnt(const Storage_stCONSTclCOM& a) : PMMgt_PManaged(a)
{
  
}
    Handle(PColgp_SeqNodeOfHSequenceOfPnt) _CSFDB_GetPColgp_SeqNodeOfHSequenceOfPntMyPrevious() const { return MyPrevious; }
    void _CSFDB_SetPColgp_SeqNodeOfHSequenceOfPntMyPrevious(const Handle(PColgp_SeqNodeOfHSequenceOfPnt)& p) { MyPrevious = p; }
    const gp_Pnt& _CSFDB_GetPColgp_SeqNodeOfHSequenceOfPntMyItem() const { return MyItem; }
    Handle(PColgp_SeqNodeOfHSequenceOfPnt) _CSFDB_GetPColgp_SeqNodeOfHSequenceOfPntMyNext() const { return MyNext; }
    void _CSFDB_SetPColgp_SeqNodeOfHSequenceOfPntMyNext(const Handle(PColgp_SeqNodeOfHSequenceOfPnt)& p) { MyNext = p; }

friend class PColgp_HSequenceOfPnt;
friend class PColgp_SeqExplorerOfHSequenceOfPnt;


  DEFINE_STANDARD_RTTI(PColgp_SeqNodeOfHSequenceOfPnt)

protected:




private: 


Handle_PColgp_SeqNodeOfHSequenceOfPnt MyPrevious;
gp_Pnt MyItem;
Handle_PColgp_SeqNodeOfHSequenceOfPnt MyNext;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
