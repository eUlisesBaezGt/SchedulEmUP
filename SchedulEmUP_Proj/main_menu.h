#pragma once
#include "list.h"
#include "load_doctors.h"
#include "queue.h"

enum MainMenu
{
	EXIT = 0,
	Add_Patient
};

inline void main_menu()
{
	queue all_patients;
	list doctors;
	load_doctors(doctors);

	int choice;
	do
	{
		cout << endl << endl << "MAIN MENU" << endl;
		cout << "1. Add patient" << endl;


		cout << "0) EXIT" << endl;

		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case Add_Patient:
			add_patient(doctors); // TODO
			break;

		case EXIT:
			cout << "EXITING PROGRAM" << endl;
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
	}
	while (choice != 0);
}
