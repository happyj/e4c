
#ifndef EMF_CPP_ECORE_EDATATYPE__HPP
#define EMF_CPP_ECORE_EDATATYPE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EClassifier.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::EDataType
class EDataType :  public virtual ::ecore::EClassifier
{
public:

	typedef EDataType_ptr ptr_type;
	
	EDataType();
	virtual ~EDataType();

	typedef int serializable_t;

	
	void setSerializable(serializable_t _serializable);
	serializable_t getSerializable() const;

	
protected:

	serializable_t m_serializable;

};

} // ecore


#endif // EMF_CPP_ECORE_EDATATYPE__HPP