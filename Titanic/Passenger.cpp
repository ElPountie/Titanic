#include "Passenger.h"

Passenger::Passenger(QString iden, int clas, int age, int sex, int survived)
{
	this->_iden = iden;
	this->_class = clas;
	this->_age = age;
	this->_sex = sex;
	this->_survived = survived;
}

int Passenger::getSex() {
	return this->_sex;
}

int Passenger::getClass() {
	return this->_class;
}

int Passenger::getSurvived() {
	return this->_survived;
}
