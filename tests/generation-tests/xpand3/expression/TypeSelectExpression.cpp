
#include "TypeSelectExpression.hpp"
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

TypeSelectExpression::TypeSelectExpression() : 
	m_typeLiteral()
{
}

TypeSelectExpression::~TypeSelectExpression()
{
}

TypeSelectExpression::typeLiteral_t TypeSelectExpression::getTypeLiteral() const
{
	return e4c::returned(m_typeLiteral);
}



