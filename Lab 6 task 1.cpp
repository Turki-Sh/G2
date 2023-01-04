// ......
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

//int saralatitude = rand(),saralongitude = rand();
int saralatitude = rand();
int saralongitude = rand();

double calDistance(int x1,int x2, int y1, int y2); //Give random distance
int evaluateDistance(double Market1,double Market2,double Market3); //Evaluate the given distances

int main()
{
	srand (time(0));
	
	int market1x2 = rand();
	int market1y2 = rand();
	int market2x2 = rand();
	int market2y2 = rand();
	int market3x2 = rand();
	int market3y2 = rand();
	
	saralatitude = rand();
	saralongitude = rand();
	
	double distanceMarket1 = calDistance( saralongitude,  market1x2,  saralatitude,  market1y2);
	double distanceMarket2 = calDistance( saralongitude,  market2x2,  saralatitude,  market2y2);
	double distanceMarket3 = calDistance( saralongitude,  market3x2,  saralatitude,  market3y2);
	
	cout<<"Your current Location is: "<<endl;
	
	cout<<"longitude (X): "<<saralongitude<<endl;
	cout<<"latitude (Y): "<<saralatitude<<endl;
	
	int nearest = evaluateDistance( distanceMarket1,  distanceMarket2,  distanceMarket3);
	
	cout<<"Suptermarket #"<< nearest <<" is the nearest one. "<<endl;

	return 0;
}

double calDistance(int x1,int x2, int y1, int y2)
{
	double distance =  sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	return distance;
}

int evaluateDistance(double Market1,double Market2,double Market3)
{
	int best = 0;
	
	if(Market1 < Market2 && Market1 < Market3)
	{
		best = 1;
		return best;
	}
	if(Market2 < Market1 && Market2 < Market3)
	{
		best = 2;
		return best;
	}
	if(Market3 < Market2 && Market3 < Market1)
	{
		best = 3;
		return best;
	}
	
	return best;
}
