#include <iostream>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack() {
		tos = -1;
		size = -1;
		p = new int[size];
	}
	MyIntStack(int size) {
		tos = -1;
		this->size = size;
		p = new int[size];
	}
	MyIntStack(const MyIntStack& s) {
		this->size = s.size;
		this->tos = s.tos;
		this->p = new int[s.size];

		for (int i = 0; i <s.tos; i++)
			this->p[i] = s.p[i];
	}
	~MyIntStack() {
		if (p)
			delete[]p;
	}
	bool push(int n) {
		if (tos == (size - 1))
			return false;
		else {
			++tos;
			p[tos] = n;
			return true;
		}
	}
	bool pop(int& n) {
		if (tos == (-1))
			return false;
		else {
			n = p[tos];
			--tos;
			return true;
		}
	}
		
};

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}