#include <iostream>
#include <sstream>

int main() {

	std::cout << "Please enter a calculation using one of the following operators: +,-,*,/\n";
	std::string input {};
	std::getline(std::cin, input);
	std::istringstream iss { input };
	double num1, num2;
	char op;
	iss >> num1 >> op >> num2;
	if (iss.fail()) {
		std::cout << "Invalid input\n";
		return false;
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
	std::cout << "Invalid opeartor\n";
		break;
	}

	std::cout << result << "\n";

	return true;
}