#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int x,y,s=0;
	cin>>x>>y;
	int *arr[x];
	while(x>0)
	{
		int n;
		cin >> n;
		arr[s]=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[s][i];
			
		}
		s++;
		
		x--;
	}
	while(y>0)
	{
		int a,b;
		cin >> a>>b;
		cout<<arr[a][b]<<endl;
		y--;
		
	}
	return 0;
}


	

   
	
	

