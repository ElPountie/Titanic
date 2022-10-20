#pragma once
class AbstractChartView
{
public:
	virtual ~AbstractChartView() = default;
	virtual QWidget getChartView() = 0;
};

class PieChartView : public AbstractChartView{

};

class BarChartView : public AbstractChartView {

};

class MultiChartView : public AbstractChartView {

};
