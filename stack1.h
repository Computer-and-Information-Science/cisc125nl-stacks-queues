#pragma once

#include <cstddef>

template <typename T>
class stack {
private:
	static const int CAPACITY = 100;
	T objects[CAPACITY];
	size_t count;
public:
	stack () { }
	bool empty () const { }
	void pop () { }
	void push (const T& obj) { }
	T& top() { }
};
