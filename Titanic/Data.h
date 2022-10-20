#include "Passenger.h"
#include<vector>
#include<fstream>
#include<string>

#pragma once
class Data
{
private:
	vector <Passenger*> li_Passenger;
public:
	Data();
	~Data();
	vector<Passenger*> getLiPassenger();
	int countVector();
	void readFile(const string file);
};

