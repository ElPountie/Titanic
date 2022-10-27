#include<iostream>
#include<qstring.h>
using namespace std;
#pragma once
class Passenger
{
private : 
	QString _iden;
	int _class, _age, _sex, _survived;
public :
	Passenger(QString iden, int clas, int age, int sex, int survived);
	int getSex();
	int getClass();
	int getSurvived();
};

