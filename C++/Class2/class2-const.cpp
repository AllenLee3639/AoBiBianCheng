#include <iostream>
#include <string>
using namespace std;
 
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

int main() {
//  �ַ������� 
	string greeting = "hello, runoob";
	cout << greeting;
	cout << "\n";     // ���з�
	string greeting2 = "hello, \
	                   runoob";
	cout << greeting2;
	
//  define ʹ��	
	int area;  
	   
	area = LENGTH * WIDTH;
	cout << area;
	cout << NEWLINE;
	   

//  const ʹ��	
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
