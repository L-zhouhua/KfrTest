#include "KfrTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	KfrTest w;
	w.show();
	return a.exec();
}
