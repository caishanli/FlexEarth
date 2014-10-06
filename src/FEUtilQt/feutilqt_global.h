#ifndef FEUTILQT_GLOBAL_H
#define FEUTILQT_GLOBAL_H

#include <QtCore/qglobal.h>
#include <osgEarth/Common>
#include <osgEarthAnnotation/AnnotationNode>
#include <osgViewer/Viewer>


#if defined(_MSC_VER)
#pragma warning( disable : 4244 )
#pragma warning( disable : 4251 )
#pragma warning( disable : 4267 )
#pragma warning( disable : 4275 )
#pragma warning( disable : 4290 )
#pragma warning( disable : 4786 )
#pragma warning( disable : 4305 )
#pragma warning( disable : 4996 )
#endif

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
#  if defined( FEUTILQT_LIB_STATIC )
#    define FEUTILQT_EXPORT
#  elif defined( FEUTILQT_LIB )
#    define FEUTILQT_EXPORT   __declspec(dllexport)
#  else
#    define FEUTILQT_EXPORT   __declspec(dllimport)
#  endif
#else
#  define FEUTILQT_EXPORT
#endif  

// set up define for whether member templates are supported by VisualStudio compilers.
#ifdef _MSC_VER
# if (_MSC_VER >= 1300)
#  define __STL_MEMBER_TEMPLATES
# endif
#endif

/* Define NULL pointer value */

#ifndef NULL
#ifdef  __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

#ifndef OSG_MIN_VERSION_REQUIRED
#define OSG_MIN_VERSION_REQUIRED(MAJOR, MINOR, PATCH) ((OPENSCENEGRAPH_MAJOR_VERSION>MAJOR) || (OPENSCENEGRAPH_MAJOR_VERSION==MAJOR && (OPENSCENEGRAPH_MINOR_VERSION>MINOR || (OPENSCENEGRAPH_MINOR_VERSION==MINOR && OPENSCENEGRAPH_PATCH_VERSION>=PATCH))))
#endif

#ifndef OSG_VERSION_LESS_THAN
#define OSG_VERSION_LESS_THAN(MAJOR, MINOR, PATCH) ((OPENSCENEGRAPH_MAJOR_VERSION<MAJOR) || (OPENSCENEGRAPH_MAJOR_VERSION==MAJOR && (OPENSCENEGRAPH_MINOR_VERSION<MINOR || (OPENSCENEGRAPH_MINOR_VERSION==MINOR && OPENSCENEGRAPH_PATCH_VERSION<PATCH))))
#endif

namespace FEUtilQt_NS
{
	typedef std::vector< osg::ref_ptr<osgEarth::Annotation::AnnotationNode> > AnnotationVector;
	typedef std::vector< osg::ref_ptr<osgViewer::View> > ViewVector;

}

#endif // FEUTILQT_GLOBAL_H
