#include<iostream>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	/*Person() {
		this->id = 1;
		this->weight = 20.5;
		this->name = "Grace";
	}*/
	Person(int id = 1, string name = "Grace", double weight = 20.5) {
		this->id = id;
		this->weight = weight;
		this->name = name;
	}
	/*Person(int a, string s) {
		this->id = a;
		this->weight = 20.5;
		this->name = s;
	}
	Person(int a, string s, double d) {
		this->id = a;
		this->weight = d;
		this->name = s;
	}*/
	void show() {
		cout << id << ' ' << weight << ' ' << name << endl;
	}
};

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();

}