#ifndef SUMOFVECTORS_H
#define SUMOFVECTORS_H

#include <string>
#include <vector>

std::vector<std::string> operator+(const std::vector<std::string> &left, const std::vector<std::string> &right) {
	
	size_t SIZE = left.size() > right.size() ? left.size() : right.size();
	std::vector<std::string> vecResult(SIZE);

	for (size_t i = 0; i < SIZE; i++)
		vecResult[i] = left[i] + ' ' + right[i];

	return vecResult;
}

#endif // !SUMOFVECTORS_H

