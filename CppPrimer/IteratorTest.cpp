#include<iostream>
#include<vector>
#include<string>

using namespace std;


int vector_multi_2() {
	// ��ϰ3.23 ��дһ�γ��򣬴���һ������10��������vector����Ȼ��ʹ�õ�����������Ԫ�ص�ֵ���ԭ����������
	vector<int> vec;
	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}

	cout << "vector��ԭʼ��Ԫ��ֵ��";
	for (auto i = vec.cbegin(); i != vec.cend(); i++) {
		cout << *i << "\t";
	}
	cout << endl;

	// ��vector�е�Ԫ�س���2
	for (auto i = vec.begin(); i != vec.end(); i++) {
		*i = (*i) * 2;
	}

	cout << "vector�г���2֮���Ԫ�أ�";
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
