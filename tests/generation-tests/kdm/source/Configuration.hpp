
#ifndef EMF_CPP_KDM_SOURCE_CONFIGURATION__HPP
#define EMF_CPP_KDM_SOURCE_CONFIGURATION__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/InventoryItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


// kdm::source::Configuration
class Configuration :  public virtual ::kdm::source::InventoryItem
{
public:

	typedef Configuration_ptr ptr_type;
	
	Configuration();
	virtual ~Configuration();

	
	
	
	
protected:

	
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_CONFIGURATION__HPP