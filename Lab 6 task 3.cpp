// ......
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

bool isPalindrome(string key)
{
	bool isPalindrome = false;
	string reverse = key;
	int len = key.length();
	
	for(int i=0,h = len-1;i<len;i++,h--)
	{
	 reverse[i] = key[h];	
	}

	if(key == reverse)
	{
		
      isPalindrome	= true;
	}
	
	return isPalindrome;
}

int main()
{
	string key;
	string reverse;
	
	cout<<"Input: ";
	cin>>key;
	//cout<<"Len: "<<len<<endl;
	//cout<<"\nKey: "<<key;
	//cout<<"\nRev: "<<reverse;
	
	bool is = isPalindrome(key);
	
	if(is)
	{
	 cout<<"it is Palindrome. ";	
	}
	else
	{
	 cout<<"it is not Palindrome";
	}

	return 0;
}



