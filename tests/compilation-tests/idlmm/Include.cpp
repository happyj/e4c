#include "Include.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/TranslationUnit.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::Include include) START*/
/*PROTECTED REGION END*/

Include::Include() :
    m_importURI(),
    m_translationUnit()
{
    /*PROTECTED REGION ID(Include constructor) START*/
    /*PROTECTED REGION END*/
}

Include::~Include()
{
    /*PROTECTED REGION ID(Include destructor) START*/
    /*PROTECTED REGION END*/
}

void Include::setImportURI(importURI_t _importURI)
{
    m_importURI = _importURI;;
}

Include::importURI_t Include::getImportURI() const
{
    return m_importURI;
}

Include::translationUnit_t Include::getTranslationUnit() const
{
    return e4c::returned(m_translationUnit);
}
void Include::setTranslationUnit(translationUnit_t translationUnit_)
{
    if (m_translationUnit == translationUnit_)
        return;
    m_translationUnit = translationUnit_;
}



/*PROTECTED REGION ID(idlmm::Include implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Include::eClassImpl() const
{
    return IdlmmPackage::_instance()->getInclude();
}

