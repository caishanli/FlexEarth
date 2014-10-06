#ifndef FEMAINWINDOW_H
#define FEMAINWINDOW_H

#include <QMainWindow>
#include <FEEarthUI/GeneratedFiles/ui_FEMainWindow.h>
#include <FEEarthUI/flexearthui_global.h>

namespace FlexEarthUI_NS{}
using namespace FlexEarthUI_NS;//for moc

namespace FlexEarthUI_NS
{
	class FLEXEARTHUI_EXPORT FEMainWindow : public QMainWindow
	{
		Q_OBJECT

	public:
		FEMainWindow(QWidget *parent = 0);
		~FEMainWindow();		
		bool init();

	private:
		bool initUI();
		bool initEarth();
		bool loadPlugins();

	private:
		Ui::FEMainWindow ui;
	};
}

#endif // FEMAINWINDOW_H
