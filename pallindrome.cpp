#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   char  message[100];
   cin >> message;
   int flag=0;
   int str=strlen(message);
   cout<<str;
   for(int i=0;i<str;i++)
   {
   	  if(message[i]!=message[str-i-1])
   	  {
   	  	   flag=1;
   	  	   break;
		 }
		 
   }
   if(flag==1)
   {
   	cout<<"the string is not pallindrome";
   }
   else
   {
   	  cout<<"the string is  pallindrome";
   }
    return 0;
}
