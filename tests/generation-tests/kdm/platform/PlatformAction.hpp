
#ifndef EMF_CPP_KDM_PLATFORM_PLATFORMACTION__HPP
#define EMF_CPP_KDM_PLATFORM_PLATFORMACTION__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::PlatformAction
class PlatformAction :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

	typedef PlatformAction_ptr ptr_type;
	
	PlatformAction();
	virtual ~PlatformAction();

	typedef ::kdm::core::String kind_t;
	typedef std::set < kdm::platform::PlatformEvent_ptr > platformElement_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	platformElement_t getPlatformElement() const;


	kind_t m_kind;
	std::set < std::unique_ptr < kdm::platform::PlatformEvent > > m_platformElement;

		
protected:

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PLATFORMACTION__HPP
