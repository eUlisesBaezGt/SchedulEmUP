#include "patient.h"

#include <iostream>
using namespace std;

patient::patient() = default;

patient::patient(string name, const int age, const int doctor_2_visit, string cause, const int urgency)
{
	this->name = move(name);
	this->age = age;
	this->doctor_2_visit = doctor_2_visit;
	this->cause = move(cause);
	this->urgency = urgency;
}

patient add_patient()
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
	cout << "Doctor to visit: ";
	cout << "1. Dr. " << endl; // TODO DR NAMES
	cout << "2. Dr. " << endl;
	cout << "3. Dr. " << endl;
	cin >> doctor_2_visit;
	cout << "Cause: ";
	cin >> cause;
	cout << "Urgency (1 for VERY URGENT - 2 for normal): ";
	cin >> urgency;

	patient new_patient(name, age, doctor_2_visit, cause, urgency);
	return new_patient;
}
