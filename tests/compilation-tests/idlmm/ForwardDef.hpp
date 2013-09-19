
#ifndef EMF_CPP_IDLMM_FORWARDDEF__HPP
#define EMF_CPP_IDLMM_FORWARDDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Contained.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::ForwardDef
class ForwardDef :  public virtual ::idlmm::Contained
{
public:

	typedef ForwardDef_ptr ptr_type;
	
	ForwardDef();
	virtual ~ForwardDef();

	typedef idlmm::InterfaceDef_ptr definition_t;

	
	// TODO

	
protected:

	definition_t m_definition;

};

} // idlmm


#endif // EMF_CPP_IDLMM_FORWARDDEF__HPP