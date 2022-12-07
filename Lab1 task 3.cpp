#include<iostream>
using namespace std;
int main()
{
	int size = 5;
    int arrA[size],arrB[size],arrC[size];
    
    cout<<"First: items of array (arrA):"<<endl;
    for(int i=0;i<size;i++)
    {
	cout<<"Enter item#"<<i+1<<" value: ";
	cin>>arrA[i];
	}
	
	cout<<"Second: items of array (arrB):"<<endl;
    for(int i=0;i<size;i++)
    {
	cout<<"Enter item#"<<i+1<<" value: ";
	cin>>arrB[i];
	}
	

	
	for(int i=0;i<size;i++)
	{
		arrC[i] = arrA[i] + arrB[i];
		cout<<arrC[i]<<endl;

	}
	
	


return 0;
}

