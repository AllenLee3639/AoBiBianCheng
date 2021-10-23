#include<iostream>  
#include <limits>
 
using namespace std;  

enum color {
red,
blue,
green
}c;

//enum color {
//red,
//blue = 5,
//green
//};

int main(){
	c = red;
	cout<<c<<endl;
	c = blue;
	cout<<c<<endl;
	c = green;
	cout<<c<<endl;
	
//	color g = green;
//	cout<<g<<endl;
	return 0;
} 
