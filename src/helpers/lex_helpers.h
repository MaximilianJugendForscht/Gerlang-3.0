std::pair <std::string, std::string> findAssignements (std::string line) {
	std::string s1;
	std::string s2;
	bool afterOperator;
	for (size_t i = 0; i < line.size(); i++)  {
		if (&line[i] == "=") {
			afterOperator != afterOperator;
		} else {
			if (afterOperator) {
				s1 += line[i];
			} else {
				s2 += line[i];
			}
		}
	}
	return std::make_pair (s1, s2);
}

bool isString (std::string input) {
	return ((input[0] == '\"') and (input[input.size()-1] == '\"'));
}

std::string getStr (std::string input) {
	std::cout << "STRING = " << input.substr (1, input.size() -2);
	return input.substr (1, input.size() -2);
}