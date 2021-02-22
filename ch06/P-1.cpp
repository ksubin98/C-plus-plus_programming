#include <iostream>
using namespace std;

int add(int x[], int y) {
	int sum = 0;
	for (int i = 0; i < y; i++) 
		sum += x[i];
	return sum;

}

int add(int x[], int y, int z[]) {
	int sum2 = 0;
	for (int i = 0; i < y; i++)
		sum2 += x[i] + z[i];
		return sum2;

}

int main() {
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}