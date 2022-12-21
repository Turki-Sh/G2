#include <iostream>
using namespace std;

int swap(int& one,int& two);
int main()
{
	int size = 0,temp = 0;
	bool ordered = true;
	size = 10;
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
				ordered = false;
				break;
			}
		}
		
	}
	
	if(ordered)
	{
		cout<<"ordered ascendingly.";
	}
	else
	{
		cout<<"unordered ascendingly";
	}

	return 0;
}


