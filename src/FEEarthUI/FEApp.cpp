#include <FEEarthUI/FEApp.h>
#include <FEEarthUI/FEMainWindow.h>

using namespace FlexEarthUI_NS;
FEApp::FEApp(int &argc, char **argv)
:QApplication(argc, argv)
{

}

FEApp::~FEApp()
{

}

bool FEApp::init()
{
	//check licence

	//install translate

	//install style


	_mainWindow = new FEMainWindow();
	if (!_mainWindow->init())
		return false;

	_mainWindow->show();
}
