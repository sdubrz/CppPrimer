#include<iostream>
#include<string>
#include<vector>

using namespace std;


// ��3.3�� ��׼������vector


int wordsUpper() {
	// ��ϰ3.17 ��cin����һ��ʣ��������Ǵ���һ��vector����Ȼ���跨�����еĴʶ���дΪ��д��ʽ��
	// ����ı��Ľ����ÿ����ռһ�С�

	vector<string> wordList;
	string str;
	cout << "������һ�鵥��" << endl;

	while (cin >> str) {
		string str2 = str;
		wordList.push_back(str2);
	}

	cout << "��ȡ�������" << endl;

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