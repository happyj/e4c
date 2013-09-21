
#ifndef EMF_CPP_IDLMM_UNIONFIELD__HPP
#define EMF_CPP_IDLMM_UNIONFIELD__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Typed.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::UnionField
class UnionField :  public virtual ::idlmm::Typed
{
public:

	typedef UnionField_ptr ptr_type;
	
	UnionField();
	virtual ~UnionField();

	typedef ::ecore::EString identifier_t;
	typedef std::vector < idlmm::Expression_ptr > label_t;

	
	void setIdentifier(identifier_t _identifier);
	identifier_t getIdentifier() const;
	label_t getLabel() const;
	void addLabel(idlmm::Expression_ptr label_);

		
protected:

	identifier_t m_identifier;
	std::vector < std::unique_ptr < idlmm::Expression > > m_label;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_UNIONFIELD__HPP
