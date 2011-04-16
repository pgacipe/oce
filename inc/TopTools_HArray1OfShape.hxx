// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_HArray1OfShape_HeaderFile
#define _TopTools_HArray1OfShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopTools_HArray1OfShape_HeaderFile
#include <Handle_TopTools_HArray1OfShape.hxx>
#endif

#ifndef _TopTools_Array1OfShape_HeaderFile
#include <TopTools_Array1OfShape.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TopoDS_Shape;
class TopTools_Array1OfShape;



class TopTools_HArray1OfShape : public MMgt_TShared {

public:

  
  Standard_EXPORT   TopTools_HArray1OfShape(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   TopTools_HArray1OfShape(const Standard_Integer Low,const Standard_Integer Up,const TopoDS_Shape& V);
  
  Standard_EXPORT     void Init(const TopoDS_Shape& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const TopoDS_Shape& Value) ;
  
       const TopoDS_Shape& Value(const Standard_Integer Index) const;
  
        TopoDS_Shape& ChangeValue(const Standard_Integer Index) ;
  
       const TopTools_Array1OfShape& Array1() const;
  
        TopTools_Array1OfShape& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TopTools_HArray1OfShape)

protected:




private: 


TopTools_Array1OfShape myArray;


};

#define ItemHArray1 TopoDS_Shape
#define ItemHArray1_hxx <TopoDS_Shape.hxx>
#define TheArray1 TopTools_Array1OfShape
#define TheArray1_hxx <TopTools_Array1OfShape.hxx>
#define TCollection_HArray1 TopTools_HArray1OfShape
#define TCollection_HArray1_hxx <TopTools_HArray1OfShape.hxx>
#define Handle_TCollection_HArray1 Handle_TopTools_HArray1OfShape
#define TCollection_HArray1_Type_() TopTools_HArray1OfShape_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif