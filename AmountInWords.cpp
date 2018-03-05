//
// AmountInWords.cpp
// Created by David Zhou on 3/4/18
//

#include <iostream>
#include <string>
#include <vector>

std::string amountInWords(const std::string& s) {
	int len = 0;
	std::string res;
	std::vector<std::string> twos{ "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
									"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" },
		tens{ "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" },
		tens_power{ "hundred", "thousand", "million", "billion", "trillion", "quadrillion", "quintillion", "sextillion", "septillion" };

	for (std::string::reverse_iterator rit = s.rbegin(); rit != s.rend(); ++rit) {
		
	}

	return res;
}

int main() {
	std::string s;
	std::cout << "Please enter the amount in decimal: ";
	std::cin >> s;
	std::cout << amountInWords(s);

    return 0;
}

