#include <iostream>
using namespace std;


int max(int arr[],int n)
{
	int i,j;
	int res=0;
    int left,right;
    for( i=1;i<n-1;i++)
    {
      for(j=0;j<i;j++)
      {
	      left=arr[i];
	      left=max(left,arr[j]);
         

      }
         right=arr[i];
       for(j=i+1;j<n;j++)
        {
	      
           right=max(right,arr[j]);
        }


      res = res+(min(left,right)-arr[i]);
      return res;
 	
   }
     
}



int main()
{
	int arr[100];
    int n;
    cin>>n;
    for(int i =0;i<n;i++)
    {
	cin >> arr[i];
   }
   cout<<max( arr[100],n);
    
}
