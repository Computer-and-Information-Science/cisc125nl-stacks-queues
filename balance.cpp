#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool is_balanced (const string& s);

int main () {
	string str;

	cout << "Enter string: ";
	getline(cin, str);
	while (str != "") {
		if (is_balanced(str))
			cout << "String is balanced." << endl;
		else
			cout << "Error: String is not balanced." << endl;

		cout << "Enter string: ";
		getline(cin, str);
	}
}

bool is_balanced (const string& s) {
	stack<char> stk;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			stk.push(s[i]);
		if (s[i] == ')') {
			if (stk.empty() || stk.top() != '(')
				return false;
			stk.pop();
		}
		if (s[i] == ']') {
			if (stk.empty() || stk.top() != '[')
				return false;
			stk.pop();
		}
		if (s[i] == '}') {
			if (stk.empty() || stk.top() != '{')
				return false;
			stk.pop();
		}
	}
	return stk.empty();
}
