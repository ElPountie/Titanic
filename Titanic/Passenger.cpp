#include "Passenger.h"

Passenger::Passenger(string iden, int clas, int age, int sex, int survived)
{
	this->_iden = iden;
	this->_class = clas;
	this->_age = age;
	this->_sex = sex;
	this->_survived = survived;
}

Passenger::Passenger()
{
}

Passenger::~Passenger()
{
}
