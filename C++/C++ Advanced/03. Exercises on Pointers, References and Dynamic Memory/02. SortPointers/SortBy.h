#ifndef SORT_BY_H
#define SORT_BY_H

#include <algorithm>

#include "Company.h"

bool(*glabalFuncp)(const Company& a, const Company& b) = nullptr;

bool compare(const Company * a, const Company * b) {
	return glabalFuncp (*a,*b);
}
void sortBy(Company** companyFirstPtrs, Company** companyLastPtrs, bool (*funcp)(const Company& a, const Company& b)) {
	glabalFuncp = funcp;
	std::sort(companyFirstPtrs, companyLastPtrs, compare);
}

#endif // !SORT_BY_H


