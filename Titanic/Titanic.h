#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Titanic.h"
#include "AbstractChartView.h"

class Titanic : public QMainWindow
{
    Q_OBJECT

public:
    Titanic(Data* data,QWidget *parent = nullptr);
    ~Titanic();

private:
    Ui::TitanicClass ui;
    Data* data;
private slots:
    void displayPieChart();
    void displayBarChart();
};
