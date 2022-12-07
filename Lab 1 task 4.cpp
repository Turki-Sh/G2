#include<iostream>
using namespace std;
int main()
{
	int size = 0;
	
	cout<<"Enter your original array size: ";
	cin>>size;
	
    int arrA[size],arrB[size];
    
    
    
    cout<<"Enter original array items: "<<endl;
    for(int i=0;i<size;i++)
    {
	cout<<"Enter item#"<<i+1<<" value: ";
	cin>>arrA[i];
	}
	
	for(int i=0;i<size;i++)
	{
		arrB[i] = arrA[size-i-1];
	}
	


	

	cout<<"Index Original Array Reversed Array";
	for(int i=0;i<size;i++)
	{
		cout<<"\n"<<i<<"\t"<<arrA[i]<<"            \t"<<arrB[i];

	}
	
	


return 0;
}

