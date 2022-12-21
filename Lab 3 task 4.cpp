#include <iostream>
#include <string>
using namespace std;

int main()
{
	int size = 0,temp = 0,counter = 0;
	string key;
	
	cout<<"Enter size of array: ";
	cin>>size;
	string list[size];
	
	cout<<"Enter the number of the array: "<<endl;
	for(int i=0;i<size;i++)
	{
	cout<<i+1<<": "; 
	cin>>list[i];
	}
	
	cout<<"Enter the name you want to be counted: ";
	cin>>key;
	
	for(int i=0;i<size;i++)
	{
		if(list[i] == key)
		{
			cout<<"At index: "<<i;
			break;
		}
	}
	


	return 0;
}
