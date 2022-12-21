#include <iostream>
using namespace std;
int main()
{
	int size = 0;
	string temp;
	
	cout<<"Enter size of array: ";
	cin>>size;
	string list[size];
	
	cout<<"Enter the number of the array: "<<endl;
	for(int i=0;i<size;i++)
	{
	cout<<i+1<<": "; 
	cin>>list[i];
	}
	
	string first, second;
	
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			 
			if(list[j]>list[j+1])
			{
			 temp = list[j];
			list[j] = list[j+1];
			 list[j+1] = temp; 
			}
		}
		
	}
	
	cout<<"\n";
	
	for(int i=0;i<size;i++)
	{
		cout<<list[i]<<", ";
	}

	return 0;
}



	

	


