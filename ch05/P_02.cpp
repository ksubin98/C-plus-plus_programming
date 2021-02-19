#include <iostream>
using namespace std;

void half(double &a) {
	double r;

	r = a / 2;

	a = r;

}

int main() {

	double n = 20;
	half(n);
	cout << n;
}