#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char arr[100];
	char reverse[100];
	cin >> arr;
	int i;
	int len,h;
	int flag=1;
	int count1;
	while(arr[count1]!='\0')
	{
		count1++;
	}
	len =count1;
	for(i=0;i<len;i--)
    if(arr[i]!=arr[len-i-1])
    {
    	flag=1;
    	break;
	}
	if(flag==0)
	{
		cout<<"the number is not pallindrome";
	}
	else
	{
		cout<<"the number is pallindrome";
	}
    return 0;
}
