#ifndef MAKE_COMPANY_H
#define MAKE_COMPANY_H

#include "Company.h"
#include <string>
#include <vector>
#include <memory>

std::shared_ptr<Company> makeCompany(const std::vector<std::string> &properties) {

	int id = stoi(properties[0]);
	std::string name = properties[1];

	std::vector<std::pair<char, char> > employees;
	std::string input;
	for (int i = 2; i < properties.size(); ++i)
		employees.push_back({ properties[i][0], properties[i][1]});

	std::shared_ptr<Company> c (new Company(id, name, employees));


	return c;
}

#endif // !MAKE_COMPANY_H