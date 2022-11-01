#pragma once
#include "queue.h"

inline void classify_by_urgency(queue& all_patients, queue& queue_URGENT, queue& queue_NORMAL)
{
	while (!all_patients.is_empty())
	{
		const patient temp = all_patients.dequeue();
		if (temp.urgency == 1) queue_URGENT.enqueue(temp);
		else queue_NORMAL.enqueue(temp);
	}
	cout << "URGENT" << endl;
	queue_URGENT.show();
	cout << endl << "NORMAL" << endl;
	queue_NORMAL.show();
}
