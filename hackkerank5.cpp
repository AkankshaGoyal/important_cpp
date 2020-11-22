//#include <iostream>
//using namespace std;
//
//void reverse(int arr[],int start,int end)
//{
//	while(start<end)
//	{
//	int temp;
//	temp = arr[start];
//	arr[start] = arr[end];
//	arr[end] =temp;
//	start++;
//	end--;
//}
//}
//void printarr(int arr[],int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//}
//
//
//int main()
//{
//	int t;
//	int i;
//	int arr[t];
//	cin >> t;
//    for( i=0;i<t;i++)
//    {
//    	cin >> arr[i];
//	}
//    reverse(arr,0,t-1);
//    printarr(arr,t);
//   return 0;
//}
#include <iostream>

#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int a[10000];
	int n;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		
	}
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
