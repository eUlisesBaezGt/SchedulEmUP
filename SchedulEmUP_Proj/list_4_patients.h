#pragma once
#include "patient.h"

class list_4_patients
{
public:
	list_4_patients();
	~list_4_patients();

	void insert(const patient&);
	void show_full();
	bool is_empty() const;
	void delete_id(int);

private:
	struct node
	{
		patient data;
		node* next{};
	};

	node *head_, *tail_, *temp_;
};
