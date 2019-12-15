#ifndef MIN_BY_H
#define MIN_BY_H

#include <string>

std::string minBy (const std::vector<std::string> values, bool (*funcp)(const std::string& a, const std::string& b)) {
	
	std::string result = values[0];

	for (size_t i = 1; i < values.size(); ++i)
		result = funcp(values[i], result) ? values[i] : result;

	return result;
}

#endif // !MIN_BY_H