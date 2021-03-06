
#ifndef EMF_CPP_CST_LEAF__HPP
#define EMF_CPP_CST_LEAF__HPP

#include <CST/fwd.hpp>
#include <CST/meta.hpp>
#include <CST/Element.hpp>

#include <e4c/mapping.hpp>

namespace CST
{


class Leaf :  public virtual ::CST::Element
{
public:

    typedef Leaf_ptr ptr_type;

    Leaf();
    virtual ~Leaf();

    typedef ::ecore::EString value_t;
    typedef ::ecore::EInt pos_t;
    typedef ::ecore::EInt line_t;

    void setValue(value_t _value);
    value_t getValue() const;
    void setPos(pos_t _pos);
    pos_t getPos() const;
    void setLine(line_t _line);
    line_t getLine() const;


    /*PROTECTED REGION ID(CST::Leaf public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CSTPackage;

    value_t m_value;
    pos_t m_pos;
    line_t m_line;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(CST::Leaf protected) START*/
    /*PROTECTED REGION END*/
};

} // CST


#endif // EMF_CPP_CST_LEAF__HPP
