//
// AmountInWords.cpp
// Created by David Zhou on 3/4/18
//

#include <iostream>
#include <string>

std::string amountInWords(std::string s) {
	int len = 0, n = 0;
	std::string res,
		ones[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
									"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" },
		tens[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" },
		tens_power[] = { "", "thousand", "million", "billion", "trillion", "quadrillion", "quintillion", "sextillion", "septillion" };

	// TO-DO: Check if the characters are a digit
	// TO-DO: Check for cents
	for (std::string::reverse_iterator rit = s.rbegin(); rit != s.rend(); ++rit) {
		++len;
		if ((len - 1) % 3 == 0) {	// First Digit
			n += *rit - '0';
			res = tens_power[len / 3] + ' ' + res;
		}
		else if (len % 3 == 0) {	// Third Digit
			int tmp = *rit - '0';
			if (tmp != 0)
				res = ones[tmp] + " hundred " + res;
		}
		else {						// Second Digit
			n += (*rit - '0') * 10;
			if (n < 20)
				res = ones[n] + ' ' + res;
			else
				res = tens[n / 10] + '-' + ones[n % 10] + ' ' + res;
			n = 0;
		}
	}

	if (n != 0) res = ones[n] + ' ' + res;
	res[0] = toupper(res[0]);

	return res;
}

int main() {
	std::string s;
	std::cout << "Please enter the amount in decimal: ";
	std::cin >> s;
	std::cout << amountInWords(s) << std::endl;

    return 0;
}
