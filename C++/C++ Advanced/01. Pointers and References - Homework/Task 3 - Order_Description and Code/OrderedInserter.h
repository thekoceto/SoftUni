#ifndef ORDERED_INSERTER_H
#define ORDERED_INSERTER_H

#include <vector>
#include "Company.h"

#include <vector>

class OrderedInserter {

public:
	std::vector <const Company*> &companies;

	OrderedInserter(std::vector <const Company*> &constuctor_companies) :
		companies(constuctor_companies) {}

	void insert(const Company* c)  {
		if (companies.empty())
			companies.push_back(c);
		else {
			for (size_t i = 0; i < companies.size(); ++i) {
				if (c->getId() < companies[i]->getId()) {
					companies.insert(companies.begin() + i, c);
					break;
				}
				else if (i == companies.size() - 1) {
					companies.push_back(c);
					break;
				}
			}
		}
	}
};

// Place your code here, as well as any other #include directives you might need

#endif // !ORDERED_INSERTER_H
