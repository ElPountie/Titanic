#include "AbstractChartView.h"
#include "Data.h"
#include"Titanic.h"
#include<qbarset.h>

QWidget* PieChartView::getChartView(Data *d)
{
	this->mypie = new QPieSeries();
	int cpt_femme = d->countPerson(false);
	int cpt_homme = d->countPerson(true);
	this->mypie->append("Homme", cpt_homme);
	this->mypie->append("Femme", cpt_femme);

	this->mychart = new QChart();
	this->mychart->addSeries(this->mypie);
	this->mychart->setTitle("Title");

	this->myview = new QChartView(this->mychart);
	this->myview->setRenderHint(QPainter::Antialiasing);


	return this->myview;
}

/*QWidget* BarChartView::getChartView(Data* d) {
	QBarSet* set0 = new QBarSet("Mort");
	QBarSet* set1 = new QBarSet("Vivant");
	map<int, int> _map = d->countDead();
	for (int i = 0; i < 4; i++){

	}
}*/