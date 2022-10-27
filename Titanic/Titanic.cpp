#include "Titanic.h"

Titanic::Titanic(Data* data, QWidget *parent)
    : QMainWindow(parent)
{
    this->data = data;
    ui.setupUi(this);
    connect(ui.actionDiagramme1, &QAction::triggered, this, &Titanic::displayPieChart);
    connect(ui.actionDiagramme2, &QAction::triggered, this, &Titanic::displayBarChart);
}

Titanic::~Titanic()
{}

void Titanic::displayPieChart() {
    PieChartView pcv;
    this->setCentralWidget(pcv.getChartView(this->data));
}

void Titanic::displayBarChart() {
    BarChartView bcv;
    this->setCentralWidget(bcv.getChartView(this->data));
}

