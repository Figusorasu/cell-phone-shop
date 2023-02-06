#include <iostream>
#include <string>

#include "phone.hpp"


using namespace std;
bool exitApp = false;

Phone phones[];

int numberOfPhones = 0;

void exitProgram() {
	system("cls");
	cout << "Program will be closed.\n";
	exitApp = true;
	system("pause");
}

void seeReports() {
	
	int userChoice = NULL;

	do {
		system("cls");
		cout << "Which reports do you want to see?\n\n1 - Show all phones by the same brand\n2 - Show all phones by given form factor and screen size\n3 - Show name of brand with maximum quantity of phones\n4 - Show top 3 screen sizes\n\n 5 - Go back to previous menu\n\n-> ";
		cin >> userChoice;

		switch (userChoice) {
			case 1: // Show all phones by the same brand
				cout << "1";
				system("pause");
				break;
			case 2: // Show all phones by given form factor and screen size
				cout << "2";
				system("pause");
				break;
			case 3: // Show name of brand with maximum quantity of phones
				cout << "3";
				system("pause");
				break;
			case 4: // Show top 3 screen sizes
				cout << "4";
				system("pause");
				break;
			case 5: // back to previous menu

				break;
			default:
				cout << "(2)Wrong operation. Please select on of the following numbers!\n";
				system("pause");
				break;
		}

	} while (userChoice != 5);
}

void addNewPhone() {
	string brand;
	string model;
	int formfactor;
	string issueyear;
	float screensize;
	float price;

	cout << "\nAdding a new phone:\n\nType brand name: ";
	cin >> brand;
	cout << "\nType model name: ";
	cin >> model;
	cout << "\nType number of form factor (1 - Bar, 2 - Smartphone, 3 - Tablet, 4 - Stationary): ";
	cin >> formfactor;
	cout << "\nType year of issue: ";
	cin >> issueyear;
	cout << "\nType screen size as a float number (ex. 7.2): ";
	cin >> screensize;
	cout << "\nType price as a float number (ex. 199.99): ";
	cin >> price;

	numberOfPhones += 1;
	Phone phone(brand, model, formfactor, issueyear, screensize, price);

	phones[numberOfPhones - 1] = phone;

}

int main()
{
	int userChoice = NULL;

	while (exitApp == false) {
		system("cls");
		cout << "Wellcome to Cell Phone Shop!\nWhat do you want to do?\n\n1 - Add new phone\n2 - Delete existing phone\n3 - See reports\n4 - Exit program\n\n-> ";
		cin >> userChoice;

		switch (userChoice) {
			case 1: // add new phone
				cout << "1";
				system("pause");
				break;
			case 2: // delete existing phone
				cout << "2";
				system("pause");
				break;
			case 3: // see reports
				seeReports();
				break;
			case 4:
				exitProgram();
				break;
			default:
				cout << "(1)Wrong operation. Please select on of the following numbers!\n";
				system("pause");
				break;
		}

	}

	return 0;
}