#pragma once
#include <iostream>

#include "queue.h"
using namespace std;

enum doctor_queues
{
	back = 0,
	See_John,
	See_Mary,
	See_Peter
};

inline void doctor_queues(const queue& queue_john, const queue& queue_mary, const queue& queue_peter)
{
	cout << "Available queues:" << endl;
	cout << "1. John" << endl;
	cout << "2. Mary" << endl;
	cout << "3. Peter" << endl;
	cout << "0. EXIT" << endl;

	int choice;
	cout << "Choice: ";
	cin >> choice;

	switch (choice)
	{
	case See_John:
		queue_john.show();
		break;

	case See_Mary:
		queue_mary.show();
		break;

	case See_Peter:
		queue_peter.show();
		break;

	case back:
		cout << "Exiting..." << endl;
		break;

	default:
		cout << "Invalid choice" << endl;
		break;
	}
}
