#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRange(int a, int b);
};
Random::Random() {
	srand((unsigned int)time(0));//프로그램 실행 시 마다, 새로운 씨드값 설정 후 새로운 난수 뽑기.
								// time 값을 형 변환
};

int Random:: next() {
	return(rand());
};

int Random::nextInRange(int a, int b) {
	return (rand() % (b-a+1)+a);
};


int main() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';

	}

	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';

	}

	cout << endl;
}
