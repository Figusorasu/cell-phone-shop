#pragma once
#include <iostream>
#include <string>

using namespace std;

class Phone {

	string brandName; // ex. "Apple"
	string modelName; // ex. "iPhone 13"
	int formFactor; // 1 - Bar, 2 - Smartphone, 3 - Tablet, 4 - Stationary
	string yearOfIssue; // ex. "2020"
	float screenSize; // ex. 7.3f (7,3 inches)
	float price; // ex. 199.99 ($)

	Phone(string BRAND, string MODEL, int FORM_FACTOR, string YEAR_OF_ISSUE, float SIZE_OF_SCREEN, float PRICE) {
		brandName = BRAND;
		modelName = MODEL;
		formFactor = FORM_FACTOR;
		yearOfIssue = YEAR_OF_ISSUE;
		screenSize = SIZE_OF_SCREEN;
		price = PRICE;

		cout << "Phone has been added with following parameters:" ;
	}

	~Phone() {
		cout << "Phone has been deleted";
	}

	void displayParametres() {
		cout << getBrand() << " | " << getModel() << " | " << getFormFactor() << " | " << getYearOfIssue() << " | " << getScreenSize() << " | " << getPrice() << " | "
	}

	string getBrand() {
		return brandName;
	}

	string getModel() {
		return modelName;
	}

	int getFormFactor() {
		return formFactor;
	}

	string getYearOfIssue() {
		return yearOfIssue;
	}

	float getScreenSize() {
		return screenSize;
	}

	float getPrice() {
		return price;
	}

};