
#ifndef EMF_CPP_KDM_PLATFORM_MESSAGINGRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_MESSAGINGRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::MessagingResource
class MessagingResource :  public virtual ::kdm::platform::ResourceType
{
public:

	typedef MessagingResource_ptr ptr_type;
	
	MessagingResource();
	virtual ~MessagingResource();

	
	
	
	
protected:

	
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_MESSAGINGRESOURCE__HPP