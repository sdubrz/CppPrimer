#include <iostream>
using namespace std;


int add50to100(){
	//练习1.9 编写程序，使用while循环将50到100的整数相加
	cout << endl;
	cout << "练习1.9：" << endl;

	int val = 50;
	int sum = 0;
	while (val <= 100) {
		sum += val;
		val++;
	}

	cout << "50到100之间的整数的和为 " << sum << endl;
	
	return 0;
}


int print10to0() {
	//编写程序，使用递减运算符在循环中按递减顺序打印出10到0之间的整数
	cout << endl;
	cout << "练习1.10：" << endl;
	int val = 10;
	while (val >= 0) {
		cout << val << "\t";
		val--;
	}
	cout << endl;

	return 0;
}


int printInt() {
	//提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数
	cout << endl;
	cout << "练习1.11：" << endl;
	cout << "请输入起始整数和终止整数的值：" << endl;

	int start, end;
	cin >> start >> end;
	int i = start;

	while (i <= end) {
		cout << i << "\t";
		i++;
	}
	cout << endl;

	return 0;
}



//int main() {
//	
//	add50to100();
//	print10to0();
//	printInt();
//
//	int i;
//	cin >> i;
//	return 0;
//}
