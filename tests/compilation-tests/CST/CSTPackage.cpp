#include "CSTPackage.hpp"
#include "CSTFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace CST;

CSTPackage::CSTPackage()
{
	m_eFactoryInstance = CSTFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const CSTPackage_ptr CSTPackage::_instance()
{
	static CSTPackage __instance;
	return &__instance;
}

e4c::tag_t CSTPackage::getTag_Tree() const
{
	return e4c::tag< Tree >::get();
}
 
e4c::tag_t CSTPackage::getTag_Element() const
{
	return e4c::tag< Element >::get();
}
 
e4c::tag_t CSTPackage::getTag_Node() const
{
	return e4c::tag< Node >::get();
}
 
e4c::tag_t CSTPackage::getTag_Leaf() const
{
	return e4c::tag< Leaf >::get();
}
 
e4c::tag_t CSTPackage::getTag_Element__kind() const
{
	return e4c::tag< Element__kind_tag >::get();
}

e4c::tag_t CSTPackage::getTag_Node__children() const
{
	return e4c::tag< Node__children_tag >::get();
}

e4c::tag_t CSTPackage::getTag_Leaf__value() const
{
	return e4c::tag< Leaf__value_tag >::get();
}

e4c::tag_t CSTPackage::getTag_Leaf__pos() const
{
	return e4c::tag< Leaf__pos_tag >::get();
}

e4c::tag_t CSTPackage::getTag_Leaf__line() const
{
	return e4c::tag< Leaf__line_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_CST()
{
	return ::CST::CSTPackage::_instance();
}
