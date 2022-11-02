#pragma once
#include "list_4_patients.h"

inline void discharge_patient(list_4_patients complete_patients, queue all_patients, queue queue_URGENT,
                              queue queue_NORMAL)
{
	while (!all_patients.is_empty())
	{
		complete_patients.insert(all_patients.dequeue());
	}
	while (!queue_URGENT.is_empty())
	{
		complete_patients.insert(queue_URGENT.dequeue());
	}
	while (!queue_NORMAL.is_empty())
	{
		complete_patients.insert(queue_NORMAL.dequeue());
	}
	cout << "Merged 3 queues in single list successfully" << endl;

	cout << "Enter ID of patient to be discharged: ";
	int id;
	cin >> id;
	complete_patients.delete_id(id);
}
