#include<iostream> 

using namespace std;   

int main()
{
	char str[20],*p;    //p is a character pointer
	//Input
	cout<<"Input about 10 characters of string\n";
	cin>>str;
	//pointer variable refers to address of string
	p = str;
	while(*p!='\0')               
	{
		cout<<p<<endl;
		p++;
	}

	//return statement
	return 0;
}
