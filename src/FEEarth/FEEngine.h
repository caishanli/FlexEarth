#ifndef __FEENGINE_H__
#define  __FEENGINE_H__
#include <string>
#include <osg/Referenced>
#include <osg/Group>
#include <FEEarth/flexearth_global.h>

namespace FEEarth_NS
{
	using namespace std;
	class FEEarthViewer;
	class FEEARTH_EXPORT FEEngine
		:public osg::Referenced
	{
	public:		
		~FEEngine();
		static FEEngine* getInstance()
		{
			static FEEngine engine;
			return &engine;			
		}
		void initilaize(const std::string& dataDir);
		inline const string& dataDir() const{ return _datadir; }		
		inline const FEEarthViewer* earthViewer() const { return _earthViewer; }

	private:
		FEEngine();
		friend class FEEarthViewer;

		string _datadir;
		FEEarthViewer* _earthViewer;

	};
}

inline FEEarth_NS::FEEngine* engine()
{
	return FEEarth_NS::FEEngine::getInstance();
}
#endif