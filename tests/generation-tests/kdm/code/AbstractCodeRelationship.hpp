
#ifndef EMF_CPP_KDM_CODE_ABSTRACTCODERELATIONSHIP__HPP
#define EMF_CPP_KDM_CODE_ABSTRACTCODERELATIONSHIP__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::AbstractCodeRelationship
class AbstractCodeRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractCodeRelationship_ptr ptr_type;
	
	virtual ~AbstractCodeRelationship();

	
	
	

	
		
protected:
	AbstractCodeRelationship();

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_ABSTRACTCODERELATIONSHIP__HPP
