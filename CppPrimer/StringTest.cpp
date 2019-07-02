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


int sizeTest() {
	//字符串的长度是无符号数，要尽量避免与int混用
	string a = "hello world";
	int i = -1;

	cout << "字符串的长度是 " << a.size() << endl;
	if (a.size() < i) {
		cout << "a.size() < i" << endl;
	}

	return 0;
}


int replaceByX() {
	// 练习3.6 编写一段程序，使用范围for语句将字符串中的所有字符用X代替
	string str;
	cout << "请输入一个字符串：" << endl;
	getline(cin, str);

	for (auto &c : str) {
		c = 'X';  // 这里不能用双引号
	}

	cout << str << endl;
	return 0;
}


int removePunct() {
	// 练习3.10 编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分
	cout << "请输入一个字符串：" << endl;

	string str;
	getline(cin, str);
	string str2 = "";

	for (decltype(str.size()) i = 0; i < str.size(); i++) {
		if (!ispunct(str[i])) {
			str2 += str[i];
		}
	}

	cout << str2 << endl;

	return 0;
}


int main() {

	//getLineTest();
	//sizeTest();
	//replaceByX();
	removePunct();

	int i;
	cin >> i;

	return 0;
}