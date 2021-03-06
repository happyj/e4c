
#include "Path.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Path include) START*/
/*PROTECTED REGION END*/

Path::Path() :
    m_pathLength(),
    m_d(),
    m_markerEnd(),
    m_markerStart()
{
    /*PROTECTED REGION ID(Path constructor) START*/
    /*PROTECTED REGION END*/
}

Path::~Path()
{
    /*PROTECTED REGION ID(Path destructor) START*/
    /*PROTECTED REGION END*/
}

void Path::setPathLength(pathLength_t _pathLength)
{
    m_pathLength = _pathLength;;
}

Path::pathLength_t Path::getPathLength() const
{
    return m_pathLength;
}

void Path::setD(d_t _d)
{
    m_d = _d;;
}

Path::d_t Path::getD() const
{
    return m_d;
}

void Path::setMarkerEnd(markerEnd_t _markerEnd)
{
    m_markerEnd = _markerEnd;;
}

Path::markerEnd_t Path::getMarkerEnd() const
{
    return m_markerEnd;
}

void Path::setMarkerStart(markerStart_t _markerStart)
{
    m_markerStart = _markerStart;;
}

Path::markerStart_t Path::getMarkerStart() const
{
    return m_markerStart;
}



/*PROTECTED REGION ID(SVG::Path implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Path::eClassImpl() const
{
    return SVGPackage::_instance()->getPath();
}

