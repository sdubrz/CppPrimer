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


int main() {

	getLineTest();

	int i;
	cin >> i;

	return 0;
}