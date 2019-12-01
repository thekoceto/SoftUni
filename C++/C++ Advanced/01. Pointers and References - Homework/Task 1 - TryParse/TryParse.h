#include <string>

bool tryParse(const std::string &anyText, int &a) {

	for (char ch : anyText)
	{
		if (isalpha(ch))
			return false;
	}
	a = std::stoi(anyText);

	return true;
}
