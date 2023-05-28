#include<iostream>
#define PI 3.14

using namespace std;

// 全局作用域，全局变量
int number;

int main()
{
    // 块作用域，局部变量
	int a = 1, b;
	cout << "a = " << a << endl;
	b = 10;
	cout << "b = " << b << endl;
	b = 25;
	cout << "now b = " << b << endl;

	// 访问局部变量
	int number = 1;
	cout << "number = " << number << endl;
    // 访问全局变量
	cout << "::number = " << ::number << endl;

	// 常量
	const float Pi = 3.14;
	//pi = 3.15;

	cout << "PI = " << PI << endl;
	cout << "pi = " << Pi << endl;
}