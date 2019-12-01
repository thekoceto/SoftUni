#ifndef ORDERED_INSERTER_H
#define ORDERED_INSERTER_H

#include <vector>
#include "Company.h"

class OrderedInserter {
private:
	std::vector <const Company*> &companies;

public:

	OrderedInserter(std::vector <const Company*> &_companies) :
		companies(_companies) {}

	void insert(const Company* c) {
		companies.push_back(c);
		int index = companies.size()-1;
		while (--index >= 0 && companies[index + 1]->getId() < companies[index]->getId())
			std::swap(companies[index+1], companies[index]);
	}
};

#endif // !ORD
