
#ifndef EMF_CPP_KDM_KDM_EXTENDEDVALUE__HPP
#define EMF_CPP_KDM_KDM_EXTENDEDVALUE__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace kdm
{


// kdm::kdm::ExtendedValue
class ExtendedValue :  public virtual ::kdm::core::Element
{
public:

	typedef ExtendedValue_ptr ptr_type;
	
	virtual ~ExtendedValue();

	typedef kdm::kdm::TagDefinition_ptr tag_t;

	
	// TODO

	
protected:
	ExtendedValue();

	tag_t m_tag;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_EXTENDEDVALUE__HPP