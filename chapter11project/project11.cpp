#include <iostream>
#include <string>
#include <limits>
using namespace std;
string name;
string address;
int age;
bool choice4 = false;
void printMenu() {
	cout << "Personal Information Manager \n 1. Enter Personal Information \n 2. Update Information \n 3. Display Current Information \n 4. Exit \nInput: ";
} 
void enterInfo() {
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Enter Name: ";
	getline(cin,name);
	cout << "Enter Adress: ";
	getline(cin, address);
	cout << "Enter Age: ";
	cin >> age;
	cout << "Information Recorded.\n";
}
void changeInfo() {
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Enter New Name: ";
	getline(cin, name);
	cout << "Enter New Address: ";
	getline(cin, address);
	cout << "Enter New Age: ";
	cin >> age;
	cout << "\n";
}
void dispInfo() {
	cout << "Name: " << name << "\nAddress: " << address << "\nAge:" << age << "\n";
}
int main() {
	int input;
	while (choice4 == false) {
		printMenu();
		std::cin >> input;
		switch (input) {
		case 1:
			enterInfo();
			break;
		case 2:
			changeInfo();
			break;
		case 3:
			dispInfo();
			break;
		case 4:
			choice4 = true;
			break;
		default:
			cout << "Invalid Input Try Again. \n";
		}
	}
	return 0;
}