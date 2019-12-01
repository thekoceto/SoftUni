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

		int currentId = fromInclusive->getId();
		it = profitCalculatorsByCompany.find(currentId);
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
