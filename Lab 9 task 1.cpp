#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int menu();
void go(){
	string som;
	cout<<"\n\n| Enter anything to Continue -->: ";
	cin>>som;}

int main(){
	int choice = 0,count = 3,size = 3;
	double avg = 1.0,total = 1.0;
	double marks[size];
	
	cout<<"\n\t[Start of Mark!!]\n";
	
	
	ifstream read;
	read.open("Marks.txt");
	if(read.is_open())
	{
	for(int i=0;i<size;i++)
	{read>>marks[i];}
	read>>avg;	
	}
	else{"\n[Error File opening for read]";}
	go();
	read.close();
	
	
	
	do{
		
	if(system("cls")){system("clear");}
	choice = menu();
	switch(choice)
	{
		case 1: //print marks and avg
		for(int i=0;i<size;i++)
		{cout<<"\nMark "<<i+1<<": "<<marks[i];}
		cout<<"\nAverage: "<<avg;	
		go();
		break;
		case 2: //Take marks and comp
		for(int i=0;i<size;i++)
		{cout<<"\nMark "<<i+1<<": ";cin>>marks[i]; total+=marks[i];}
		avg = total/count;
		go();
		break;
		case 3:
		"\n\t[EXITING]\n";
		break;
		default: "\nWrong input!!";
	} 
	
	}while(choice != 3);


	
		
	ofstream fill;
	fill.open("Marks.txt");
	if(fill.is_open())
	{
	for(int i=0;i<size;i++)
	{fill<<marks[i]<<"\t";}
	fill<<avg;	
	}
	else{"\n[Error File opening for write]";}
	fill.close();
	
	
	cout<<"\n\n\t[Done..]";
	
	return 0;
}

int menu(){
	int choice;							 
	cout<<"\n\n\t++++++++++++++++++Menu+++++++++++++++++++"<<"\n\t|1. Print Marks\t\t\t\t|"<<"\n\t|2. Fill Marks\t\t\t\t|"<<"\n\t|3. Exit\t\t\t\t|"<<"\n\t+++++++++++++++++++++++++++++++++++++++++"<<"\n>> ";
	cin>>choice;
	return choice;
	
}
