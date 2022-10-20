#include<iostream>
using namespace std;
#pragma once
class Passenger
{
private : 
	string _iden;
	int _class, _age, _sex, _survived;
public :
	Passenger(string iden, int clas, int age, int sex, int survived);
	Passenger();
	~Passenger();
};

