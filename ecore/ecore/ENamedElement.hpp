
#ifndef EMF_CPP_ECORE_ENAMEDELEMENT__HPP
#define EMF_CPP_ECORE_ENAMEDELEMENT__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EModelElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::ENamedElement
class ENamedElement :  public virtual ::ecore::EModelElement
{
public:

	typedef ENamedElement_ptr ptr_type;
	
	virtual ~ENamedElement();

	typedef int name_t;

	
	void setName(name_t _name);
	name_t getName() const;

	
protected:
	ENamedElement();

	name_t m_name;

};

} // ecore


#endif // EMF_CPP_ECORE_ENAMEDELEMENT__HPP