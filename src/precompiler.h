size_t counter = 0;

void handleInclude (std::vector<std::string>& input) {
	if (input[counter].substr (0, 9) == "~einfügen") {
		std::cout << input[counter] << std::endl;
		std::string fileName;
	}
}

void prec (std::vector<std::string>& input) {
	for (; counter < input.size(); counter++) {
		handleInclude (input);
	}
} 