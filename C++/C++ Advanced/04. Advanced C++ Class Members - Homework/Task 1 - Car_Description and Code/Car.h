#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <sstream>
#include <string>

using namespace std;
class Car{
private:
	string sBrand;
	string sModel;
	int nYear;
public:
	Car(std::string sBrand, string sModel, int nYear) : sBrand(sBrand), sModel(sModel), nYear(nYear){}

	std::string GetBrand() const {
		return this->sBrand;
	}
	std::string GetModel() const {
		return this->sModel;
	}
	int GetYear() const {
		return this->nYear;
	}

	friend std::istream& operator>>(std::istream& in, Car& c) {
		return in >> c.sBrand >> c.sModel >> c.nYear;
	}
};

#endif // !CAR_H