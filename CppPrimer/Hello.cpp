#include <iostream>
using namespace std;


int add50to100(){
	//��ϰ1.9 ��д����ʹ��whileѭ����50��100���������
	cout << endl;
	cout << "��ϰ1.9��" << endl;

	int val = 50;
	int sum = 0;
	while (val <= 100) {
		sum += val;
		val++;
	}

	cout << "50��100֮��������ĺ�Ϊ " << sum << endl;
	
	return 0;
}


int print10to0() {
	//��д����ʹ�õݼ��������ѭ���а��ݼ�˳���ӡ��10��0֮�������
	cout << endl;
	cout << "��ϰ1.10��" << endl;
	int val = 10;
	while (val >= 0) {
		cout << val << "\t";
		val--;
	}
	cout << endl;

	return 0;
}


int printInt() {
	//��ʾ�û�����������������ӡ��������������ָ���ķ�Χ�ڵ���������
	cout << endl;
	cout << "��ϰ1.11��" << endl;
	cout << "��������ʼ��������ֹ������ֵ��" << endl;

	int start, end;
	cin >> start >> end;
	int i = start;

	while (i <= end) {
		cout << i << "\t";
		i++;
	}
	cout << endl;

	return 0;
}



//int main() {
//	
//	add50to100();
//	print10to0();
//	printInt();
//
//	int i;
//	cin >> i;
//	return 0;
//}
