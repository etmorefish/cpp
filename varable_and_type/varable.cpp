#include<iostream>
#define PI 3.14

using namespace std;

// ȫ��������ȫ�ֱ���
int number;

int main()
{
    // �������򣬾ֲ�����
	int a = 1, b;
	cout << "a = " << a << endl;
	b = 10;
	cout << "b = " << b << endl;
	b = 25;
	cout << "now b = " << b << endl;

	// ���ʾֲ�����
	int number = 1;
	cout << "number = " << number << endl;
    // ����ȫ�ֱ���
	cout << "::number = " << ::number << endl;

	// ����
	const float Pi = 3.14;
	//pi = 3.15;

	cout << "PI = " << PI << endl;
	cout << "pi = " << Pi << endl;
}