#include <iostream>
using namespace std;

void get1() {

	cout << "아래에 입력하세요." << endl;
	char ch; // 문자열
	int n = 0; // 공백 카운트
	while ((ch = cin.get()) != EOF) {
		cin.get(ch); //문자 읽기
		if (cin.eof()) break;
		//cout.put(ch);

		if (ch == ' ') // 빈칸이면 카운트 증가
			n++;
		

	}
	cout << "공백이 총  " << n << "개 입니다." << endl;
}

int main() {
	get1();
}
