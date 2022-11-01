#pragma once
#include "patient.h"

inline patient add_patient()
{
	string name;
	int age;
	int doctor_2_visit;
	string cause;
	int urgency;

	cout << "Name: ";
	cin >> name;
	cout << "Age: ";
	cin >> age;
	cout << "Doctor to visit: " << endl;
	cout << "1. Dr. John" << endl;
	cout << "2. Dr. Mary" << endl;
	cout << "3. Dr. Peter" << endl;
	cout << "Select doctor ID: ";
	cin >> doctor_2_visit;
	cout << "Cause: ";
	cin >> cause;
	cout << "Urgency (1 for VERY URGENT - 2 for normal): ";
	cin >> urgency;

	patient new_patient(name, age, doctor_2_visit, cause, urgency);
	return new_patient;
}
