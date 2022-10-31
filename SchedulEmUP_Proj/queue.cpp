#include "queue.h"

using namespace std;

queue::queue()
{
	head_ = nullptr;
	tail_ = nullptr;
}

queue::~queue()
{
	const node* current = head_;
	while (current != nullptr)
	{
		const node* next = current->next;
		delete current;
		current = next;
	}
}

void queue::enqueue(patient new)
{
	node* new_node = new node;
	new_node->data = new;
	new_node->next = nullptr;

	if (head_ == nullptr)
	{
		head_ = new_node;
		tail_ = new_node;
	}
	else
	{
		tail_->next = new_node;
		tail_ = new_node;
	}
}


void queue::show() const
{
	const node* current = head_;
	while (current != nullptr)
	{
		cout << current->data << endl;
		current = current->next;
	}
}

bool queue::is_empty() const
{
	return head_ == nullptr;
}
