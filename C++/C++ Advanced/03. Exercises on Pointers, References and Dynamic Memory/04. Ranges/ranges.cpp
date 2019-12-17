#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>

void checkNumbers(const std::map <int, int> &ranges,
	const std::vector <int> &numbers)
{
	std::ostringstream output;

	int rangesSize = ranges.size();

	for (int number : numbers) {
		auto it = ranges.lower_bound(number);

		bool flag = it != ranges.end() && it->first >= number && it->second <= number;

		if (flag)
			output << "in\n";
		else
			output << "out\n";
	}
	std::cout << output.str();
}
int main() {
	std::cin.sync_with_stdio(false);
	std::cout.sync_with_stdio(false);

	std::map <int, int> ranges;

	std::istringstream input;

	int beg;
	int end;
	std::string line;
	while (getline(std::cin, line) && line != ".") {
		input.clear();
		input.str(line);
		if (input >> beg >> end)
			ranges.emplace(end, beg);
	}

	std::vector <int> numbers;
	std::string number;
	while (std::cin >> number && number != ".")
		numbers.push_back(stoi(number));

	checkNumbers(ranges, numbers);

	return 0;
}