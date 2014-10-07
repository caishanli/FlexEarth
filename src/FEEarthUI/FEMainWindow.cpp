#include <osgViewer/Viewer>
#include <FEEarth/FEEarthViewer.h>
#include <FEEarth/FEEngine.h>
#include <FEUtilQt/ViewerWidget.h>
#include <FEEarthUI/FEMainWindow.h>

using namespace FEEarthUI_NS;
using namespace FEEarth_NS;
using namespace FEUtilQt_NS;

FEMainWindow::FEMainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

FEMainWindow::~FEMainWindow()
{

}

bool FEMainWindow::init()
{
	if (!initUI())
		return false;
	
	if (!initEarth())
		return false;

	if (!loadPlugins())
		return false;

	return true;
}

bool FEMainWindow::initEarth()
{
	//0 earthViewer
	FEEarthViewer* earthViewer = new FEEarthViewer();
	bool b = earthViewer->init(engine()->dataDir() + "/project/default.earth");
	if (!b)
		return false;

	//1 ViewerWidget
	osgViewer::Viewer* viewer = earthViewer->viewer();
	ViewerWidget *viewerWidget = new ViewerWidget(viewer);
	setCentralWidget(viewerWidget);
	showMaximized();

	return true;
}

bool FEMainWindow::initUI()
{
	return true;
}

bool FEMainWindow::loadPlugins()
{
	return true;
}