#include<iostream>
#include<string>
#include<vector>

using namespace std;


// 第3.3节 标准库类型vector


int wordsUpper() {
	// 练习3.17 从cin读入一组词，并把它们存入一个vector对象，然后设法把所有的词都改写为大写形式。
	// 输出改变后的结果，每个词占一行。

	vector<string> wordList;
	string str;
	cout << "请输入一组单词" << endl;

	while (cin >> str) {
		string str2 = str;
		wordList.push_back(str2);
	}

	cout << "读取输入完毕" << endl;

	for (decltype(wordList.size()) i = 0; i < wordList.size(); i++) {
		string &stri = wordList[i];
		for (auto &c : stri) {
			c = toupper(c);
		}
		
		cout << wordList[i] << endl;
	}

	return 0;
}

//
//int main() {
//	wordsupper();
//
//	int i;
//	cin >> i;
//	return 0;
//}