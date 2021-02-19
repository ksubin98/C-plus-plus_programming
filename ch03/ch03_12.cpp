#include "Ram.h"
#include <iostream>
using namespace std;

Ram::Ram() {
	size = 100 * 1024;
	for (int i = 0; i < size; i++)
		mem[size] = 0;
};

Ram::~Ram() {
	cout << "메모리 제거됨" << endl;

};

char Ram::read(int address) {
	return mem[address];
};

void Ram::write(int address, char value) {
	mem[address] = value;
};
