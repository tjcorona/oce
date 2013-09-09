// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_PersonAndOrganizationItem_HeaderFile
#define _StepAP214_PersonAndOrganizationItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepAP214_ApprovalItem_HeaderFile
#include <StepAP214_ApprovalItem.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepAP214_AppliedOrganizationAssignment_HeaderFile
#include <Handle_StepAP214_AppliedOrganizationAssignment.hxx>
#endif
class Standard_Transient;
class StepAP214_AppliedOrganizationAssignment;



class StepAP214_PersonAndOrganizationItem  : public StepAP214_ApprovalItem {
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

  //! Returns a PersonAndOrganizationItem SelectType <br>
  Standard_EXPORT   StepAP214_PersonAndOrganizationItem();
  //! Recognizes a APersonAndOrganizationItem Kind Entity that is : <br>
//!        1 -> AppliedOrganizationAssignment <br>
//!        2 -> AssemblyComponentUsageSubstitute <br>
//!        3 -> DocumentFile <br>
//!        4 -> MaterialDesignation <br>
//!        5 -> MechanicalDesignGeometricPresentationRepresentation <br>
//!        6 -> PresentationArea <br>
//!        7 -> Product <br>
//!        8 -> ProductDefinition <br>
//!        9 -> ProductDefinitionFormation <br>
//!    	  10 -> ProductDefinitionRelationship <br>
//!        11 -> PropertyDefinition <br>
//!        12 -> ShapeRepresentation <br>
//!        13 -> SecurityClassification <br>
//!        0 else <br>
  Standard_EXPORT   virtual  Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a AppliedOrganizationAssignment (Null if another type) <br>
  Standard_EXPORT     Handle_StepAP214_AppliedOrganizationAssignment AppliedOrganizationAssignment() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
