
#ifndef EMF_CPP_KDM_CODE_METHODUNIT__HPP
#define EMF_CPP_KDM_CODE_METHODUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/ControlElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::MethodUnit
class MethodUnit :  public virtual ::kdm::code::ControlElement
{
public:

	typedef MethodUnit_ptr ptr_type;
	
	MethodUnit();
	virtual ~MethodUnit();

	typedef int kind_t;
	typedef int export__t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	void setExport_(export__t _export_);
	export__t getExport_() const;

	
protected:

	kind_t m_kind;
	export__t m_export_;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_METHODUNIT__HPP