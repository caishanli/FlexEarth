#ifndef FEAPP_H
#define FEAPP_H

#include <QApplication>
#include <FlexEarthUI/flexearthui_global.h>
namespace FLEXEARTHUI_NS
{
	class FEMainWindow;
}

namespace FLEXEARTHUI_NS
{

	class FLEXEARTHUI_EXPORT FEApp : public QApplication
	{
		Q_OBJECT

	public:
		FEApp(int &argc, char **argv);
		~FEApp();
		void init();

	private:
		FEMainWindow* _mainWindow;
	};
}

#endif // FEAPP_H
