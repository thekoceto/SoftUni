#ifndef PROFIT_REPORT_H
#define PROFIT_REPORT_H

#include <iostream>
#include <string>
#include <map>

#include "Company.h"
#include "ProfitCalculator.h"

using namespace std;

string getProfitReport(	Company* fromInclusive,
			Company* toInclusive,
			map<int, ProfitCalculator> &profitCalculatorsByCompany) {

	map<int, ProfitCalculator>::iterator it;

	while (true) {
		
		it = profitCalculatorsByCompany.find(fromInclusive->getId());
		int profits = it->second.calculateProfit(*fromInclusive);
		cout << fromInclusive->getName() << " = " << profits << endl;
		if (fromInclusive == toInclusive)
			break;
		fromInclusive++;

	}

	return "";
}

// Place your code here, as well as any other #include directives you might need

#endif // !PROFIT_REPORT_H
