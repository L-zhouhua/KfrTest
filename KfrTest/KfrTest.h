#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_KfrTest.h"

class KfrTest : public QMainWindow
{
	Q_OBJECT

public:
	KfrTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::KfrTestClass ui;
	void setupPlot();
};
