#ifndef EMF_CPP_KDM_CODE_PACKAGE_HPP
#define EMF_CPP_KDM_CODE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/code/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace kdm
{
namespace code
{


class CodePackage : public ::ecore::EPackage
{
public:
    static const CodePackage_ptr _instance();

 	::ecore::EClass_ptr getAbstractCodeElement() const;
 	::ecore::EClass_ptr getCodeItem() const;
 	::ecore::EClass_ptr getComputationalObject() const;
 	::ecore::EClass_ptr getControlElement() const;
 	::ecore::EClass_ptr getMethodUnit() const;
 	::ecore::EClass_ptr getModule() const;
 	::ecore::EClass_ptr getCodeAssembly() const;
 	::ecore::EClass_ptr getCallableUnit() const;
 	::ecore::EClass_ptr getDatatype() const;
 	::ecore::EClass_ptr getTemplateUnit() const;
 	::ecore::EClass_ptr getTemplateParameter() const;
 	::ecore::EClass_ptr getAbstractCodeRelationship() const;
 	::ecore::EClass_ptr getInstanceOf() const;
 	::ecore::EClass_ptr getCompilationUnit() const;
 	::ecore::EClass_ptr getCodeModel() const;
 	::ecore::EClass_ptr getDerivedType() const;
 	::ecore::EClass_ptr getArrayType() const;
 	::ecore::EClass_ptr getPrimitiveType() const;
 	::ecore::EClass_ptr getBooleanType() const;
 	::ecore::EClass_ptr getCharType() const;
 	::ecore::EClass_ptr getClassUnit() const;
 	::ecore::EClass_ptr getCompositeType() const;
 	::ecore::EClass_ptr getRecordType() const;
 	::ecore::EClass_ptr getEnumeratedType() const;
 	::ecore::EClass_ptr getExtends() const;
 	::ecore::EClass_ptr getScaledType() const;
 	::ecore::EClass_ptr getFloatType() const;
 	::ecore::EClass_ptr getHasType() const;
 	::ecore::EClass_ptr getImplementationOf() const;
 	::ecore::EClass_ptr getImplements() const;
 	::ecore::EClass_ptr getIntegerType() const;
 	::ecore::EClass_ptr getInterfaceUnit() const;
 	::ecore::EClass_ptr getPointerType() const;
 	::ecore::EClass_ptr getDefinedType() const;
 	::ecore::EClass_ptr getTypeUnit() const;
 	::ecore::EClass_ptr getRangeType() const;
 	::ecore::EClass_ptr getSignature() const;
 	::ecore::EClass_ptr getDataElement() const;
 	::ecore::EClass_ptr getStringType() const;
 	::ecore::EClass_ptr getChoiceType() const;
 	::ecore::EClass_ptr getNamespaceUnit() const;
 	::ecore::EClass_ptr getVisibleIn() const;
 	::ecore::EClass_ptr getCommentUnit() const;
 	::ecore::EClass_ptr getSharedUnit() const;
 	::ecore::EClass_ptr getDecimalType() const;
 	::ecore::EClass_ptr getDateType() const;
 	::ecore::EClass_ptr getTimeType() const;
 	::ecore::EEnum_ptr getMethodKind() const;
 	::ecore::EClass_ptr getVoidType() const;
 	::ecore::EClass_ptr getValueElement() const;
 	::ecore::EClass_ptr getValue() const;
 	::ecore::EClass_ptr getValueList() const;
 	::ecore::EClass_ptr getStorableUnit() const;
 	::ecore::EClass_ptr getMemberUnit() const;
 	::ecore::EClass_ptr getParameterUnit() const;
 	::ecore::EClass_ptr getItemUnit() const;
 	::ecore::EClass_ptr getIndexUnit() const;
 	::ecore::EClass_ptr getSynonymType() const;
 	::ecore::EClass_ptr getSequenceType() const;
 	::ecore::EClass_ptr getBagType() const;
 	::ecore::EClass_ptr getSetType() const;
 	::ecore::EClass_ptr getCodeElement() const;
 	::ecore::EClass_ptr getCodeRelationship() const;
 	::ecore::EEnum_ptr getParameterKind() const;
 	::ecore::EEnum_ptr getExportKind() const;
 	::ecore::EClass_ptr getLanguageUnit() const;
 	::ecore::EClass_ptr getOrdinalType() const;
 	::ecore::EClass_ptr getBitstringType() const;
 	::ecore::EClass_ptr getOctetType() const;
 	::ecore::EClass_ptr getOctetstringType() const;
 	::ecore::EClass_ptr getBitType() const;
 	::ecore::EEnum_ptr getStorableKind() const;
 	::ecore::EEnum_ptr getCallableKind() const;
 	::ecore::EClass_ptr getImports() const;
 	::ecore::EClass_ptr getPackage() const;
 	::ecore::EClass_ptr getParameterTo() const;
 	::ecore::EClass_ptr getTemplateType() const;
 	::ecore::EClass_ptr getPreprocessorDirective() const;
 	::ecore::EClass_ptr getMacroDirective() const;
 	::ecore::EClass_ptr getMacroUnit() const;
 	::ecore::EClass_ptr getConditionalDirective() const;
 	::ecore::EClass_ptr getIncludeDirective() const;
 	::ecore::EEnum_ptr getMacroKind() const;
 	::ecore::EClass_ptr getVariantTo() const;
 	::ecore::EClass_ptr getExpands() const;
 	::ecore::EClass_ptr getRedefines() const;
 	::ecore::EClass_ptr getGeneratedFrom() const;
 	::ecore::EClass_ptr getIncludes() const;
 	::ecore::EClass_ptr getHasValue() const;
 	
 	::ecore::EReference_ptr getAbstractCodeElement__source() const;
 	::ecore::EReference_ptr getAbstractCodeElement__comment() const;
 	::ecore::EReference_ptr getAbstractCodeElement__codeRelation() const;
 	::ecore::EReference_ptr getControlElement__type() const;
 	::ecore::EReference_ptr getControlElement__entryFlow() const;
 	::ecore::EReference_ptr getControlElement__codeElement() const;
 	::ecore::EAttribute_ptr getMethodUnit__kind() const;
 	::ecore::EAttribute_ptr getMethodUnit__export() const;
 	::ecore::EReference_ptr getModule__codeElement() const;
 	::ecore::EAttribute_ptr getCallableUnit__kind() const;
 	::ecore::EReference_ptr getTemplateUnit__codeElement() const;
 	::ecore::EReference_ptr getInstanceOf__to() const;
 	::ecore::EReference_ptr getInstanceOf__from() const;
 	::ecore::EReference_ptr getCodeModel__codeElement() const;
 	::ecore::EReference_ptr getDerivedType__itemUnit() const;
 	::ecore::EAttribute_ptr getArrayType__size() const;
 	::ecore::EReference_ptr getArrayType__indexUnit() const;
 	::ecore::EAttribute_ptr getClassUnit__isAbstract() const;
 	::ecore::EReference_ptr getClassUnit__codeElement() const;
 	::ecore::EReference_ptr getCompositeType__itemUnit() const;
 	::ecore::EReference_ptr getEnumeratedType__value() const;
 	::ecore::EReference_ptr getExtends__to() const;
 	::ecore::EReference_ptr getExtends__from() const;
 	::ecore::EReference_ptr getHasType__to() const;
 	::ecore::EReference_ptr getHasType__from() const;
 	::ecore::EReference_ptr getImplementationOf__to() const;
 	::ecore::EReference_ptr getImplementationOf__from() const;
 	::ecore::EReference_ptr getImplements__to() const;
 	::ecore::EReference_ptr getImplements__from() const;
 	::ecore::EReference_ptr getInterfaceUnit__codeElement() const;
 	::ecore::EReference_ptr getDefinedType__type() const;
 	::ecore::EReference_ptr getDefinedType__codeElement() const;
 	::ecore::EAttribute_ptr getRangeType__lower() const;
 	::ecore::EAttribute_ptr getRangeType__upper() const;
 	::ecore::EReference_ptr getSignature__parameterUnit() const;
 	::ecore::EReference_ptr getDataElement__type() const;
 	::ecore::EAttribute_ptr getDataElement__ext() const;
 	::ecore::EAttribute_ptr getDataElement__size() const;
 	::ecore::EReference_ptr getDataElement__codeElement() const;
 	::ecore::EReference_ptr getNamespaceUnit__groupedCode() const;
 	::ecore::EReference_ptr getVisibleIn__to() const;
 	::ecore::EReference_ptr getVisibleIn__from() const;
 	::ecore::EAttribute_ptr getCommentUnit__text() const;
 	::ecore::EReference_ptr getValueList__valueElement() const;
 	::ecore::EAttribute_ptr getStorableUnit__kind() const;
 	::ecore::EAttribute_ptr getMemberUnit__export() const;
 	::ecore::EAttribute_ptr getParameterUnit__kind() const;
 	::ecore::EAttribute_ptr getParameterUnit__pos() const;
 	::ecore::EAttribute_ptr getSequenceType__size() const;
 	::ecore::EAttribute_ptr getBagType__size() const;
 	::ecore::EAttribute_ptr getSetType__size() const;
 	::ecore::EReference_ptr getCodeRelationship__to() const;
 	::ecore::EReference_ptr getCodeRelationship__from() const;
 	::ecore::EReference_ptr getImports__to() const;
 	::ecore::EReference_ptr getImports__from() const;
 	::ecore::EReference_ptr getParameterTo__to() const;
 	::ecore::EReference_ptr getParameterTo__from() const;
 	::ecore::EReference_ptr getPreprocessorDirective__codeElement() const;
 	::ecore::EAttribute_ptr getMacroUnit__kind() const;
 	::ecore::EReference_ptr getVariantTo__to() const;
 	::ecore::EReference_ptr getVariantTo__from() const;
 	::ecore::EReference_ptr getExpands__to() const;
 	::ecore::EReference_ptr getExpands__from() const;
 	::ecore::EReference_ptr getRedefines__to() const;
 	::ecore::EReference_ptr getRedefines__from() const;
 	::ecore::EReference_ptr getGeneratedFrom__to() const;
 	::ecore::EReference_ptr getGeneratedFrom__from() const;
 	::ecore::EReference_ptr getIncludes__to() const;
 	::ecore::EReference_ptr getIncludes__from() const;
 	::ecore::EReference_ptr getHasValue__to() const;
 	::ecore::EReference_ptr getHasValue__from() const;

 	e4c::tag_t getTag_AbstractCodeElement() const;
 	e4c::tag_t getTag_CodeItem() const;
 	e4c::tag_t getTag_ComputationalObject() const;
 	e4c::tag_t getTag_ControlElement() const;
 	e4c::tag_t getTag_MethodUnit() const;
 	e4c::tag_t getTag_Module() const;
 	e4c::tag_t getTag_CodeAssembly() const;
 	e4c::tag_t getTag_CallableUnit() const;
 	e4c::tag_t getTag_Datatype() const;
 	e4c::tag_t getTag_TemplateUnit() const;
 	e4c::tag_t getTag_TemplateParameter() const;
 	e4c::tag_t getTag_AbstractCodeRelationship() const;
 	e4c::tag_t getTag_InstanceOf() const;
 	e4c::tag_t getTag_CompilationUnit() const;
 	e4c::tag_t getTag_CodeModel() const;
 	e4c::tag_t getTag_DerivedType() const;
 	e4c::tag_t getTag_ArrayType() const;
 	e4c::tag_t getTag_PrimitiveType() const;
 	e4c::tag_t getTag_BooleanType() const;
 	e4c::tag_t getTag_CharType() const;
 	e4c::tag_t getTag_ClassUnit() const;
 	e4c::tag_t getTag_CompositeType() const;
 	e4c::tag_t getTag_RecordType() const;
 	e4c::tag_t getTag_EnumeratedType() const;
 	e4c::tag_t getTag_Extends() const;
 	e4c::tag_t getTag_ScaledType() const;
 	e4c::tag_t getTag_FloatType() const;
 	e4c::tag_t getTag_HasType() const;
 	e4c::tag_t getTag_ImplementationOf() const;
 	e4c::tag_t getTag_Implements() const;
 	e4c::tag_t getTag_IntegerType() const;
 	e4c::tag_t getTag_InterfaceUnit() const;
 	e4c::tag_t getTag_PointerType() const;
 	e4c::tag_t getTag_DefinedType() const;
 	e4c::tag_t getTag_TypeUnit() const;
 	e4c::tag_t getTag_RangeType() const;
 	e4c::tag_t getTag_Signature() const;
 	e4c::tag_t getTag_DataElement() const;
 	e4c::tag_t getTag_StringType() const;
 	e4c::tag_t getTag_ChoiceType() const;
 	e4c::tag_t getTag_NamespaceUnit() const;
 	e4c::tag_t getTag_VisibleIn() const;
 	e4c::tag_t getTag_CommentUnit() const;
 	e4c::tag_t getTag_SharedUnit() const;
 	e4c::tag_t getTag_DecimalType() const;
 	e4c::tag_t getTag_DateType() const;
 	e4c::tag_t getTag_TimeType() const;
 	e4c::tag_t getTag_MethodKind() const;
 	e4c::tag_t getTag_VoidType() const;
 	e4c::tag_t getTag_ValueElement() const;
 	e4c::tag_t getTag_Value() const;
 	e4c::tag_t getTag_ValueList() const;
 	e4c::tag_t getTag_StorableUnit() const;
 	e4c::tag_t getTag_MemberUnit() const;
 	e4c::tag_t getTag_ParameterUnit() const;
 	e4c::tag_t getTag_ItemUnit() const;
 	e4c::tag_t getTag_IndexUnit() const;
 	e4c::tag_t getTag_SynonymType() const;
 	e4c::tag_t getTag_SequenceType() const;
 	e4c::tag_t getTag_BagType() const;
 	e4c::tag_t getTag_SetType() const;
 	e4c::tag_t getTag_CodeElement() const;
 	e4c::tag_t getTag_CodeRelationship() const;
 	e4c::tag_t getTag_ParameterKind() const;
 	e4c::tag_t getTag_ExportKind() const;
 	e4c::tag_t getTag_LanguageUnit() const;
 	e4c::tag_t getTag_OrdinalType() const;
 	e4c::tag_t getTag_BitstringType() const;
 	e4c::tag_t getTag_OctetType() const;
 	e4c::tag_t getTag_OctetstringType() const;
 	e4c::tag_t getTag_BitType() const;
 	e4c::tag_t getTag_StorableKind() const;
 	e4c::tag_t getTag_CallableKind() const;
 	e4c::tag_t getTag_Imports() const;
 	e4c::tag_t getTag_Package() const;
 	e4c::tag_t getTag_ParameterTo() const;
 	e4c::tag_t getTag_TemplateType() const;
 	e4c::tag_t getTag_PreprocessorDirective() const;
 	e4c::tag_t getTag_MacroDirective() const;
 	e4c::tag_t getTag_MacroUnit() const;
 	e4c::tag_t getTag_ConditionalDirective() const;
 	e4c::tag_t getTag_IncludeDirective() const;
 	e4c::tag_t getTag_MacroKind() const;
 	e4c::tag_t getTag_VariantTo() const;
 	e4c::tag_t getTag_Expands() const;
 	e4c::tag_t getTag_Redefines() const;
 	e4c::tag_t getTag_GeneratedFrom() const;
 	e4c::tag_t getTag_Includes() const;
 	e4c::tag_t getTag_HasValue() const;
 
 	e4c::tag_t getTag_AbstractCodeElement__source() const;
 	e4c::tag_t getTag_AbstractCodeElement__comment() const;
 	e4c::tag_t getTag_AbstractCodeElement__codeRelation() const;
 	e4c::tag_t getTag_ControlElement__type() const;
 	e4c::tag_t getTag_ControlElement__entryFlow() const;
 	e4c::tag_t getTag_ControlElement__codeElement() const;
 	e4c::tag_t getTag_MethodUnit__kind() const;
 	e4c::tag_t getTag_MethodUnit__export() const;
 	e4c::tag_t getTag_Module__codeElement() const;
 	e4c::tag_t getTag_CallableUnit__kind() const;
 	e4c::tag_t getTag_TemplateUnit__codeElement() const;
 	e4c::tag_t getTag_InstanceOf__to() const;
 	e4c::tag_t getTag_InstanceOf__from() const;
 	e4c::tag_t getTag_CodeModel__codeElement() const;
 	e4c::tag_t getTag_DerivedType__itemUnit() const;
 	e4c::tag_t getTag_ArrayType__size() const;
 	e4c::tag_t getTag_ArrayType__indexUnit() const;
 	e4c::tag_t getTag_ClassUnit__isAbstract() const;
 	e4c::tag_t getTag_ClassUnit__codeElement() const;
 	e4c::tag_t getTag_CompositeType__itemUnit() const;
 	e4c::tag_t getTag_EnumeratedType__value() const;
 	e4c::tag_t getTag_Extends__to() const;
 	e4c::tag_t getTag_Extends__from() const;
 	e4c::tag_t getTag_HasType__to() const;
 	e4c::tag_t getTag_HasType__from() const;
 	e4c::tag_t getTag_ImplementationOf__to() const;
 	e4c::tag_t getTag_ImplementationOf__from() const;
 	e4c::tag_t getTag_Implements__to() const;
 	e4c::tag_t getTag_Implements__from() const;
 	e4c::tag_t getTag_InterfaceUnit__codeElement() const;
 	e4c::tag_t getTag_DefinedType__type() const;
 	e4c::tag_t getTag_DefinedType__codeElement() const;
 	e4c::tag_t getTag_RangeType__lower() const;
 	e4c::tag_t getTag_RangeType__upper() const;
 	e4c::tag_t getTag_Signature__parameterUnit() const;
 	e4c::tag_t getTag_DataElement__type() const;
 	e4c::tag_t getTag_DataElement__ext() const;
 	e4c::tag_t getTag_DataElement__size() const;
 	e4c::tag_t getTag_DataElement__codeElement() const;
 	e4c::tag_t getTag_NamespaceUnit__groupedCode() const;
 	e4c::tag_t getTag_VisibleIn__to() const;
 	e4c::tag_t getTag_VisibleIn__from() const;
 	e4c::tag_t getTag_CommentUnit__text() const;
 	e4c::tag_t getTag_ValueList__valueElement() const;
 	e4c::tag_t getTag_StorableUnit__kind() const;
 	e4c::tag_t getTag_MemberUnit__export() const;
 	e4c::tag_t getTag_ParameterUnit__kind() const;
 	e4c::tag_t getTag_ParameterUnit__pos() const;
 	e4c::tag_t getTag_SequenceType__size() const;
 	e4c::tag_t getTag_BagType__size() const;
 	e4c::tag_t getTag_SetType__size() const;
 	e4c::tag_t getTag_CodeRelationship__to() const;
 	e4c::tag_t getTag_CodeRelationship__from() const;
 	e4c::tag_t getTag_Imports__to() const;
 	e4c::tag_t getTag_Imports__from() const;
 	e4c::tag_t getTag_ParameterTo__to() const;
 	e4c::tag_t getTag_ParameterTo__from() const;
 	e4c::tag_t getTag_PreprocessorDirective__codeElement() const;
 	e4c::tag_t getTag_MacroUnit__kind() const;
 	e4c::tag_t getTag_VariantTo__to() const;
 	e4c::tag_t getTag_VariantTo__from() const;
 	e4c::tag_t getTag_Expands__to() const;
 	e4c::tag_t getTag_Expands__from() const;
 	e4c::tag_t getTag_Redefines__to() const;
 	e4c::tag_t getTag_Redefines__from() const;
 	e4c::tag_t getTag_GeneratedFrom__to() const;
 	e4c::tag_t getTag_GeneratedFrom__from() const;
 	e4c::tag_t getTag_Includes__to() const;
 	e4c::tag_t getTag_Includes__from() const;
 	e4c::tag_t getTag_HasValue__to() const;
 	e4c::tag_t getTag_HasValue__from() const;

protected:
    CodePackage();
    
 	::ecore::EClass_ptr m_AbstractCodeElement;
 	::ecore::EClass_ptr m_CodeItem;
 	::ecore::EClass_ptr m_ComputationalObject;
 	::ecore::EClass_ptr m_ControlElement;
 	::ecore::EClass_ptr m_MethodUnit;
 	::ecore::EClass_ptr m_Module;
 	::ecore::EClass_ptr m_CodeAssembly;
 	::ecore::EClass_ptr m_CallableUnit;
 	::ecore::EClass_ptr m_Datatype;
 	::ecore::EClass_ptr m_TemplateUnit;
 	::ecore::EClass_ptr m_TemplateParameter;
 	::ecore::EClass_ptr m_AbstractCodeRelationship;
 	::ecore::EClass_ptr m_InstanceOf;
 	::ecore::EClass_ptr m_CompilationUnit;
 	::ecore::EClass_ptr m_CodeModel;
 	::ecore::EClass_ptr m_DerivedType;
 	::ecore::EClass_ptr m_ArrayType;
 	::ecore::EClass_ptr m_PrimitiveType;
 	::ecore::EClass_ptr m_BooleanType;
 	::ecore::EClass_ptr m_CharType;
 	::ecore::EClass_ptr m_ClassUnit;
 	::ecore::EClass_ptr m_CompositeType;
 	::ecore::EClass_ptr m_RecordType;
 	::ecore::EClass_ptr m_EnumeratedType;
 	::ecore::EClass_ptr m_Extends;
 	::ecore::EClass_ptr m_ScaledType;
 	::ecore::EClass_ptr m_FloatType;
 	::ecore::EClass_ptr m_HasType;
 	::ecore::EClass_ptr m_ImplementationOf;
 	::ecore::EClass_ptr m_Implements;
 	::ecore::EClass_ptr m_IntegerType;
 	::ecore::EClass_ptr m_InterfaceUnit;
 	::ecore::EClass_ptr m_PointerType;
 	::ecore::EClass_ptr m_DefinedType;
 	::ecore::EClass_ptr m_TypeUnit;
 	::ecore::EClass_ptr m_RangeType;
 	::ecore::EClass_ptr m_Signature;
 	::ecore::EClass_ptr m_DataElement;
 	::ecore::EClass_ptr m_StringType;
 	::ecore::EClass_ptr m_ChoiceType;
 	::ecore::EClass_ptr m_NamespaceUnit;
 	::ecore::EClass_ptr m_VisibleIn;
 	::ecore::EClass_ptr m_CommentUnit;
 	::ecore::EClass_ptr m_SharedUnit;
 	::ecore::EClass_ptr m_DecimalType;
 	::ecore::EClass_ptr m_DateType;
 	::ecore::EClass_ptr m_TimeType;
 	::ecore::EEnum_ptr m_MethodKind;
 	::ecore::EClass_ptr m_VoidType;
 	::ecore::EClass_ptr m_ValueElement;
 	::ecore::EClass_ptr m_Value;
 	::ecore::EClass_ptr m_ValueList;
 	::ecore::EClass_ptr m_StorableUnit;
 	::ecore::EClass_ptr m_MemberUnit;
 	::ecore::EClass_ptr m_ParameterUnit;
 	::ecore::EClass_ptr m_ItemUnit;
 	::ecore::EClass_ptr m_IndexUnit;
 	::ecore::EClass_ptr m_SynonymType;
 	::ecore::EClass_ptr m_SequenceType;
 	::ecore::EClass_ptr m_BagType;
 	::ecore::EClass_ptr m_SetType;
 	::ecore::EClass_ptr m_CodeElement;
 	::ecore::EClass_ptr m_CodeRelationship;
 	::ecore::EEnum_ptr m_ParameterKind;
 	::ecore::EEnum_ptr m_ExportKind;
 	::ecore::EClass_ptr m_LanguageUnit;
 	::ecore::EClass_ptr m_OrdinalType;
 	::ecore::EClass_ptr m_BitstringType;
 	::ecore::EClass_ptr m_OctetType;
 	::ecore::EClass_ptr m_OctetstringType;
 	::ecore::EClass_ptr m_BitType;
 	::ecore::EEnum_ptr m_StorableKind;
 	::ecore::EEnum_ptr m_CallableKind;
 	::ecore::EClass_ptr m_Imports;
 	::ecore::EClass_ptr m_Package;
 	::ecore::EClass_ptr m_ParameterTo;
 	::ecore::EClass_ptr m_TemplateType;
 	::ecore::EClass_ptr m_PreprocessorDirective;
 	::ecore::EClass_ptr m_MacroDirective;
 	::ecore::EClass_ptr m_MacroUnit;
 	::ecore::EClass_ptr m_ConditionalDirective;
 	::ecore::EClass_ptr m_IncludeDirective;
 	::ecore::EEnum_ptr m_MacroKind;
 	::ecore::EClass_ptr m_VariantTo;
 	::ecore::EClass_ptr m_Expands;
 	::ecore::EClass_ptr m_Redefines;
 	::ecore::EClass_ptr m_GeneratedFrom;
 	::ecore::EClass_ptr m_Includes;
 	::ecore::EClass_ptr m_HasValue;
 	::ecore::EReference_ptr m_AbstractCodeElement__source;
 	::ecore::EReference_ptr m_AbstractCodeElement__comment;
 	::ecore::EReference_ptr m_AbstractCodeElement__codeRelation;
 	::ecore::EReference_ptr m_ControlElement__type;
 	::ecore::EReference_ptr m_ControlElement__entryFlow;
 	::ecore::EReference_ptr m_ControlElement__codeElement;
 	::ecore::EAttribute_ptr m_MethodUnit__kind;
 	::ecore::EAttribute_ptr m_MethodUnit__export;
 	::ecore::EReference_ptr m_Module__codeElement;
 	::ecore::EAttribute_ptr m_CallableUnit__kind;
 	::ecore::EReference_ptr m_TemplateUnit__codeElement;
 	::ecore::EReference_ptr m_InstanceOf__to;
 	::ecore::EReference_ptr m_InstanceOf__from;
 	::ecore::EReference_ptr m_CodeModel__codeElement;
 	::ecore::EReference_ptr m_DerivedType__itemUnit;
 	::ecore::EAttribute_ptr m_ArrayType__size;
 	::ecore::EReference_ptr m_ArrayType__indexUnit;
 	::ecore::EAttribute_ptr m_ClassUnit__isAbstract;
 	::ecore::EReference_ptr m_ClassUnit__codeElement;
 	::ecore::EReference_ptr m_CompositeType__itemUnit;
 	::ecore::EReference_ptr m_EnumeratedType__value;
 	::ecore::EReference_ptr m_Extends__to;
 	::ecore::EReference_ptr m_Extends__from;
 	::ecore::EReference_ptr m_HasType__to;
 	::ecore::EReference_ptr m_HasType__from;
 	::ecore::EReference_ptr m_ImplementationOf__to;
 	::ecore::EReference_ptr m_ImplementationOf__from;
 	::ecore::EReference_ptr m_Implements__to;
 	::ecore::EReference_ptr m_Implements__from;
 	::ecore::EReference_ptr m_InterfaceUnit__codeElement;
 	::ecore::EReference_ptr m_DefinedType__type;
 	::ecore::EReference_ptr m_DefinedType__codeElement;
 	::ecore::EAttribute_ptr m_RangeType__lower;
 	::ecore::EAttribute_ptr m_RangeType__upper;
 	::ecore::EReference_ptr m_Signature__parameterUnit;
 	::ecore::EReference_ptr m_DataElement__type;
 	::ecore::EAttribute_ptr m_DataElement__ext;
 	::ecore::EAttribute_ptr m_DataElement__size;
 	::ecore::EReference_ptr m_DataElement__codeElement;
 	::ecore::EReference_ptr m_NamespaceUnit__groupedCode;
 	::ecore::EReference_ptr m_VisibleIn__to;
 	::ecore::EReference_ptr m_VisibleIn__from;
 	::ecore::EAttribute_ptr m_CommentUnit__text;
 	::ecore::EReference_ptr m_ValueList__valueElement;
 	::ecore::EAttribute_ptr m_StorableUnit__kind;
 	::ecore::EAttribute_ptr m_MemberUnit__export;
 	::ecore::EAttribute_ptr m_ParameterUnit__kind;
 	::ecore::EAttribute_ptr m_ParameterUnit__pos;
 	::ecore::EAttribute_ptr m_SequenceType__size;
 	::ecore::EAttribute_ptr m_BagType__size;
 	::ecore::EAttribute_ptr m_SetType__size;
 	::ecore::EReference_ptr m_CodeRelationship__to;
 	::ecore::EReference_ptr m_CodeRelationship__from;
 	::ecore::EReference_ptr m_Imports__to;
 	::ecore::EReference_ptr m_Imports__from;
 	::ecore::EReference_ptr m_ParameterTo__to;
 	::ecore::EReference_ptr m_ParameterTo__from;
 	::ecore::EReference_ptr m_PreprocessorDirective__codeElement;
 	::ecore::EAttribute_ptr m_MacroUnit__kind;
 	::ecore::EReference_ptr m_VariantTo__to;
 	::ecore::EReference_ptr m_VariantTo__from;
 	::ecore::EReference_ptr m_Expands__to;
 	::ecore::EReference_ptr m_Expands__from;
 	::ecore::EReference_ptr m_Redefines__to;
 	::ecore::EReference_ptr m_Redefines__from;
 	::ecore::EReference_ptr m_GeneratedFrom__to;
 	::ecore::EReference_ptr m_GeneratedFrom__from;
 	::ecore::EReference_ptr m_Includes__to;
 	::ecore::EReference_ptr m_Includes__from;
 	::ecore::EReference_ptr m_HasValue__to;
 	::ecore::EReference_ptr m_HasValue__from;
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_PACKAGE_HPP
