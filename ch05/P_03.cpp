#include <iostream>
#include <string>
using namespace std;

void combine(string &a, string &b, string &c) {
	string r;
	r = a +" "+ b + c;
	c = r;
}

int main() {
	string text1("I love you"), text2("very much");
	string text3;
	combine(text1, text2, text3);
	cout << text3;
}