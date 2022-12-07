#include<iostream>
using namespace std;
int main()
{
	double pass = 0,inc = 0,fail = 0;
	int size = 0;
	
	cout<<"Enter number of students: ";
	cin>>size;
	
    double arrA[size];
    
    
    
    cout<<"Enter students marks: "<<endl;
    for(int i=0;i<size;i++)
    {
	cout<<"Enter Grade#"<<i+1<<" : ";
	cin>>arrA[i];
	}
	
	cout<<"Results:";
	
	for(int i=0;i<size;i++)
    {
    	
	if(arrA[i] >= 60 && arrA[i] <= 100)
	{pass = pass + 1;}
	
    if(arrA[i] < 60 && arrA[i] >= 0)
	{fail = fail + 1;}
	
	if (arrA[i] < 0)
	{inc = inc + 1;}
	}
	
	cout<<"\nPercentage of passed students= "<<(pass/size)*100<<"%";
	cout<<"\nPercentage of failed students= "<<(fail/size)*100<<"%";
	cout<<"\nPercentage of incorrect students= "<<(inc/size)*100<<"%";

	


return 0;
}

