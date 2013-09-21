
#ifndef EMF_CPP_SVG_REFERENCEDFILE__HPP
#define EMF_CPP_SVG_REFERENCEDFILE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::ReferencedFile
class ReferencedFile
{
public:

	typedef ReferencedFile_ptr ptr_type;
	
	virtual ~ReferencedFile();

	typedef std::set < SVG::Image_ptr > referer_t;
	typedef ::PrimitiveTypes::String name_t;

	
	referer_t getReferer() const;
	void setName(name_t _name);
	name_t getName() const;


	std::set < SVG::Image_ptr > m_referer;
	name_t m_name;

		
protected:
	ReferencedFile();

};

} // SVG


#endif // EMF_CPP_SVG_REFERENCEDFILE__HPP
