#pragma once
#include <iostream>
using namespace std;

enum patient_menu_choice
{
	PM_RETURN = 0,
	PM_Register,
	PM_Login,
};

inline void patient_register() // TODO STORE IN APPS
{
	cout << "PATIENT REGISTER................" << endl;
	string name;
	int age;
	int dr_id;

	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your doctor id: ";
	cin >> dr_id;

	if (!name.empty() && age > 0 && dr_id > 0 && dr_id < 5) cout << "Patient registered successfully" << endl;
	else cout << "Patient registration failed" << endl;
}

inline void patient_login() // TODO VALIDATE IN APP
{
	cout << "PATIENT LOGIN................" << endl;
	string username;
	string password;

	cout << "Enter your username: ";
	cin >> username;
	cout << "Enter your password: ";
	cin >> password;
}

inline void patient_menu()
{
	int choice;
	do
	{
		cout << "PATIENT MENU" << endl;
		cout << "1) REGISTER " << endl;
		cout << "2) LOGIN " << endl;
		cout << "0) RETURN to Main Menu " << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case PM_Register:
			cout << "REGISTER................" << endl;
			patient_register();
			break;

		case PM_Login:
			cout << "LOGIN................" << endl;
			patient_login();
			break;

		case PM_RETURN:
			cout << "RETURNING TO MAIN MENU................" << endl;
			break;

		default:
			cout << "Invalid choice" << endl;
			break;
		}
	}
	while (choice != 0);
}
