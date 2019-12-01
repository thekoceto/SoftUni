#ifndef COMPANYMEMORYUTILS_H
#define COMPANYMEMORYUTILS_H

#include <string>
#include <vector>

#include "Company.h"

typedef unsigned char byte;

using namespace std;

vector<Company> readCompaniesFromMemory(byte* &memory, int numCompanies) {
	vector<Company> companies;
	size_t index = -1;

	while (--numCompanies >= 0) {
		int id = memory[++index];

		string name;
		while (memory[index] != '\0')
			name += memory[++index];

		vector<std::pair<char, char> > employees;
		int pairNumber = memory[++index];
		while (--pairNumber >= 0)
			employees.push_back({ memory[++index], memory[++index] });

		Company c{ id, name, employees };
		companies.push_back(c);
	}

	return companies;
}

#endif // !COMPANYMEMORYUTILS_H