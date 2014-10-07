
#include <osgEarthUtil/EarthManipulator>
#include <osgEarthUtil/ExampleResources>
#include <FEEarth/FEEarthViewer.h>
#include <FEEarth/FEEngine.h>

using namespace FEEarth_NS;
using namespace osgEarth;

#define LC "[FEEarthViewer]"

FEEarthViewer::FEEarthViewer()
:_viewer(0L), _mapNode(0L), _map(0L), _sceneRoot(0L)
{
	engine()->_earthViewer = this;
}


FEEarthViewer::~FEEarthViewer()
{
}

bool FEEarthViewer::init(const string& earthFile)
{
	if (!_viewer.valid())
		_viewer = new osgViewer::Viewer;
	_viewer->setCameraManipulator(new Util::EarthManipulator());

	// load an earth file
	osg::Node* node = osgDB::readNodeFile(earthFile);

	if (!node)
		return false;

	_mapNode = MapNode::get(node);
	if (!_mapNode.valid())
	{
		OE_WARN << LC << "Loaded scene graph does not contain a MapNode - aborting" << std::endl;
		return false;
	}

	// warn about not having an earth manip
	if (_viewer)
	{
		Util::EarthManipulator* manip = dynamic_cast<Util::EarthManipulator*>(_viewer->getCameraManipulator());

		if (manip == 0L)
		{
			OE_WARN << LC << "Helper used before installing an EarthManipulator" << std::endl;
		}
	}

	// a root node to hold everything:
	_sceneRoot = new osg::Group();

	 _map = _mapNode->getMap();
	 _sceneRoot->addChild(_mapNode);

	// configures the viewer with some stock goodies
	if (_viewer)
	{
		Util::MapNodeHelper().configureView(_viewer);
	}

	_viewer->setSceneData(_sceneRoot);
	_viewer->setThreadingModel(osgViewer::Viewer::SingleThreaded);
	
	return true;
}