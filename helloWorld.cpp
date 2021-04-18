#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userName;
	int userAge;

	cout << "Hello, may I have your name please?" << endl;
	getline(cin, userName);

	cout << "Hello " << userName << " it's nice to meet you!" << endl;
	cout << "May I have your age please?" << endl;
	cin >> userAge;
	cin.ignore();
	
	cout << "Good to meet you " << userName << ", I understand that you are " << userAge << " years old.";
	cout << "You may type any number and press return to quit." << endl;
	cin >> userAge;
	cin.ignore();

	return 0;
}
