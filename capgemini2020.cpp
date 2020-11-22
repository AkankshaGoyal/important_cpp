#include <iostream>
using namespace std;

int main()
{
	int arr[100];
	int A[100], t,i;
	int B[100];
	int sum=0;
	cin >>t;
	for(i=0;i<t;i++)
	{
		cin>>arr[i];
		
	}
	
    for(i=1;i<t/2;i++)
	{
		A[i]=arr[i];
	}
	int n =t-1;
	for(i=1;i<t/2;i++,n>t/2)
	{
		sum=sum+A[i]*arr[n];
		n=n-1;
	}
	cout<<sum;

	return 0;
}
