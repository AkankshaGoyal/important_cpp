#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i,j;
	char arr[100];
	cin >> arr;
	int count;
	int count1=0;
	while(arr[count1]!='\0')
	{
		count1++;
	}
    int freq[100];
    
    for(i=0;i<count1;i++)
    {
    	freq[i]=1;
    	for(j=i+1;j<count1;j++)
    	{
    		if(arr[i]==arr[j])
    		{
    			count++;
		
			arr[j]='0';
		}
		count++;
		cout<<count;
		
		}
		
	}
	
    return 0;
}
