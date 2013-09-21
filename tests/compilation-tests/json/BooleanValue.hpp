
#ifndef EMF_CPP_JSON_BOOLEANVALUE__HPP
#define EMF_CPP_JSON_BOOLEANVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

#include <e4c/mapping.hpp>

namespace json
{


// json::BooleanValue
class BooleanValue :  public virtual ::json::Value
{
public:

	typedef BooleanValue_ptr ptr_type;
	
	BooleanValue();
	virtual ~BooleanValue();

	typedef ::ecore::EBoolean value_t;

	
	void setValue(value_t _value);
	value_t getValue() const;


	value_t m_value;

		
protected:

};

} // json


#endif // EMF_CPP_JSON_BOOLEANVALUE__HPP
