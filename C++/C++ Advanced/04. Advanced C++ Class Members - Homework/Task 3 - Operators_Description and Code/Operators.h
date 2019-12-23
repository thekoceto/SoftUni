#ifndef OPERATORS_H
#define OPERATORS_H

#include <ostream>
#include <vector>
#include <string>
#include <sstream>

std::string operator+(const std::string& s, const int& i) {
	std::ostringstream out;
	out << s << std::to_string(i);
	return out.str();
}

std::ostream& operator<<(std::ostream &outputStream, std::vector<std::string> &vec) {
	for (std::string element : vec)
		outputStream << element << std::endl;

	return outputStream;
}

std::vector<std::string>& operator<<(std::vector<std::string> &outVec, const std::string &element) {
	
	outVec.push_back(element);
	
	return outVec;
}

#endif // !OPERATORS_H

