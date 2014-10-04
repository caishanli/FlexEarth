#ifndef FEMAINWINDOW_H
#define FEMAINWINDOW_H

#include <QMainWindow>
#include <FlexEarthUI/GeneratedFiles/ui_FEMainWindow.h>
#include <FlexEarthUI/flexearthui_global.h>
namespace FLEXEARTHUI_NS{}
using namespace FLEXEARTHUI_NS;

namespace FLEXEARTHUI_NS
{
	class FLEXEARTHUI_EXPORT FEMainWindow : public QMainWindow
	{
		Q_OBJECT

	public:
		FEMainWindow(QWidget *parent = 0);
		~FEMainWindow();

	private:
		Ui::FEMainWindow ui;
	};
}

#endif // FEMAINWINDOW_H
