#pragma once
#include "add_patient.h"
#include "classify_by_urgency.h"
#include "list.h"
#include "load_doctors.h"
#include "doctor_queues.h"
#include "queue.h"


enum main_menu
{
	EXIT = 0,
	Add_Patient,
	See_Doctors,
	See_Doctor_Queues,
	Classify_By_Urgency
};

inline void main_menu()
{
	queue all_patients, queue_john, queue_mary, queue_peter, queue_URGENT, queue_NORMAL;
	list doctors;
	load_doctors(doctors);
	patient new_patient;
	int choice;
	do
	{
		cout << endl << endl << "MAIN MENU" << endl;
		cout << "1. Add patient" << endl;
		cout << "2. See doctors" << endl;
		cout << "3. See doctor's queue" << endl;
		cout << "4. Classify by urgency" << endl;
		cout << "0) EXIT" << endl;

		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case Add_Patient:
			new_patient = add_patient();
			if (new_patient.doctor_2_visit == 1) queue_john.enqueue(new_patient);
			else if (new_patient.doctor_2_visit == 2) queue_mary.enqueue(new_patient);
			else if (new_patient.doctor_2_visit == 3) queue_peter.enqueue(new_patient);
			else
			{
				cout << "Invalid doctor ID" << endl;
				new_patient = add_patient();
			}
			all_patients.enqueue(new_patient);
			break;

		case See_Doctors:
			doctors.show_full();
			break;

		case See_Doctor_Queues:
			doctor_queues(queue_john, queue_mary, queue_peter);
			break;

		case Classify_By_Urgency:
			classify_by_urgency(all_patients, queue_URGENT, queue_NORMAL);
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
