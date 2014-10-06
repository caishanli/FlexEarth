#ifndef VIEWWIDGET_H
#define VIEWWIDGET_H

#include <QtCore/QTimer>

#include <osgQt/GraphicsWindowQt>
#include <osgViewer/ViewerBase>

#include <osgEarthQt/Common>
#include <osgEarth/Map>

#include <FEUtilQt/feutilqt_global.h>

namespace FEUtilQt_NS
{
	using namespace osgEarth;
	/**
	* Qt widget that encapsulates an osgViewer::View.
	*
	* There is nothing osgEarth-specific about this class; rather we
	* provide it for convenience. The use case is rendering the map node
	* (or other graph) in multiple Qt windows with a single CompositeViewer.
	*/
	class FEUTILQT_EXPORT ViewWidget : public osgQt::GLWidget
	{
		
	public:
		/**
		* Constructs a new ViewWidget, attaching an existing view.
		*
		* @param[in ] view   View to attach to this widget. The widget will install
		*             a new camera in the view. (NOTE: this widget does not take
		*             ownership of the View. You are still respsonsile for its
		*             destruction)
		* @param[in ] gcToShare Graphics context to share with this new view.
		*             Usually you should just leave this NULL
		*/
		ViewWidget(osgViewer::View* view, osg::GraphicsContext* gcToShare = 0L);

		/**
		* Access the underlying view.
		*/
		osgViewer::View* getView() { return _view.get(); }

		/** dtor */
		virtual ~ViewWidget();

	protected:

		void paintEvent(QPaintEvent*);

	private:

		void init(osg::GraphicsContext* gc);
		osg::GraphicsContext* createOrShareGC(osg::GraphicsContext* gc);

		osg::observer_ptr<osgViewer::View> _view;

	};
}

#endif // VIEWWIDGET_H
