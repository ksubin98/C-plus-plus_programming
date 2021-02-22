#include <iostream>
using namespace std;

int big(int a, int b) {
	if (a ? b < 100) {
		if (a > b)
			return a;
		else return b;
	}
	else if(a||b > 100)
		return 100;
}

int big(int a, int b, int c) {
	int MAX = c;
	if (a || b < c) {
		if (a > b)
			return a;
		else return b;
	}
	else return c;
}


int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}