#include "list_4_patients.h"
#include <iostream>
using namespace std;


list_4_patients::list_4_patients() { head_ = tail_ = temp_ = nullptr; }

list_4_patients::~list_4_patients()
{
	while (head_)
	{
		temp_ = head_;
		head_ = head_->next;
		delete temp_;
	}
}

void list_4_patients::insert(const patient& doc)
{
	temp_ = new node;
	temp_->data = doc;

	if (head_ == nullptr)
		head_ = tail_ = temp_;

	else
	{
		tail_->next = temp_;
		tail_ = temp_;
		tail_->next = nullptr;
	}
}

void list_4_patients::show_full()
{
	if (is_empty())
	{
		cout << "List is empty" << endl;
		return;
	}
	temp_ = head_;
	while (temp_->next != nullptr)
	{
		temp_->data.details();
		temp_ = temp_->next;
	}
	temp_->data.details();
}

bool list_4_patients::is_empty() const
{
	return head_ == nullptr;
}

void list_4_patients::delete_id(int id)
{
	if (is_empty())
	{
		cout << "List is empty" << endl;
		return;
	}
	temp_ = head_;
	node* prev = nullptr;
	while (temp_->next != nullptr)
	{
		if (temp_->data.get_id() == id)
		{
			if (temp_ == head_)
			{
				head_ = head_->next;
				delete temp_;
				return;
			}
			if (temp_ == tail_)
			{
				tail_ = prev;
				tail_->next = nullptr;
				delete temp_;
				return;
			}
			prev->next = temp_->next;
			delete temp_;
			return;
		}
		prev = temp_;
		temp_ = temp_->next;
	}
	if (temp_->data.get_id() == id)
	{
		if (temp_ == head_)
		{
			head_ = head_->next;
			delete temp_;
			return;
		}
		if (temp_ == tail_)
		{
			tail_ = prev;
			tail_->next = nullptr;
			delete temp_;
			return;
		}
		prev->next = temp_->next;
		delete temp_;
		return;
	}
	cout << "ID not found" << endl;
}
