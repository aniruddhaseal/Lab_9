include<iostream>   

using namespace std;   

int main()
{
	int arr[10],*p;
	ptr = arr;
	//asks user to enter array of integers
	cout<<"Enter an array of integers: "<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}

	//displays the array using normal index method
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
	}

	//displays the array using pointer method
        for(int i=0;i<10;i++)
        {
        	cout<<*(p+i)<<endl;
        }

	//return statement
	return 0;
}

