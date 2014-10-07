#ifndef FEAPP_H
#define FEAPP_H

#include <QApplication>
#include <FEEarthUI/flexearthui_global.h>
namespace FEEarthUI_NS
{
	class FEMainWindow;
}

namespace FEEarthUI_NS
{

	class FEEARTHUI_EXPORT FEApp : public QApplication
	{
		Q_OBJECT

	public:
		FEApp(int &argc, char **argv);
		~FEApp();
		bool init(const std::string& dataDir);
	private:
		FEMainWindow* _mainWindow;
	};
}

#endif // FEAPP_H
