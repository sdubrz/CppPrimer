#include<iostream>
#include<cstring>

using namespace std;

// 3.5节 数组

//C风格字符串
int c_style_string() {

	char str1[] = { 'C', '+', '+' };  // 不以空字符结束
	char str2[] = { 'C', '+', '+' ,'\0' };

	cout << strlen(str1) << endl;  // 由于str1没有以空字符结束，因而输出的长度并不是其真实长度
	cout << strlen(str2) << endl;

	return 0;
}


int main() {
	c_style_string();

	int i = 0;
	cin >> i;

	return 0;

}