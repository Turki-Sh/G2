#include <iostream>
using namespace std;

struct Fract
{
	int num;
	int deno;
};

int main()
{
	Fract frac1,frac2;
	
	cout<<"\n                                       Compute the sum of Fractions \n"<<endl;
	
	cout<<"Enter the Fraction 1: ";
	cin>>frac1.num; //Input num f1
	cin>>frac1.deno; //Input deno f1
	
	cout<<"Enter the Fraction 2: ";
	cin>>frac2.num; //Input num f2
	cin>>frac2.deno; //Input deno f2
	
	
	cout<<"\nResult: "<<(frac1.num*frac2.deno)+(frac2.num*frac1.deno) <<"/"<<frac1.deno*frac2.deno; //calc then print


	return 0;
}
