#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

template <class T1, class T2>
vector<double> complementaryArray(T1 a[], T2 b[], int c, int  d) {
	vector<double> res;
	int count = 0;
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			if (a[i] == b[j])
				count++;
			res.push_back(b[j]);
		}
	}
		
}
int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	double y[] = { 1.0, 10.0, 5.0 };
	vector<double> vcomp = complementaryArray(x, y, 5, 3);
	for (int i = 0; i < vcomp.size(); i++)
		cout << vcomp[i] << " ";
	cout << endl;
}