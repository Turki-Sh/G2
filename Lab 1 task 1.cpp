#include<iostream>
using namespace std;
int main()
{
	int size = 0;
	int sum = 0,avrg = 0,max = 0,min = 0;
	cout<<"Enter your array size: ";
	cin>>size;
	
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
	cout<<"Enter item#"<<i+1<<" value: ";
	cin>>arr[i];
	}
	
	cout<<"Results: "<<endl;
	

	max = arr[0];
	min = arr[0];
	
	for(int i=0;i<size;i++)
    {
    	sum += arr[i];
	}
	
	for(int i=1;i<size;i++)
    {
    	if(max < arr[i])
    	{max = arr[i];}
    	
    	if(min > arr[i])
    	{min = arr[i];}
	}
	
	avrg = sum / size;
	cout<<"Sum of numbers = "<<sum;
	cout<<"\nAverage of numbers = "<<avrg;
    cout<<"\nMax number = "<<max;
    cout<<"\nMin number = "<<min;


return 0;
}

