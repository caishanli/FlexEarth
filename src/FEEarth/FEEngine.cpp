#include <FEEarth/FEEngine.h>
#include <FEEarth/FEEarthViewer.h>

using namespace FEEarth_NS;
FEEngine::FEEngine()
:_earthViewer(0)
{
}

FEEngine::~FEEngine()
{
	if (_earthViewer)
		delete _earthViewer;
}

void FEEngine::initilaize(const std::string& dataDir)
{
	_datadir = dataDir;
}
