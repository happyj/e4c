#ifndef EMF_CPP_IDLMM_ENUMDEF__HPP
#define EMF_CPP_IDLMM_ENUMDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/TypedefDef.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class EnumDef :  public virtual ::idlmm::TypedefDef
{
public:

    typedef EnumDef_ptr ptr_type;

    EnumDef();
    virtual ~EnumDef();

    typedef std::vector < idlmm::EnumMember_ptr > members_t;

    members_t getMembers() const;
    void addMembers(idlmm::EnumMember_ptr members_);
    void addAllMembers(const members_t& members_);
    void removeMembers(idlmm::EnumMember_ptr members_);
    void clearMembers();


    /*PROTECTED REGION ID(idlmm::EnumDef public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class IdlmmPackage;

    std::vector < std::unique_ptr < idlmm::EnumMember > > m_members;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(idlmm::EnumDef protected) START*/
    /*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_ENUMDEF__HPP
