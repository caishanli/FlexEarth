#ifndef TESTEARTHQT_H
#define TESTEARTHQT_H

#include <QtWidgets/QMainWindow>
#include "ui_testearthqt.h"

class TestEarthQt : public QMainWindow
{
	Q_OBJECT

public:
	TestEarthQt(QWidget *parent = 0);
	~TestEarthQt();

private:
	Ui::TestEarthQtClass ui;
};

#endif // TESTEARTHQT_H
