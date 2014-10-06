#ifndef FEAPP_H
#define FEAPP_H

#include <QApplication>
#include <FEEarthUI/flexearthui_global.h>
namespace FlexEarthUI_NS
{
	class FEMainWindow;
}

namespace FlexEarthUI_NS
{

	class FLEXEARTHUI_EXPORT FEApp : public QApplication
	{
		Q_OBJECT

	public:
		FEApp(int &argc, char **argv);
		~FEApp();
		bool init();

	private:
		FEMainWindow* _mainWindow;
	};
}

#endif // FEAPP_H
