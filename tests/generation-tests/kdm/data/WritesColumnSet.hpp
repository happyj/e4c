
#ifndef EMF_CPP_KDM_DATA_WRITESCOLUMNSET__HPP
#define EMF_CPP_KDM_DATA_WRITESCOLUMNSET__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::WritesColumnSet
class WritesColumnSet :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef WritesColumnSet_ptr ptr_type;
	
	WritesColumnSet();
	virtual ~WritesColumnSet();

	typedef kdm::data::ColumnSet_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_WRITESCOLUMNSET__HPP