#include <iostream>
using namespace std;


int typeChangeTest() {
	//测试几种类型的转化规律
	unsigned char c = -1;
	unsigned char d = -2;

	cout << "c: " << int(c) << " , d: " << int(d) << endl;

	return 0;

}


int main() {
	typeChangeTest();

	int i;
	cin >> i;
	return 0;
}