#include <QtWidgets/QApplication>
#include <QDir>
#include <FEEarthUI/FEApp.h>
using namespace FEEarthUI_NS;

void  getDataPath(QString& dataPath)
{
	QDir dir(QApplication::applicationDirPath());
	dir.cdUp();
	dir.cdUp();
	dir.cdUp();
	dataPath = dir.absolutePath() + "/FlexEarth/data/";
}

int main(int argc, char *argv[])
{
	FEApp a(argc, argv);
	QString dataPath;
	getDataPath(dataPath);
	if (!a.init( dataPath.toStdString() ))
		a.quit();
	return a.exec();
}
