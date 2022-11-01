#pragma once
#include <string>
#include <iostream>
using namespace std;

class patient
{
public:
	patient();
	patient(string, int, int, string, int);

	string name{};
	int age{};
	int doctor_2_visit{};
	string cause;
	int urgency{};

	void details() const
	{
		cout << "Name: " << name << "\tAge: " << age << "\tDoctor to visit: " << doctor_2_visit << "\tCause: " << cause
			<< "\tUrgency: " << urgency << endl;
	}
};
