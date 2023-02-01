#include <iostream>
#include <string>
using namespace std;

double BMI(double *weight,double *height);

int main(){
	
double *weight=new double, *height=new double, *bmii = new double;
string str;
	
	
	while(*weight >= 0 && *height >= 0)
	{
		
	if(system("cls")) {system("clear");}	
	
	cout<<"\n\n\t\t\t &The BMI CALC& (Enter a negtive Num to exit) ";
	
	cout<<"\n\n Enter your Weight: ";
	cin>>*weight; 

	cout<<"\n\n Enter your Height: ";
	cin>>*height; 

	*bmii = BMI(weight,height);
	
	if(*bmii < 25 && *bmii > 19)
	{
		cout<<"\n\n You are: Healthy!! With a BMI of: ("<<*bmii<<") 19-25";
	}
	else
	{
		if(*bmii > 25) {cout<<"\n\n+\t You are: UnHealthy!! With a BMI of: ("<<*bmii<<") Thus you are over the weight range over 25. \t+";}
		else {cout<<"\n\n+\t You are: UnHealthy!! With a BMI of: ("<<*bmii<<") Thus you are under the weight range under 19. \t+";}
	}
	
	cout<<"\n\n#Enter any KEY to con->: ";
	cin>>str;
	
	}	
	
	delete bmii,weight,height;
	
	
	
	return 0;
}

double BMI(double *weight,double *height){
	
	double bmii = (*weight)  /  ((*height)*(*height));
	return bmii;
	
}
