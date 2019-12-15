#ifndef PARSE_COMPANIES_H
#define PARSE_COMPANIES_H

#include <string>
#include <vector>
#include <sstream>

#include "Company.h"

Company* parseUniqueCompanies (const std::string inputStr, int &numCompanies, std::string (*funcp)(const Company&)) {
	
	int id = 0;
	std::string name;
	std::vector <Company> companies;
	numCompanies = 0;
	
	std::istringstream iss(inputStr);
	std::string temp;
	bool companyElemFlag = false;

	while (iss >> temp) {
		if (!companyElemFlag) {
			id = stoi(temp);
			companyElemFlag = !companyElemFlag;
		}
		else {
			companies.push_back(Company{ id,temp });
			++numCompanies;
			companyElemFlag = !companyElemFlag;
		}
	}

	Company* result = new Company[numCompanies];
	numCompanies = 0;

	for (int i = 0; i < companies.size(); ++i) {
		companyElemFlag = true;
		for (int j = i - 1; j >= 0; --j) {
			if (funcp(companies[i]) == funcp(companies[j])) {
				companyElemFlag = false;
				break;
			}
		}
		if (companyElemFlag)
			result[numCompanies++] = companies[i];
	}

	return result;
}
#endif // !PARSE_COMPANIES_H

/*
123 valid
123 copy
321 ancientmarinerinc
end
1

123 valid
321 ancientmarinerinc
*/