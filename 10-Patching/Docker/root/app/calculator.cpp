#include <iostream>
#include <sstream>

int main(int argc, char** argv) {

	double num1, num2;
	char op;

	if (argc < 4) {
		std::cout << "Please enter a calculation using one of the following operators: +,-,*,/\n";
		std::string input {};
		std::getline(std::cin, input);
		std::istringstream iss { input };

		iss >> num1 >> op >> num2;
		if (iss.fail()) {
			std::cout << "Invalid input\n";
			return false;
		}
	} else {
		num1 = atoi(argv[1]);
		op = *argv[2];
		num2 = atoi(argv[3]);
	}

	double result {};
	switch (op)	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 + num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;

	default:
	std::cout << "Invalid operator\n";
		break;
	}

	std::cout << result << "\n";

	return true;
}
