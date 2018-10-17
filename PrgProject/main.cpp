#include "stdafx.h"
#include "prgmainwindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PrgMainWindow w;
	w.show();
	return a.exec();
}
