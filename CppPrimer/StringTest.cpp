#include<iostream>
#include<string>

using namespace std;

/*
* 第3.2节 标准库类型string
*/


int getLineTest() {
	string line;

	cout << "请输入一行内容：" << endl;

	getline(cin, line);
	cout << line << endl;

	return 0;
}


int main() {

	getLineTest();

	int i;
	cin >> i;

	return 0;
}