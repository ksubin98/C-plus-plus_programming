#include <iostream>
using namespace std;

class MyInStack {
	int p[10];
	int tos;
public:
	MyInStack() {
		tos = -1;
	}
	bool push(int n) {
		if (tos == 9) return false;
		else {
			++tos;
			p[tos] = n;
			return true;
		}
	}
	bool pop(int& n) {
		if (tos == -1) return false;
		else {
			n = p[tos];
			--tos;
			return true;
		}
	}

};


int main() {
	MyInStack a;
	for (int i = 0; i < 11; i++) {
		if (a.push(i)) cout << i << ' ';
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " 번째 stack empty";

	}
	cout << endl;

}