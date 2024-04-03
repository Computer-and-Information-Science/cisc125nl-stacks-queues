#pragma once

#include <cstddef>

template <typename T>
class queue {
private:
	class node {
		T object;
		node* p_next;
		node (const T& obj) { }
	};
	node* p_front;
	node* p_back;
	size_t count;
public:
	queue () { }
	~queue () { }
	bool empty () const { }
	T& front() { }
	void pop () { }
	void push (const T& obj) { }
	size_t size () const { }
};
