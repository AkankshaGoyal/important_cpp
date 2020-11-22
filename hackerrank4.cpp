#include <iostream>
#include <cstdlib>
using namespace std;



void update(int *a,int *b)
{
   int temp=*a;
   *a =*a + *b;
   *b =  abs(temp -*b);
   
	
}



int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	int *pa= &a;
	int *pb=&b;
	update(pa,pb);
	cout<<a<<endl;
	cout<<b<<endl;
}
