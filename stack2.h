#pragma once

template <typename T>
class stack {
private:
	class node {
		T object;
		node* p_next;
		node (const T& obj, node* previous_top) { }
	};
	node* p_top;
public:
	stack () { }
	bool empty () const { }
	void pop () { }
	void push (const T& obj) { }
	T& top() { }
};
