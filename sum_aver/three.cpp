#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "입력할 정수의 개수는? ";
	double n;
	cin >> n;

	if (n <= 0) return 0;

	double* p = new double[n];

	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번 째 정수: ";
		cin >> p[i];

	}

	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << "합" << sum << endl;
	cout << "평균" << sum / n << endl;

	delete[]p;
}