
#ifndef EMF_CPP_SVG_FONTSTYLE__HPP
#define EMF_CPP_SVG_FONTSTYLE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Attribute.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::FontStyle
class FontStyle :  public virtual ::SVG::Attribute
{
public:

	typedef FontStyle_ptr ptr_type;
	
	FontStyle();
	virtual ~FontStyle();

	typedef int italic_t;

	
	void setItalic(italic_t _italic);
	italic_t getItalic() const;

	
protected:

	italic_t m_italic;

};

} // SVG


#endif // EMF_CPP_SVG_FONTSTYLE__HPP