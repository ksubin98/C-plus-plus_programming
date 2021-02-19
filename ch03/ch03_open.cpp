#include <iostream>
using namespace std;

#include "Exp.h"

Exp::Exp(int n) {
	base = n;
	exp = 1;
};

Exp::Exp(int a, int b) {
	base = a;
	exp = b;
};

Exp::Exp(){
	base = 1;
	exp = 1;
};

int Exp::getValue() {
	int x = base;
	for (int i = 1; i < exp; i++)
		x = x * base;
	return x;

};

int Exp::getBase() {
	return base;
};

int Exp::getExp() {
	return exp;
};

bool Exp::equals(Exp b) {
	if (getValue() == b.getValue())
		return true;
	else
		return false;
};

int main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue()<< ' ' << c.getValue() << endl;
	cout << "a의 베이스 " << a.getBase() << ',' << "지수 " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}