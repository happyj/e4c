
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
	if (m_ePackage)
		m_ePackage->setEFactoryInstance(0);
	m_ePackage = ePackage_;
	if (m_ePackage && m_ePackage->getEFactoryInstance() != this)
		m_ePackage->setEFactoryInstance(this);
	
}




ecore::EObject_ptr EFactory::create(ecore::EClass_ptr eClass)
{
	/*PROTECTED REGION ID(ecore::EObject_ptr EFactory::create(ecore::EClass_ptr eClass)) START*/
	return ecore::EObject_ptr();
	/*PROTECTED REGION END*/
}
ecore::EJavaObject EFactory::createFromString(ecore::EDataType_ptr eDataType, ecore::EString literalValue)
{
	/*PROTECTED REGION ID(ecore::EJavaObject EFactory::createFromString(ecore::EDataType_ptr eDataType, ecore::EString literalValue)) START*/
	return ecore::EJavaObject();
	/*PROTECTED REGION END*/
}
ecore::EString EFactory::convertToString(ecore::EDataType_ptr eDataType, ecore::EJavaObject instanceValue)
{
	/*PROTECTED REGION ID(ecore::EString EFactory::convertToString(ecore::EDataType_ptr eDataType, ecore::EJavaObject instanceValue)) START*/
	return ecore::EString();
	/*PROTECTED REGION END*/
}

