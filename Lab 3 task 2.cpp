#include <iostream>
using namespace std;

int main()
{
	int size = 0,temp = 0,counter = 0, key = 0;
	
	cout<<"Enter size of array: ";
	cin>>size;
	int list[size];
	
	cout<<"Enter the number of the array: "<<endl;
	for(int i=0;i<size;i++)
	{
	cout<<i+1<<": "; 
	cin>>list[i];
	}
	
	cout<<"Enter the number you want to be counted: ";
	cin>>key;
	
	for(int i=0;i<size;i++)
	{
		if(list[i] == key)
		{
			counter++;
		}
	}
	
	cout<<"Number of times "<<key<<" occurs is "<<counter<<" . ";


	return 0;
}


