
#ifndef EMF_CPP_KDM_ACTION_ADDRESSES__HPP
#define EMF_CPP_KDM_ACTION_ADDRESSES__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


class Addresses :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

    typedef Addresses_ptr ptr_type;

    Addresses();
    virtual ~Addresses();

    typedef kdm::code::ComputationalObject_ptr to_t;
    typedef kdm::action::ActionElement_ptr from_t;

    to_t getTo() const;
    void setTo(to_t to_);
    from_t getFrom() const;
    void setFrom(from_t from_);


    /*PROTECTED REGION ID(kdm::action::Addresses public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ActionPackage;

    kdm::code::ComputationalObject_ptr m_to;
    kdm::action::ActionElement_ptr m_from;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::action::Addresses protected) START*/
    /*PROTECTED REGION END*/
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_ADDRESSES__HPP
