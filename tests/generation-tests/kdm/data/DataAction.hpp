
#ifndef EMF_CPP_KDM_DATA_DATAACTION__HPP
#define EMF_CPP_KDM_DATA_DATAACTION__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class DataAction :  public virtual ::kdm::data::AbstractDataElement
{
public:

    typedef DataAction_ptr ptr_type;

    DataAction();
    virtual ~DataAction();

    typedef ::kdm::core::String kind_t;
    typedef std::set < kdm::action::ActionElement_ptr > implementation_t;
    typedef std::set < kdm::data::DataEvent_ptr > dataElement_t;

    void setKind(kind_t _kind);
    kind_t getKind() const;
    implementation_t getImplementation() const;
    void addImplementation(kdm::action::ActionElement_ptr implementation_);
    void addAllImplementation(const implementation_t& implementation_);
    dataElement_t getDataElement() const;
    void addDataElement(kdm::data::DataEvent_ptr dataElement_);
    void addAllDataElement(const dataElement_t& dataElement_);


    /*PROTECTED REGION ID(kdm::data::DataAction public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;

    kind_t m_kind;
    std::set < kdm::action::ActionElement_ptr > m_implementation;
    std::set < std::unique_ptr < kdm::data::DataEvent > > m_dataElement;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::DataAction protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATAACTION__HPP
