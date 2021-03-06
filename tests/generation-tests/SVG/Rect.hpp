
#ifndef EMF_CPP_SVG_RECT__HPP
#define EMF_CPP_SVG_RECT__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Shape.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Rect :  public virtual ::SVG::Shape
{
public:

    typedef Rect_ptr ptr_type;

    Rect();
    virtual ~Rect();

    typedef ::PrimitiveTypes::Double rx_t;
    typedef ::PrimitiveTypes::Double ry_t;

    void setRx(rx_t _rx);
    rx_t getRx() const;
    void setRy(ry_t _ry);
    ry_t getRy() const;


    /*PROTECTED REGION ID(SVG::Rect public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SVGPackage;

    rx_t m_rx;
    ry_t m_ry;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(SVG::Rect protected) START*/
    /*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_RECT__HPP
