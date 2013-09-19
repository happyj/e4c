
#ifndef EMF_CPP_KDM_DATA_RESTRICTIONOF__HPP
#define EMF_CPP_KDM_DATA_RESTRICTIONOF__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::RestrictionOf
class RestrictionOf :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef RestrictionOf_ptr ptr_type;
	
	RestrictionOf();
	virtual ~RestrictionOf();

	typedef kdm::data::ComplexContentType_ptr to_t;
	typedef kdm::data::ComplexContentType_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_RESTRICTIONOF__HPP