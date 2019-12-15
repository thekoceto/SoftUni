#ifndef SERIALIZE_H
#define SERIALIZE_H

#include <istream>
#include <ostream>
#include <string>
#include <vector>

byte* serializeToMemory(const std::string &input, size_t &bytesWritten){
	
	std::vector<Company> companies;
	byte* inputToSerial = new byte[input.size()];
	bytesWritten = 0;

	std::istringstream companiesIn(input);
	Company company;

	while (companiesIn >> company)
		companies.push_back(company);

	inputToSerial[bytesWritten++] = companies.size();

	for (Company company : companies) {

		inputToSerial[bytesWritten++] = company.getId();

		std::string currentName = company.getName();
		for (size_t i = 0; i < currentName.size(); ++i)
			inputToSerial[bytesWritten++] = currentName[i];

		std::vector<std::pair<char, char> > currentEmployees = company.getEmployees();
		inputToSerial[bytesWritten++] = '\0';
		inputToSerial[bytesWritten++] = currentEmployees.size();

		for (size_t i = 0; i < currentEmployees.size(); ++i) {
			inputToSerial[bytesWritten++] = currentEmployees[i].first;
			inputToSerial[bytesWritten++] = currentEmployees[i].second;
		}

	}

	return inputToSerial;
}
#endif // !SERIALIZE_H

/*
42 uni (I.K.,S.N.)
13 joro (G.G.)
end

2 42 117 110 105 0 2 73 75 83 78 13 106 111 114 111 0 1 71 71
*/