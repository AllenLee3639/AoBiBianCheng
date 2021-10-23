#include <iostream>
#include <string>
using namespace std;
 
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

int main() {
//  字符串常量 
	string greeting = "hello, runoob";
	cout << greeting;
	cout << "\n";     // 换行符
	string greeting2 = "hello, \
	                   runoob";
	cout << greeting2;
	
//  define 使用	
	int area;  
	   
	area = LENGTH * WIDTH;
	cout << area;
	cout << NEWLINE;
	   

//  const 使用	
//	const int  LENGTH = 10;
//	const int  WIDTH  = 5;
//	const char NEWLINE = '\n';
//	int area;  
//	
//	area = LENGTH * WIDTH;
//	cout << area;
//	cout << NEWLINE;
	   
    return 0;
}
