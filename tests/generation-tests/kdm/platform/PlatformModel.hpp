
#ifndef EMF_CPP_KDM_PLATFORM_PLATFORMMODEL__HPP
#define EMF_CPP_KDM_PLATFORM_PLATFORMMODEL__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::PlatformModel
class PlatformModel :  public virtual ::kdm::kdm::KDMModel
{
public:

	typedef PlatformModel_ptr ptr_type;
	
	PlatformModel();
	virtual ~PlatformModel();

	typedef std::set < kdm::platform::AbstractPlatformElement_ptr > platformElement_t;

	
	platformElement_t getPlatformElement() const;


	std::set < std::unique_ptr < kdm::platform::AbstractPlatformElement > > m_platformElement;

		
protected:

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PLATFORMMODEL__HPP
