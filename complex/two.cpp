#include <iostream>	
using namespace std;

class Complex {
	double a, b;
public:
	Complex() {
		a = 0;
		b = 0;
	}
	Complex(double x, double y) {
		a = x + y;
		b = x - y;

	}
	Complex(double x) {
		a = x;

	}
	void show() {
		cout << "( " << a << b << ")";
	}
};


int main() {
	Complex u(12, 34);
	Complex v(56, -78);
	Complex x(90);
	Complex y(0, 78);
	Complex z();

	u.show();
	v.show();
	x.show();
	y.show();
	z.show();

}