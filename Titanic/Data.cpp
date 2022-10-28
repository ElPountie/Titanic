#include "Data.h"

Data::Data()
{
}

Data::~Data() {
	this->li_Passenger.clear();
}

QVector<Passenger*> Data::getLiPassenger()
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
	QString iden_;
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
				iden_.fromStdString(iden);
				this->li_Passenger.push_back(new Passenger(iden_, clas, age, sex, survived));
			}
			else {
				cpt++;
				getline(entree, ligne);
			}
		}
		entree.close();
	}
}

int Data::countPerson(bool gender) {
	int cpt = 0;
	if (gender) {
		for (auto index : this->li_Passenger){
			if (index->getSex() == 1) {
				cpt++;
			}
		}
	}
	else{
		for (auto index : this->li_Passenger) {
			if (index->getSex() == 0) {
				cpt++;
			}
		}
	}
	return cpt;
}

/*map<int, int> Data::countDead() {
	map<int, int> tmp;
	int cptCrew = 0, cptFirst = 0, cptSecond = 0, cptThird = 0;
	for (auto index : this->li_Passenger) {
		switch (index->getSurvived())
		{
		case 0:
			cptCrew++;
			break;
		case 1:
			cptFirst++;
			break;
		case 2:
			cptSecond++;
			break;
		case 3:
			cptThird++;
			break;
		default:
			break;
		}
	}
	tmp.insert(0, cptCrew);
	tmp.insert(1, cptFirst);
	tmp.insert(2, cptSecond);
	tmp.insert(3, cptThird);
	
	return tmp;
}*/
