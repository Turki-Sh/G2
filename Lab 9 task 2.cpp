#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
	
	cout<<"\n\t[Start of Mark!!]\n";
	

	ofstream fill;
	fill.open("Sqrtit.txt");
	if(fill.is_open())
	{
	
	for(int i=10;i<=25;i++)
	{fill<<i<<"#"<<i*i<<"\n";}
	
	
	}
	
	else{"\n[Error File opening for write]";}
	fill.close();
	
	
	
	
	return 0;
}


