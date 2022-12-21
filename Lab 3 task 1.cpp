#include <iostream>
using namespace std;

int swap(int& one,int& two);
int main()
{
	int size = 0,temp = 0;
	
	cout<<"Enter size of array: ";
	cin>>size;
	int list[size];
	
	cout<<"Enter the number of the array: "<<endl;
	for(int i=0;i<size;i++)
	{
	cout<<i+1<<": "; 
	cin>>list[i];
	}
	
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(list[j]<list[j+1])
			{
			 swap(list[j],list[j+1]);
			}
		}
		
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<list[i]<<", ";
	}

	return 0;
}

int swap(int& first,int& second)
{
	int temp; 
	temp = second;
	second = first;
	first = temp;
	
	return first,second;
}
/*
	temp = list[i];
	list[i] = list[j];
	list[j] = temp; 
*/
