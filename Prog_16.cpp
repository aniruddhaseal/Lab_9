#include <iostream>    

using namespace std;       

int main()   
{
    //Input
    char str[20], *p;
    cout<<"Input about 10 characters of string\n";
    cin>>str;
    
    //pointer variable refers to address of string
    p = str;
    //show string by shifting top character of string to right
    while(*p!='\0')
    {
        p++;
    }
    //Printing untill the full string
    while((p--)!=str)
    {
        cout<<p<<endl;
    }
    return 0;
}
