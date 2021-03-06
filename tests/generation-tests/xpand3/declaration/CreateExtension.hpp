
#ifndef EMF_CPP_XPAND3_DECLARATION_CREATEEXTENSION__HPP
#define EMF_CPP_XPAND3_DECLARATION_CREATEEXTENSION__HPP

#include <xpand3/declaration/fwd.hpp>
#include <xpand3/declaration/meta.hpp>
#include <xpand3/declaration/Extension.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace declaration
{


class CreateExtension :  public virtual ::xpand3::declaration::Extension
{
public:

    typedef CreateExtension_ptr ptr_type;

    CreateExtension();
    virtual ~CreateExtension();

    typedef xpand3::DeclaredParameter_ptr toBeCreated_t;

    toBeCreated_t getToBeCreated() const;
    void setToBeCreated(toBeCreated_t toBeCreated_);


    /*PROTECTED REGION ID(xpand3::declaration::CreateExtension public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DeclarationPackage;

    xpand3::DeclaredParameter_ptr m_toBeCreated;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::declaration::CreateExtension protected) START*/
    /*PROTECTED REGION END*/
};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_CREATEEXTENSION__HPP
