// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_UAttribute_HeaderFile
#define _TDataStd_UAttribute_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TDataStd_UAttribute.hxx>

#include <Standard_GUID.hxx>
#include <TDF_Attribute.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Handle_TDF_DataSet.hxx>
#include <Standard_OStream.hxx>
class TDF_Label;
class Standard_GUID;
class TDF_Attribute;
class TDF_RelocationTable;
class TDF_DataSet;



class TDataStd_UAttribute : public TDF_Attribute
{

public:

  
  //! api class methods
  //! =============
  //! Find, or create, a UAttribute attribute with <LocalID> as Local GUID.
  //! The UAttribute attribute is returned.
  //! UAttribute methods
  //! ============
  Standard_EXPORT static   Handle(TDataStd_UAttribute) Set (const TDF_Label& label, const Standard_GUID& LocalID) ;
  
  Standard_EXPORT TDataStd_UAttribute();
  
  Standard_EXPORT   void SetID (const Standard_GUID& LocalID) ;
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& with) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   void References (const Handle(TDF_DataSet)& DS)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;




  DEFINE_STANDARD_RTTI(TDataStd_UAttribute)

protected:




private: 


  Standard_GUID myID;


};







#endif // _TDataStd_UAttribute_HeaderFile
