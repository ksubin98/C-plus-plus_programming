#include <iostream>
using namespace std;


	int sumNum(int a, int b) {
		int sum = 0;

		for (int i = a; i <= b; i++)
			sum += i;
		return sum;
	}

int main() {
	int x, y;
	cout << "첫 번째 수: ";
	cin >> x;
	cout << "두 번째 수: ";
	cin >> y;
	cout << x << "에서 " << y << "까지 더한 결과는 ";
	cout << sumNum(x, y);

} 