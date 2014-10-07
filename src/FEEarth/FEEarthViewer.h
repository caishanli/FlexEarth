#ifndef __FEEARTHVIEWER_H__
#define  __FEEARTHVIEWER_H__
#include <string>

#include <osgViewer/Viewer>

#include <osgEarth/MapNode>
#include <osgEarth/Map>
#include <FEEarth/flexearth_global.h>

namespace FEEarth_NS
{
	using namespace std;
	class FEEARTH_EXPORT FEEarthViewer		
	{
	public:
		FEEarthViewer();
		~FEEarthViewer();

		bool init(const string& earthFile);
		inline osgViewer::Viewer* viewer() const { return _viewer.get();  }

	private:
		string _earthFile;
		osg::ref_ptr<osgViewer::Viewer> _viewer;
		osg::ref_ptr<osgEarth::MapNode> _mapNode;
		osg::ref_ptr<osgEarth::Map> _map;
		osg::ref_ptr<osg::Group> _sceneRoot;
	};
}

#endif