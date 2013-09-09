// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPAlgo_PaveFiller_HeaderFile
#define _BOPAlgo_PaveFiller_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOPCol_ListOfShape_HeaderFile
#include <BOPCol_ListOfShape.hxx>
#endif
#ifndef _BOPDS_PDS_HeaderFile
#include <BOPDS_PDS.hxx>
#endif
#ifndef _BOPDS_PIterator_HeaderFile
#include <BOPDS_PIterator.hxx>
#endif
#ifndef _Handle_BOPInt_Context_HeaderFile
#include <Handle_BOPInt_Context.hxx>
#endif
#ifndef _BOPAlgo_SectionAttribute_HeaderFile
#include <BOPAlgo_SectionAttribute.hxx>
#endif
#ifndef _BOPAlgo_Algo_HeaderFile
#include <BOPAlgo_Algo.hxx>
#endif
#ifndef _BOPCol_BaseAllocator_HeaderFile
#include <BOPCol_BaseAllocator.hxx>
#endif
#ifndef _Handle_BOPDS_PaveBlock_HeaderFile
#include <Handle_BOPDS_PaveBlock.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks_HeaderFile
#include <BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BOPCol_MapOfInteger_HeaderFile
#include <BOPCol_MapOfInteger.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _BOPDS_MapOfPaveBlock_HeaderFile
#include <BOPDS_MapOfPaveBlock.hxx>
#endif
#ifndef _BOPCol_ListOfInteger_HeaderFile
#include <BOPCol_ListOfInteger.hxx>
#endif
#ifndef _BOPCol_DataMapOfShapeInteger_HeaderFile
#include <BOPCol_DataMapOfShapeInteger.hxx>
#endif
#ifndef _BOPDS_DataMapOfPaveBlockListOfPaveBlock_HeaderFile
#include <BOPDS_DataMapOfPaveBlockListOfPaveBlock.hxx>
#endif
#ifndef _BOPDS_ListOfPaveBlock_HeaderFile
#include <BOPDS_ListOfPaveBlock.hxx>
#endif
#ifndef _BOPCol_IndexedDataMapOfShapeInteger_HeaderFile
#include <BOPCol_IndexedDataMapOfShapeInteger.hxx>
#endif
#ifndef _BOPCol_IndexedDataMapOfShapeListOfShape_HeaderFile
#include <BOPCol_IndexedDataMapOfShapeListOfShape.hxx>
#endif
#ifndef _BOPDS_VectorOfCurve_HeaderFile
#include <BOPDS_VectorOfCurve.hxx>
#endif
class BOPInt_Context;
class BOPDS_DS;
class BOPAlgo_SectionAttribute;
class BOPDS_PaveBlock;
class TopoDS_Vertex;
class gp_Pnt;
class BOPDS_Curve;
class TopoDS_Face;
class IntSurf_ListOfPntOn2S;



class BOPAlgo_PaveFiller  : public BOPAlgo_Algo {
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

  
  Standard_EXPORT   BOPAlgo_PaveFiller();
Standard_EXPORT virtual ~BOPAlgo_PaveFiller();
  
  Standard_EXPORT   BOPAlgo_PaveFiller(const BOPCol_BaseAllocator& theAllocator);
  
  Standard_EXPORT    const BOPDS_DS& DS() ;
  
  Standard_EXPORT     BOPDS_PDS PDS() ;
  
  Standard_EXPORT    const BOPDS_PIterator& Iterator() ;
  
  Standard_EXPORT    const BOPCol_ListOfShape& Arguments() const;
Standard_EXPORT void SetArguments(const BOPCol_ListOfShape& theLS);
  
  Standard_EXPORT     Handle_BOPInt_Context Context() ;
  
  Standard_EXPORT     void SetSectionAttribute(const BOPAlgo_SectionAttribute& theSecAttr) ;
  
  Standard_EXPORT   virtual  void Perform() ;





protected:

  
  Standard_EXPORT   virtual  void Clear() ;
  
  Standard_EXPORT   virtual  void Init() ;
  
  Standard_EXPORT   virtual  void PerformVV() ;
  
  Standard_EXPORT   virtual  void PerformVE() ;
  
  Standard_EXPORT   virtual  void PerformVF() ;
  
  Standard_EXPORT   virtual  void PerformEE() ;
  
  Standard_EXPORT   virtual  void PerformEF() ;
  
  Standard_EXPORT   virtual  void PerformFF() ;
  
  Standard_EXPORT     void TreatVerticesEE() ;
  
  Standard_EXPORT     void MakeSplitEdges() ;
  
  Standard_EXPORT     void MakeBlocks() ;
  
  Standard_EXPORT     void MakePCurves() ;
  
  Standard_EXPORT     void ProcessDE() ;
  
  Standard_EXPORT     void FillShrunkData(Handle(BOPDS_PaveBlock)& thePB) ;
  
  Standard_EXPORT     Standard_Integer PerformVerticesEE(BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks& theMVCPB,BOPCol_BaseAllocator& theAllocator) ;
  
  Standard_EXPORT     Standard_Integer PerformVerticesEF(BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks& theMVCPB,BOPCol_BaseAllocator& theAllocator) ;
  
  Standard_EXPORT     Standard_Boolean CheckFacePaves(const TopoDS_Vertex& theVnew,const BOPCol_MapOfInteger& theMIF) ;
  
  Standard_EXPORT   static  Standard_Boolean CheckFacePaves(const Standard_Integer theN,const BOPCol_MapOfInteger& theMIFOn,const BOPCol_MapOfInteger& theMIFIn) ;
  
  Standard_EXPORT     Standard_Boolean IsExistingVertex(const gp_Pnt& theP,const Standard_Real theTol,const BOPCol_MapOfInteger& theMVOn) const;
  
  Standard_EXPORT     void PutPaveOnCurve(const BOPCol_MapOfInteger& theMVOn,const Standard_Real theTolR3D,BOPDS_Curve& theNC,const Standard_Integer nF1,const Standard_Integer nF2,const BOPCol_MapOfInteger& theMVEF) ;
  
  Standard_EXPORT     Standard_Boolean ExtendedTolerance(const Standard_Integer nV,const BOPCol_MapOfInteger& aMI,Standard_Real& aTolVExt) ;
  
  Standard_EXPORT     void PutBoundPaveOnCurve(const TopoDS_Face& theF1,const TopoDS_Face& theF2,const Standard_Real theTolR3D,BOPDS_Curve& theNC,BOPCol_MapOfInteger& theMVOnIn,BOPCol_MapOfInteger& theMVB) ;
  
  Standard_EXPORT     Standard_Boolean IsExistingPaveBlock(const Handle(BOPDS_PaveBlock)& thePB,const BOPDS_Curve& theNC,const Standard_Real theTolR3D,const BOPDS_MapOfPaveBlock& theMPB,Handle(BOPDS_PaveBlock)& thePBOut) ;
  
  Standard_EXPORT     Standard_Boolean IsExistingPaveBlock(const Handle(BOPDS_PaveBlock)& thePB,const BOPDS_Curve& theNC,const Standard_Real theTolR3D,const BOPCol_ListOfInteger& theLSE) ;
  
  Standard_EXPORT     Standard_Integer PostTreatFF(BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks& theMSCPB,BOPCol_DataMapOfShapeInteger& theMVI,BOPDS_DataMapOfPaveBlockListOfPaveBlock& theDMExEd,BOPCol_BaseAllocator& theAllocator) ;
  
  Standard_EXPORT     void FindPaveBlocks(const Standard_Integer theV,const Standard_Integer theF,BOPDS_ListOfPaveBlock& theLPB) ;
  
  Standard_EXPORT     void FillPaves(const Standard_Integer theV,const Standard_Integer theE,const Standard_Integer theF,const BOPDS_ListOfPaveBlock& theLPB,const Handle(BOPDS_PaveBlock)& thePB) ;
  
  Standard_EXPORT     void MakeSplitEdge(const Standard_Integer theV,const Standard_Integer theF) ;
  
  Standard_EXPORT     void GetEFPnts(const Standard_Integer nF1,const Standard_Integer nF2,IntSurf_ListOfPntOn2S& aListOfPnts) ;
  
  Standard_EXPORT     void PutEFPavesOnCurve(const Standard_Integer nF1,const Standard_Integer nF2,BOPDS_Curve& theNC,const BOPCol_MapOfInteger& theMVEF) ;
  
  Standard_EXPORT     void PutStickPavesOnCurve(const Standard_Integer nF1,const Standard_Integer nF2,BOPDS_Curve& theNC,const BOPCol_MapOfInteger& theMVStick) ;
  
  Standard_EXPORT     void GetStickVertices(const Standard_Integer nF1,const Standard_Integer nF2,BOPCol_MapOfInteger& theMVStick,BOPCol_MapOfInteger& theMVEFk) ;
  
  Standard_EXPORT     void GetFullFaceMap(const Standard_Integer nF,BOPCol_MapOfInteger& theMI) ;
  
  Standard_EXPORT     void RemoveUsedVertices(BOPDS_Curve& theNC,BOPCol_MapOfInteger& theMV) ;
  
  Standard_EXPORT     void PutPaveOnCurve(const Standard_Integer nV,const Standard_Real theTolR3D,const BOPDS_Curve& theNC,Handle(BOPDS_PaveBlock)& thePB) ;
  
  Standard_EXPORT     void ProcessExistingPaveBlocks(const Standard_Integer theInt,const BOPDS_MapOfPaveBlock& theMPBOnIn,BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks& theMSCPB,BOPCol_DataMapOfShapeInteger& theMVI,const BOPCol_MapOfInteger& theMVB,BOPDS_MapOfPaveBlock& theMPB) ;
  
  Standard_EXPORT     void UpdateExistingPaveBlocks(const Handle(BOPDS_PaveBlock)& thePB,BOPDS_ListOfPaveBlock& theLPB,const Standard_Integer nF1,const Standard_Integer nF2) ;
  
  Standard_EXPORT     void TreatNewVertices(const BOPCol_IndexedDataMapOfShapeInteger& theMVI,BOPCol_IndexedDataMapOfShapeListOfShape& theImages) ;
  
//! Put paves on the curve <aBC> in case when <aBC> <br>
//! is closed 3D-curve <br>
  Standard_EXPORT     void PutClosingPaveOnCurve(BOPDS_Curve& aNC) ;
  
  Standard_EXPORT     void PreparePostTreatFF(const Standard_Integer aInt,const Handle(BOPDS_PaveBlock)& aPB,BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks& aMSCPB,BOPCol_DataMapOfShapeInteger& aMVI,BOPDS_VectorOfCurve& aVC) ;
  
//! Refines the state On for the all faces having <br>
//! state information <br>
  Standard_EXPORT     void RefineFaceInfoOn() ;
  
  Standard_EXPORT     void UpdateFaceInfo(BOPDS_DataMapOfPaveBlockListOfPaveBlock& theDME) ;


BOPCol_ListOfShape myArguments;
BOPDS_PDS myDS;
BOPDS_PIterator myIterator;
Handle_BOPInt_Context myContext;
BOPAlgo_SectionAttribute mySectionAttribute;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
