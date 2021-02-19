// - CH03-2
#include<iostream>
#include<string>
using namespace std;

class Date {
	int year, month, day;
public:
	Date(int year, int month, int day) {
		int a, b, c;
		a = year;
		b = month;
		c = day;
	}
	Date(string s) {
		year = stoi(s.substr(0, 4));
		month = stoi(s.substr(5, 7));
		day = stoi(s.substr(8, 11));
	}
	void show() {
		cout << year << "년" << month << "월" << day << "일" << endl;
	}
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ', ' << birth.getMonth() << ', ' << birth.getDay() << endl;
}
*/

//Ch 04-1
/*
#include<iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0;}
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }

};

int main() {
	Color screenColor(255, 0, 0);
	Color* p;
	p = &screenColor;
	p->show();
	Color colors[3];
	p = colors;

	p[0].setColor(255, 0, 0);
	p[1].setColor(0, 255, 0);
	p[2].setColor(0, 0, 255);

	for (int i = 0; i < 3; i++) {
		p[i].show();
	}

}*/

//Ch04-2
/*
#include <iostream>
#include <string>
using namespace std;

int main() {

	int* p = new int[5];
	int sum = 0;
	double ave;
	cout << "정수 5개 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
		sum += p[i];
	}

	ave = sum / 5.0; 

	cout << " 평균 " << ave << endl;

	delete[]p;

}
*/

//ch04-3
#include <iostream>
#include <string>
using namespace std;


int main() {
	string s;
	cout << "문자열 입력>> ";
	getline(cin, s, '\n');
	int num = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a')++num;
	}
	cout << "문자 a는 " << num << "개 있습니다." << endl;
}
