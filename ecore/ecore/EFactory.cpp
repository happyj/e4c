
#include "EFactory.hpp"
#include <ecore/EPackage.hpp>

using namespace ecore;

EFactory::EFactory() : 
	m_ePackage()
{
}

EFactory::~EFactory()
{
}

EFactory::ePackage_t EFactory::getEPackage() const
{
	return e4c::returned(m_ePackage);
}

void EFactory::setEPackage(ePackage_t ePackage_)
{
;
	if (m_ePackage)
		m_ePackage->setEFactoryInstance(0);
	m_ePackage = ePackage_;
	if (m_ePackage && m_ePackage->getEFactoryInstance() != this)
		m_ePackage->setEFactoryInstance(this);
}




