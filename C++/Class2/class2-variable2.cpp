#include <iostream>
using namespace std;

// 全局变量声明
int g = 20;

int main ()
{
	// 局部变量声明
	int a, b;
	int c;
	
	// 实际初始化
	a = 10;
	b = 20;
	c = a + b;
	
	cout << c << endl;
	
	cout << g << endl; 
	
	return 0;
}
