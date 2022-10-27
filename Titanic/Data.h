#include "Passenger.h"
#include<qvector>
#include<fstream>
#include<qstring.h>
#include<map>


#pragma once
class Data
{
private:
	QVector <Passenger*> li_Passenger;
public:
	Data();
	~Data();
	QVector<Passenger*> getLiPassenger();
	int countVector();
	void readFile(const string file);
	int countPerson(bool gender);
	map<int, int> countDead();
};

