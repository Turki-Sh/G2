#include<iostream>
using namespace std;
int main()
{
	int week = 4 , days = 7;
	double list[week][days];
	
	cout<<"Please enter the rainfall rate for 4 week ";
	for(int i=0;i<week;i++)
	{
		cout<<"\nweek#"<<i+1<<"\t";
		for(int j = 0; j < days ;j++)
		{
		cout<<" Day#"<<j+1<<": ";
		cin>>list[i][j];
		}
		
	}
	
	double sum1 = 0 , sum2 = 0 , sum3 = 0,sum4 =0;
	for(int j = 0; j < days ;j++)
	{
	sum1+= list[0][j];
	sum2+= list[1][j];
	sum3+= list[2][j];
	sum4+= list[3][j];
	}
	
	double avr[4];
	
	avr[0] = sum1/days;
	avr[1] = sum2/days;
    avr[2] = sum3/days;
    avr[3] = sum4/days;
    
	cout<<"Classification for each week: ";
	
	for(int i=0;i<week;i++)
	{
		cout<<"\nweek#"<<i+1<<": ";
		if(avr[i] >= 6)
		{cout<<"High ("<<avr[i]<<")";}
		else if(avr[i] < 6 && avr[i] < 3)
		{cout<<"Medium ("<<avr[i]<<")";}
		else
		{cout<<"Low ("<<avr[i]<<")";}
	}


return 0;
}

