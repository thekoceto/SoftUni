#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

#include "Company.h"

bool byName(const Company& company1, const Company& company2) {
	return company1.getName() < company2.getName();
}

bool byId(const Company& company1, const Company& company2) {
	return company1.getId() < company2.getId();
}

void orderCompanies(std::vector <Company> &companies, bool(*funcp)(const Company&, const Company&)) {
	std::sort(companies.begin(), companies.end(), funcp);
}

int main() {
	std::cin.sync_with_stdio(false);
	std::cout.sync_with_stdio(false);

	std::vector <Company> companies;

	std::ostringstream input;
	std::string line;

	while (std::getline(std::cin, line) && line != "end") {
		std::string name;
		int id = 0;
		std::stringstream split(line);
		split >> name >> id;
		companies.emplace_back(id, name);
	}

	std::string uniquenessCriteria;
	std::cin >> uniquenessCriteria;
	
	if (uniquenessCriteria == "id")
		orderCompanies(companies, byId);
	else if (uniquenessCriteria == "name")
		orderCompanies(companies, byName);

	for (Company company : companies)
		std::cout << company.toString() << std::endl;

	return 0;
}