
#ifndef EMF_CPP_KDM_PLATFORM_THREAD__HPP
#define EMF_CPP_KDM_PLATFORM_THREAD__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/RuntimeResource.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class Thread :  public virtual ::kdm::platform::RuntimeResource
{
public:

    typedef Thread_ptr ptr_type;

    Thread();
    virtual ~Thread();




    /*PROTECTED REGION ID(kdm::platform::Thread public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class PlatformPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::platform::Thread protected) START*/
    /*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_THREAD__HPP
