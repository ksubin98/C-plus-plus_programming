#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SeletableRandom {
	int x;
public:
	SeletableRandom(int c);
	int next();
	int nextInRange(int a, int b);
};
SeletableRandom::SeletableRandom(int c) {
	x = c; //홀수 짝수 받는 매개변수
	srand((unsigned int)time(0));
};

int SeletableRandom::next() {
	int y = rand();
	if (x % 2 == 0)//짝수일 때,
		if (y % 2 == 0)
			return y;
		else
			return --y;
};

int SeletableRandom::nextInRange(int a, int b) {
	int y = rand() % (b - a + 1) + a;

	if (x%2 == 0)
		if (y%2== 0)
			return ++y;
		else
			return y;
};


int main() {
	SeletableRandom r(0);
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';

	}

	SeletableRandom rr(1);
	cout << endl << endl << "-- 2에서 " << "9 까지의 홀수 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';

	}

	cout << endl;
}
