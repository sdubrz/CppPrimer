#include<iostream>
#include<vector>
#include<string>

using namespace std;

// 4.7�� ����������е������ϰ

int oddDouble() {
	// ��ϰ4.21 ��дһ�γ���ʹ�������������vector<int>���ҵ���ЩԪ����������Ȼ����Щ����ֵ����
	vector<int> numbers = { 1,2,3,4,5,6,7,8,9 };
	cout << "ԭʼ��vector�е�Ԫ��Ϊ:" << endl;
	for (auto i : numbers) {
		cout << i << "\t";
	}
	cout << endl;

	cout << "����������2��" << endl;
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