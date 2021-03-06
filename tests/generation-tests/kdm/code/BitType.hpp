
#ifndef EMF_CPP_KDM_CODE_BITTYPE__HPP
#define EMF_CPP_KDM_CODE_BITTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class BitType :  public virtual ::kdm::code::PrimitiveType
{
public:

    typedef BitType_ptr ptr_type;

    BitType();
    virtual ~BitType();




    /*PROTECTED REGION ID(kdm::code::BitType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::BitType protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_BITTYPE__HPP
