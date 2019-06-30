#include <iostream>
using namespace std;


int typeChangeTest() {
	//测试几种类型的转化规律
	unsigned char c = -1;
	unsigned char d = -2;

	cout << "c: " << int(c) << " , d: " << int(d) << endl;

	return 0;

}


int unsignedtest() {
	//练习2.3 测试无符号数的相关转化问题
	unsigned u = 10;
	int u2 = 42;

	cout << u - u2 << endl;  //4294967264
	cout << u2 - u << endl;  //32

	return 0;
}


int referenceTest() {
	//练习2.17 引用的使用测试
	int i, &ri = i;
	i = 5;
	ri = 10;
	cout << i << "\t" << ri << endl;  // 输出的结果都是10
	return 0;
}


int main() {
	//typeChangeTest();

	//unsignedtest();
	referenceTest();

	int i;
	cin >> i;
	return 0;
}