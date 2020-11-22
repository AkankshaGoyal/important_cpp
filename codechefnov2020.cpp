#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int adaAndDishes(int arr[], int n){
	int a,b,dummy=0;
		a = arr[0];
		int m = 1;
		b = arr[m];
		while( m < n){
	    if(a>b){
	    	dummy += b;
	    	a = a-b;
			b = arr[++m];
			if(a==0) {
				dummy+=b;
			}
			if(b==0) {
				dummy+=a;
			}
		}
	    else if(a<b){
			dummy += a;
			a = arr[++m];
			b = b-a;
		}
		else if(a==b){
			dummy+=a;
			a = a-b;
			b = arr[++m];
			if(a==0){
				dummy+=b;
			}
			break;
		}
		else{
			cout<<"dummy not calculated";
		}
		}
		return dummy;
	}
int main()
{
	int t;
	int i;
	cout<<"print the testcase"<<endl;
	cin>>t;
	int arr[100];
	while(t>0)
	{
		int n;
		cin >>n;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];	
		}
		sort(arr,arr+n,greater<int>());
		int dummy = adaAndDishes(arr,n);
		cout<<dummy;
        t--;
   }
        return 0;
   }
  
       
	
	
	
	

