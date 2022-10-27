#include<qwidget.h>
#include<QtCharts/qpieseries.h>
#include<QtCharts/qchartview.h>
#include"Data.h"

#pragma once
#include "qwidget.h"
class AbstractChartView
{
public:
	virtual ~AbstractChartView() = default;
	virtual QWidget* getChartView(Data* d) = 0;
};

class PieChartView : public AbstractChartView{
private:
	QPieSeries *mypie;
	QChart *mychart;
	QChartView* myview;
public:
	QWidget* getChartView(Data* d) override;
};

class BarChartView : public AbstractChartView {
public:
	QWidget* getChartView(Data* d) override;
};

class MultiChartView : public AbstractChartView {
public:
	QWidget* getChartView(Data* d) override;
};
