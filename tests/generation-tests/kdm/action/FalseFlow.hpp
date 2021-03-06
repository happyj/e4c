
#ifndef EMF_CPP_KDM_ACTION_FALSEFLOW__HPP
#define EMF_CPP_KDM_ACTION_FALSEFLOW__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/ControlFlow.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


class FalseFlow :  public virtual ::kdm::action::ControlFlow
{
public:

    typedef FalseFlow_ptr ptr_type;

    FalseFlow();
    virtual ~FalseFlow();




    /*PROTECTED REGION ID(kdm::action::FalseFlow public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ActionPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::action::FalseFlow protected) START*/
    /*PROTECTED REGION END*/
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_FALSEFLOW__HPP
