
#ifndef EMF_CPP_XPAND3_IDENTIFIER__HPP
#define EMF_CPP_XPAND3_IDENTIFIER__HPP

#include <xpand3/fwd.hpp>
#include <xpand3/meta.hpp>
#include <xpand3/SyntaxElement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{


class Identifier :  public virtual ::xpand3::SyntaxElement
{
public:

    typedef Identifier_ptr ptr_type;

    Identifier();
    virtual ~Identifier();

    typedef ::ecore::EString value_t;

    void setValue(value_t _value);
    value_t getValue() const;


    /*PROTECTED REGION ID(xpand3::Identifier public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class Xpand3Package;

    value_t m_value;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::Identifier protected) START*/
    /*PROTECTED REGION END*/
};

} // xpand3


#endif // EMF_CPP_XPAND3_IDENTIFIER__HPP
