
#ifndef EMF_CPP_KDM_EVENT_PRODUCESEVENT__HPP
#define EMF_CPP_KDM_EVENT_PRODUCESEVENT__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


// kdm::event::ProducesEvent
class ProducesEvent :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ProducesEvent_ptr ptr_type;
	
	ProducesEvent();
	virtual ~ProducesEvent();

	typedef kdm::event::Event_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_PRODUCESEVENT__HPP