#include <iostream>
using namespace std;

struct Rectangle
{
	double width;	
	double height;
	double area;
};

double computeArea(double w,double h); //By Overloaded and passing members of Rectangle 
Rectangle computeArea(Rectangle rec); //By Value 
//void computeArea(Rectangle &rec); //By refrence 

int main()
{
	Rectangle rec;
	cout<<"\n                                       Compute area of Rectangle \n"<<endl;
	
	cout<<"Enter the Width: ";
	cin>>rec.width; //Input width 
	
	cout<<"Enter the Height: ";
	cin>>rec.height; //Input height
	
	//rec.area = computeArea(rec.width,rec.height); //callout
	rec = computeArea(rec); //callout
	//computeArea(rec); //callout 
	
	cout<<"\n----------------------------"<<endl;
	
	cout<<"\nThe Area of the rectangle is: "<<rec.area<<endl; //Print area

	return 0;
}


double computeArea(double w,double h)
{
	double area = w * h; //compute area
	return area; //return the area
}



Rectangle computeArea(Rectangle rec)
{
	/*
	Rectangle temp; //make a temp to return it
	temp.width = rec.width;
	temp.height = rec.height;
	temp.area = temp.width * temp.height;
	return temp;	
	*/
	
	rec.area = rec.width * rec.height;
	return rec;
}


/*
void computeArea(Rectangle &rec)
{
	//Rectangle temp;
	//temp.width = rec.width;
	//temp.height = rec.height;
	rec.area = rec.width * rec.height;	
}
*/
