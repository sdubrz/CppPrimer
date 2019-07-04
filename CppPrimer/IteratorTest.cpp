#include<iostream>
#include<vector>
#include<string>

using namespace std;


int vector_multi_2() {
	// 练习3.23 编写一段程序，创建一个含有10个整数的vector对象，然后使用迭代器将所有元素的值变成原来的两倍。
	vector<int> vec;
	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}

	cout << "vector中原始的元素值：";
	for (auto i = vec.cbegin(); i != vec.cend(); i++) {
		cout << *i << "\t";
	}
	cout << endl;

	// 将vector中的元素乘以2
	for (auto i = vec.begin(); i != vec.end(); i++) {
		*i = (*i) * 2;
	}

	cout << "vector中乘以2之后的元素：";
	for (auto i = vec.cbegin(); i != vec.cend(); i++) {
		cout << *i << "\t";
	}
	cout << endl;

	return 0;
}


int main() {
	vector_multi_2();

	string str;
	getline(cin, str);
	return 0;
}
