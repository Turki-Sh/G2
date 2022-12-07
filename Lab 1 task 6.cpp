#include<iostream>
#include<string>
using namespace std;
int main()
{
	double pass = 0,inc = 0,fail = 0;
	int size = 0;
	
	cout<<"Enter number of students: ";
	cin>>size;
	
    double arrA[size];
	string arrB[size];
    
    
    for(int i=0;i<size;i++)
    {
	cout<<"Enter student #"<<i+1<<" Name: ";
	cin>>arrB[i];
	cout<<"Enter student #"<<i+1<<" Grade: ";
	cin>>arrA[i];
	}
	
	cout<<"Results:";
	int max = 0;
	for(int i=0;i<size;i++)
    {
    	if(arrA[i] >= arrA[max])
    	{max = i;}

	}
	
	cout<<"\nStudent with max mark is "<<arrB[max]<<" of mark "<<arrA[max];
	
	int total = 0;
	
	for(int i=0;i<size;i++)
    {
	  total += arrA[i];	
	}
	
	double avr = total/size;
	
	cout<<"\nStudents Average = "<<avr;
	
	cout<<"\nStudents with marks above average are: "<<endl;
	for(int i=0;i<size;i++)
	{
		if(arrA[i] > avr)
		{
			cout<<arrB[i]<<"\n";
		}
	}

	


return 0;
}

