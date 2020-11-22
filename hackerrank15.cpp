#include <iostream>
#include  <cstring>
using namespace std;

int main()
{
	string str;
    int l=str.length();
    string even;
    string odd;
    cin >> str;
    for(int i=0;i<str.length();i++)
    {
	     if(i%2==0)
         {
	         even = str[i];
         }
         
         else
         {
	           odd=str[i];
          }
     }
     for(int i =0;i<even.length();i++)
        {
	          cout<<even[i];
        }
        cout<<endl;
     for(int j=0;j<odd.length();j++)
     {
	
           cout<<odd[j];
     }
    return 0;
}
