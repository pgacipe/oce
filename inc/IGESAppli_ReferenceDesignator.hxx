// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_ReferenceDesignator_HeaderFile
#define _IGESAppli_ReferenceDesignator_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESAppli_ReferenceDesignator.hxx>

#include <Standard_Integer.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <IGESData_IGESEntity.hxx>
class TCollection_HAsciiString;


//! defines ReferenceDesignator, Type <406> Form <7>
//! in package IGESAppli
//! Used to attach a text string containing the value of
//! a component reference designator to an entity being
//! used to represent a component.
class IGESAppli_ReferenceDesignator : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESAppli_ReferenceDesignator();
  
  //! This method is used to set the fields of the class
  //! ReferenceDesignator
  //! - nbPropVal : Number of property values = 1
  //! - aText     : Reference designator text
  Standard_EXPORT   void Init (const Standard_Integer nbPropVal, const Handle(TCollection_HAsciiString)& aText) ;
  
  //! returns the number of property values
  //! is always 1
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns the Reference designator text
  Standard_EXPORT   Handle(TCollection_HAsciiString) RefDesignatorText()  const;




  DEFINE_STANDARD_RTTI(IGESAppli_ReferenceDesignator)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Handle(TCollection_HAsciiString) theRefDesigText;


};







#endif // _IGESAppli_ReferenceDesignator_HeaderFile
