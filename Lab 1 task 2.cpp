#include<iostream>
using namespace std;
int main()
{
	int size = 5;
    int arrA[size],arrB[size],arrC[size*2];
    
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
	
	int j=size;
	
	for(int i=0;i<size;i++,j++)
	{
		arrC[i] = arrA[i];
		arrC[j] = arrB[i];
	}
	
	for(int i=0;i<size*2;i++)
	{
		cout<<arrC[i]<<endl;
	}


return 0;
}

