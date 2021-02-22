#include <iostream>
using namespace std;

class Stack {
	int *x;
	int y;
public:
	Stack() { x = new int[10]; y = -1; }
	~Stack() { delete[] x; }
	Stack& operator<<(int a);
	Stack& operator>>(int &a);
	bool operator!();
};

Stack& Stack::operator<<(int a) {
	++y;
	x[y] = a;
	return *this;
}

Stack& Stack::operator>>(int& a) {
	a = x[y];
	--y;
	return *this;
}

bool Stack::operator!() {
	if (y == -1)
		return true;
	else
		return false;
}


int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}