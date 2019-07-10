#include<iostream>
#include<vector>
#include<string>

using namespace std;

// 4.7节 条件运算符中的相关练习

int oddDouble() {
	// 练习4.21 编写一段程序，使用条件运算符从vector<int>中找到哪些元素是奇数，然后将这些奇数值翻倍
	vector<int> numbers = { 1,2,3,4,5,6,7,8,9 };
	cout << "原始的vector中的元素为:" << endl;
	for (auto i : numbers) {
		cout << i << "\t";
	}
	cout << endl;

	cout << "将奇数乘以2：" << endl;
	for (auto i = numbers.begin(); i != numbers.end(); i++) {
		*i = (*i % 2 == 1) ? *i * 2 : *i;
		cout << *i << "\t";
	}
	cout << endl;

	return 0;
}


int main() {
	oddDouble();

	string str;
	getline(cin, str);
	return 0;
}