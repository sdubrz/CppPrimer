#include<iostream>
#include<string>

using namespace std;

/*
* ��3.2�� ��׼������string
*/


int getLineTest() {
	string line;

	cout << "������һ�����ݣ�" << endl;

	getline(cin, line);
	cout << line << endl;

	return 0;
}


int sizeTest() {
	//�ַ����ĳ������޷�������Ҫ����������int����
	string a = "hello world";
	int i = -1;

	cout << "�ַ����ĳ����� " << a.size() << endl;
	if (a.size() < i) {
		cout << "a.size() < i" << endl;
	}

	return 0;
}


int replaceByX() {
	// ��ϰ3.6 ��дһ�γ���ʹ�÷�Χfor��佫�ַ����е������ַ���X����
	string str;
	cout << "������һ���ַ�����" << endl;
	getline(cin, str);

	for (auto &c : str) {
		c = 'X';  // ���ﲻ����˫����
	}

	cout << str << endl;
	return 0;
}


int removePunct() {
	// ��ϰ3.10 ��дһ�γ��򣬶���һ�����������ŵ��ַ�������������ȥ��������ַ���ʣ��Ĳ���
	cout << "������һ���ַ�����" << endl;

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