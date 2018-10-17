#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_prgmainwindow.h"

class PrgMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	PrgMainWindow(QWidget *parent = Q_NULLPTR);

private:
	Ui::PrgMainWindowClass ui;
};
