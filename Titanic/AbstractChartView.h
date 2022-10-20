#pragma once
#include "qwidget.h"
class AbstractChartView
{
public:
	virtual ~AbstractChartView() = default;
	virtual QWidget getChartView() = 0;
};

class PieChartView : public AbstractChartView{
public:
	QWidget getChartView();
};

class BarChartView : public AbstractChartView {
public:
	QWidget getChartView();
};

class MultiChartView : public AbstractChartView {
public:
	QWidget getChartView();
};
