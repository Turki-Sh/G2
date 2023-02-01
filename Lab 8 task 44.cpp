#include <iostream>
#include <string>
using namespace std;

//Fun prototypes

int menu();
void reserve(bool **arr,int rows,int cols);
void available(bool **arr,int rows,int cols);
void display(bool **arr,int rows,int cols);
void go();
//end of prototypes

int main(){
	int choice;
	int rows=0,cols=0;
	string str;
	
	cout << "\n++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\n|+ Enter the number of rows in the plane: ";
	cin>>rows;
	cout<<"\n|+ Enter the number of seats in the row: ";
	cin>>cols;
	cout << "\n++++++++++++++++++++++++++++++++++++++++++++\n\n";
	
	bool **plane = new bool[rows][cols];

	
	do
	{
		
	if(system("cls")){system("clear");}	
	choice=menu();	
	
	switch(choice)
	{
	case 1:
	//reserve(plane,rows,cols);
	go();
	break;
	case 2:
	//available(plane,rows,cols);
	go();
	break;
	case 3:
	display(plane,rows,cols);
	go();
	break;
	case 4:	
	cout<<"\n|+ Thanks for using out program!! \t|";  go();
	break;
	default: cout<<"\nIncorrect menu option."; go();
	}	
			
	}while(choice != 4);






	return 0;
}

int menu(){
	int choice = 0;
	
	cout << "\n ++++++++++++++++++++++++++++++++++++++++++++" << "\n +            -== MAIN MENU ==-             +"
                <<"\n ++++++++++++++++++++++++++++++++++++++++++++" 
				<< "\n | 1. Reserve a seat                        |"
                 <<"\n | 2. Display the available seats           |"
                 <<"\n | 3. Display all the seats in the plane    |"
                 <<"\n | 4. Exit                                  |"
                 <<"\n ++++++++++++++++++++++++++++++++++++++++++++"
                <<"\n\n>> "; 
                
   	cin>>choice;
    return choice;
}//end of menu

void go(){string skip; cout<<"\nEnter any key to continue: "; cin>>skip;}

void reserve(bool **arr,int rows,int cols)
{
	
}

void available(bool **arr,int rows,int cols)
{
	
}

void display(bool **arr,int rows,int cols)
{
	for(int i=0;i<rows;i++)
	{
		cout<<"\t\n\t";
		for(int j=0;j<cols;j++)
		{
		cout<<arr[i][j]<<" ";	
		}	
	}
	
}

