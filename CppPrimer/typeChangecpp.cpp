#include <iostream>
using namespace std;


int typeChangeTest() {
	//���Լ������͵�ת������
	unsigned char c = -1;
	unsigned char d = -2;

	cout << "c: " << int(c) << " , d: " << int(d) << endl;

	return 0;

}


int unsignedtest() {
	//��ϰ2.3 �����޷����������ת������
	unsigned u = 10;
	int u2 = 42;

	cout << u - u2 << endl;  //4294967264
	cout << u2 - u << endl;  //32

	return 0;
}


int referenceTest() {
	//��ϰ2.17 ���õ�ʹ�ò���
	int i, &ri = i;
	i = 5;
	ri = 10;
	cout << i << "\t" << ri << endl;  // ����Ľ������10
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