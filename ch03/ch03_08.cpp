#include <iostream>
#include <string>
using namespace std;

class Integer {
private:
	int a;
public:
	Integer(int x) {
		a = x;
	}
	Integer(string s) {
		a = stoi(s);
	}
	int set(int x) {
		return a = x;
	}
	int get() {
		return a;

	}
	int isEven() {
		return true;
	}
};


int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';


	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven() << ' ';
}