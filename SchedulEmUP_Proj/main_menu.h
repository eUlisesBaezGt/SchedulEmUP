#pragma once
#include <iostream>

#include "patient_menu.h"

using namespace std;

enum main_menu_choice
{
	MM_EXIT = 0,
	MM_Patient,
	MM_Doctor,
	MM_Admin
};

inline void main_menu()
{
	int choice;
	do
	{
		cout << endl << endl << "MAIN MENU" << endl;
		cout << "Select your user type " << endl;
		cout << "1. Patient" << endl;
		cout << "2. Doctor" << endl;
		cout << "3. Admin" << endl;
		cout << "0. Exit" << endl;

		cout << "Enter your choice: ";
		cin >> choice;

		cout << endl;

		switch (choice)
		{
		case MM_Patient:
			patient_menu();
			break;

		case MM_Doctor:
			cout << "DOCTOR................" << endl;
			break;

		case MM_Admin:
			cout << "ADMIN................" << endl;
			break;

		case MM_EXIT:
			cout << "Exiting..." << endl;
			break;

		default:
			cout << "Invalid choice" << endl;
			break;
		}
	}
	while (choice != 0);
}
