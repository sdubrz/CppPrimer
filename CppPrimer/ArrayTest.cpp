#include<iostream>
#include<cstring>

using namespace std;

// 3.5�� ����

//C����ַ���
int c_style_string() {

	char str1[] = { 'C', '+', '+' };  // ���Կ��ַ�����
	char str2[] = { 'C', '+', '+' ,'\0' };

	cout << strlen(str1) << endl;  // ����str1û���Կ��ַ��������������ĳ��Ȳ���������ʵ����
	cout << strlen(str2) << endl;

	return 0;
}


int main() {
	c_style_string();

	int i = 0;
	cin >> i;

	return 0;

}