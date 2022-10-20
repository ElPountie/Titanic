#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Titanic.h"

class Titanic : public QMainWindow
{
    Q_OBJECT

public:
    Titanic(QWidget *parent = nullptr);
    ~Titanic();

private:
    Ui::TitanicClass ui;
};
