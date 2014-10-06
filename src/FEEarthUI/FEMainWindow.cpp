#include <FEEarthUI/FEMainWindow.h>

using namespace FlexEarthUI_NS;

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