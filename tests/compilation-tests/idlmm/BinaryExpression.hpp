#ifndef EMF_CPP_IDLMM_BINARYEXPRESSION__HPP
#define EMF_CPP_IDLMM_BINARYEXPRESSION__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Expression.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class BinaryExpression :  public virtual ::idlmm::Expression
{
public:

    typedef BinaryExpression_ptr ptr_type;

    BinaryExpression();
    virtual ~BinaryExpression();

    typedef idlmm::Expression_ptr left_t;
    typedef idlmm::Expression_ptr right_t;
    typedef ::ecore::EString operator_t;

    left_t getLeft() const;
    void setLeft(left_t left_);
    left_t releaseLeft();
    right_t getRight() const;
    void setRight(right_t right_);
    right_t releaseRight();
    void setOperator(operator_t _operator);
    operator_t getOperator() const;


    /*PROTECTED REGION ID(idlmm::BinaryExpression public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class IdlmmPackage;

    std::unique_ptr < idlmm::Expression > m_left;
    std::unique_ptr < idlmm::Expression > m_right;
    operator_t m_operator;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(idlmm::BinaryExpression protected) START*/
    /*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_BINARYEXPRESSION__HPP
