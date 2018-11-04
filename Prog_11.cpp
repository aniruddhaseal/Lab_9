#include<iostream>   
using namespace std;   

int main()
{
	//variable declaration 
	int a,*a1;
	bool b,*b1;
	char c,*c1;
	double d,*d1;
	float f,*f1;
	//Output
	cout<<"Sizes are: "<<endl;
	cout<<"Integer: "<<sizeof(a)<<" Pointer: "<<sizeof(a1)<<endl;
	cout<<"Bool: "<<sizeof(b)<<" Pointer: "<<sizeof(b1)<<endl;
	cout<<"Char: "<<sizeof(c)<<" Pointer: "<<sizeof(c1)<<endl;
	cout<<"Double: "<<sizeof(d)<<" Pointer: "<<sizeof(d1)<<endl;
	cout<<"Float: "<<sizeof(f)<<" Pointer: "<<sizeof(f1)<<endl;
	//return statement
	return 0;
}
