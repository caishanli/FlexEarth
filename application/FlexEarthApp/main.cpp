#include <QtWidgets/QApplication>
#include <FlexEarthUI/FEApp.h>
using namespace FLEXEARTHUI_NS;

int main(int argc, char *argv[])
{
	FEApp a(argc, argv);
	a.init();
	return a.exec();
}
