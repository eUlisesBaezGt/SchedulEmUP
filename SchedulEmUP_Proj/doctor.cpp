#include "doctor.h"

#include <iostream>
using namespace std;

doctor::doctor() = default;

doctor::doctor(string name, const int age, int dr_id, string specialty) //, queue patients)
{
	this->name = move(name);
	this->age = age;
	this->dr_id = dr_id;
	this->specialty = move(specialty);
	//this->patients = patients;
}

void doctor::details() const
{
	cout << "Name: " << name << "\tAge: " << age << "\tID: " << dr_id << "\tSpecialty: " << specialty << endl;
}

doctor add_doctor()
{
	string name;
	int age;
	int dr_id;
	string specialty;
	//queue patients;

	cout << "Name: ";
	cin >> name;
	cout << "Age: ";
	cin >> age;
	cout << "Doctor ID: ";
	cin >> dr_id;
	cout << "Specialty: ";
	cin >> specialty;
	//cout << "Patients: ";
	//cin >> patients;

	doctor new_doctor(name, age, dr_id, specialty); //, patients);
	return new_doctor;
}
