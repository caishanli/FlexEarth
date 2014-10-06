#include <QtWidgets/QApplication>
#include <FEEarthUI/FEApp.h>
using namespace FlexEarthUI_NS;

int main(int argc, char *argv[])
{
	FEApp a(argc, argv);
	if (!a.init())
		a.quit();
	return a.exec();
}
