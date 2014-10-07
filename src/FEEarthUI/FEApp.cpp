#include <FEEarth/FEEngine.h>
#include <FEEarthUI/FEApp.h>
#include <FEEarthUI/FEMainWindow.h>

using namespace FEEarthUI_NS;
FEApp::FEApp(int &argc, char **argv)
:QApplication(argc, argv)
{

}

FEApp::~FEApp()
{

}

bool FEApp::init(const std::string& datadir)
{
	//check licence

	//install translate

	//install style

	//initialize engine
	engine()->initilaize(datadir);	


	_mainWindow = new FEMainWindow();
	if (!_mainWindow->init())
		return false;

	_mainWindow->show();
	return true;
}
