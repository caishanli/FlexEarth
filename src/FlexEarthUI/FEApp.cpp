#include <FlexEarthUI/FEApp.h>
#include <FlexEarthUI/FEMainWindow.h>

using namespace FLEXEARTHUI_NS;
FEApp::FEApp(int &argc, char **argv)
:QApplication(argc, argv)
{

}

FEApp::~FEApp()
{

}

void FEApp::init()
{
	_mainWindow = new FEMainWindow();
	_mainWindow->show();
}
