
#ifndef EMF_CPP_ECORE_EENUMLITERAL__HPP
#define EMF_CPP_ECORE_EENUMLITERAL__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ENamedElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::EEnumLiteral
class EEnumLiteral :  public virtual ::ecore::ENamedElement
{
public:

	typedef EEnumLiteral_ptr ptr_type;
	
	EEnumLiteral();
	virtual ~EEnumLiteral();

	typedef int value_t;
	typedef int instance_t;
	typedef int literal_t;
	typedef ecore::EEnum_ptr eEnum_t;

	
	void setValue(value_t _value);
	value_t getValue() const;
	void setInstance(instance_t _instance);
	instance_t getInstance() const;
	void setLiteral(literal_t _literal);
	literal_t getLiteral() const;
	// TODO

	
protected:

	value_t m_value;
	instance_t m_instance;
	literal_t m_literal;
	eEnum_t m_eEnum;

};

} // ecore


#endif // EMF_CPP_ECORE_EENUMLITERAL__HPP