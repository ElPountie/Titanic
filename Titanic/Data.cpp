#include "Data.h"

Data::Data()
{
}

Data::~Data() {
	this->li_Passenger.clear();
}

vector<Passenger*> Data::getLiPassenger()
{
	return this->li_Passenger;
}

int Data::countVector()
{
	return this->li_Passenger.size();
}

void Data::readFile(const string file)
{
	ifstream entree(file, ifstream::in);
	int clas, age, sex, survived;
	string iden;
	string ligne;
	int cpt = 0;
	if (!entree) {
		cout << "Probleme d'ouverture !!" << endl;
	}
	else {
		while (!entree.eof()){
			if (cpt >= 5) {
				entree >> iden >> clas >> age >> sex >> survived;
				this->li_Passenger.push_back(new Passenger(iden, clas, age, sex, survived));
			}
			else {
				cpt++;
				getline(entree, ligne);
			}
		}
		entree.close();
	}
}
