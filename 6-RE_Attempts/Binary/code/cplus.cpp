#include <iostream>
#include <string>
using namespace std;

bool validateCredentials(string name, string  pw) {
	return (name == "Syrson") && (pw == "@WP");
}

int main() {

	string username, password;
	while (true)
	{
		cout << "Please enter your username: ";
		cin >> username;
		cout << "Please enter your password: ";
		cin >> password;

		if (validateCredentials(username, password)) {
			string flag = "13371";
			flag[0] = flag[0] + 0x17;
			flag[1] = flag[1] + 0x32;
			flag[2] = flag[2] + 0x39;
			flag[3] = flag[3] + 0x35;
			flag[4] = flag[4] + 0x3E;
			cout << "Congratulations the flag is: " + flag;
			break;
		}
		else {
			cout << "Credentials are wrong!\n";
			system("pause");
			system("cls");
		}
	}

	return 0;
}