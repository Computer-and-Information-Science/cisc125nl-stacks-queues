#pragma once

#include <cstddef>

template <typename T>
class queue {
private:
	static const int CAPACITY = 100;
	T objects[CAPACITY];
	size_t i_front;
	size_t count;
public:
	queue () { }
	bool empty () const { }
	T& front() { }
	void pop () { }
	void push (const T& obj) { }
	size_t size () const { }
};
