#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char arr[100];
	string message;
	cin >>message;
	string word="";
	int i;
	int str= message.length();
	for(int i = 0;i<str;i++)
	{
		if(message[i]==word)
		{
			cout<<word;
		}
		else
		 {
		 	word=word+message[i];
		 }
		 
	}
	
	return 0;
	
	
}
