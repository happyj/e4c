
#ifndef EMF_CPP_JSON_STRINGVALUE__HPP
#define EMF_CPP_JSON_STRINGVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

#include <e4c/mapping.hpp>

namespace json
{


// json::StringValue
class StringValue :  public virtual ::json::Value
{
public:

	typedef StringValue_ptr ptr_type;
	
	StringValue();
	virtual ~StringValue();

	typedef int value_t;

	
	void setValue(value_t _value);
	value_t getValue() const;

	
protected:

	value_t m_value;

};

} // json


#endif // EMF_CPP_JSON_STRINGVALUE__HPP