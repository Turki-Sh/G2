#include <iostream>
using namespace std;

void update1(int *x, int *y)
{
	//update 1
	*x -= 10;
	*y += 50;
}

void update2(int &x, int &y)
{
	//update 2
	x *= 2;
	y /= 10;
}

int main()
{
	cout<<"\n\n The program START!! \n"<<endl;
	
	int x = 0, y = 0;
	
	cout<<"Enter x: ";
	cin>>x;
	
	cout<<"Enter y: ";
	cin>>y;
	
	cout<<"\n\n\nX before update: "<<x<<"\nY before update: "<<y; //print before update
	

	update1(&x,&y);
	cout<<"\n\n\nX after update1: "<<x<<"\nY after update1: "<<y; //print after update
	
	
	
	
	update2(x,y);
	cout<<"\n\n\nX after update2: "<<x<<"\nY after update2: "<<y; //print after update
	
}

