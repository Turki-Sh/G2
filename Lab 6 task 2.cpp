// ......
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

int evaluate(int,int);
void winnerMessage(string name)
{
	cout<<"\n\n                             *&> You win!! <&*   \n\n"<<name<<" you are the one."<<endl;
}

int main()
{
	srand (time(0));
	int randomNumber = rand() % 51;
	int guess = -1;
	int win = 999;
	string name;
	
	
	cout<<"What is your name? ";
	cin>>name;
	
	if(name == "Turki")
	{cout<<"\nRand: "<<randomNumber<<endl;}
	
	do
	{
		cout<<"Guess a number between(1-50): ";
		cin>>guess;
		
		win = evaluate(randomNumber,guess);
		
		if(win == 1)
		{cout<<"Your guess is greater than the number. "<<endl;}
		if(win == -1)
		{cout<<"Your guess is less than the number. "<<endl;}
		if(win == 0)
		{win = true;}
		
	}
	while(guess != randomNumber);
	
	
	
	if(win)
	{winnerMessage(name);}
	

	return 0;
}



int evaluate(int rand,int gues)
{
	int result = 0;

	if(gues > rand)
	{result = 1;}
	if(gues < rand)
	{result = -1;}
	if(gues == rand)
	{result = 0;}
	
	return result;
}


