#include<iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   if(n%2==0 && n>1 && n<6)
   {
	  cout<<"Not Weird";
   }
   else if(n%2==0 && n >5 && n < 21)
   {
	    cout<<"Weird";
    }
   else if(n%2==0 && n >20) 
   {
      cout<<"Not Weird";	
   }
   else
    {
	cout<<"Weird";
}     
   return 0;
}
