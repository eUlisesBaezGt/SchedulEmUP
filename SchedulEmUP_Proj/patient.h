#pragma once
#include <string>
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
};
