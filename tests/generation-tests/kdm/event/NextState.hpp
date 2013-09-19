
#ifndef EMF_CPP_KDM_EVENT_NEXTSTATE__HPP
#define EMF_CPP_KDM_EVENT_NEXTSTATE__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


// kdm::event::NextState
class NextState :  public virtual ::kdm::event::AbstractEventRelationship
{
public:

	typedef NextState_ptr ptr_type;
	
	NextState();
	virtual ~NextState();

	typedef kdm::event::State_ptr to_t;
	typedef kdm::event::Transition_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_NEXTSTATE__HPP