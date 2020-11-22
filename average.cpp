#include <iostream>
using namespace std;

int main()
{
	int weight[100]={30,40,50,60,70,80,90};
	int data[100]={1,2,3,4,5,6,7};
	int wdata=0;
	int sum=0;
	int average;
	int arrsize1= sizeof(weight)/sizeof(weight[0]);
	int arrsize2 = sizeof(data)/sizeof(data[0]);
	for(int j = 0; j < arrsize1; j++)
	{
		wdata += weight[j]*data[j];
	}
	for(int i=0;i<arrsize2;i++)
	{
		sum=sum+data[i];
	}
	average = (wdata)/(sum);
	cout<<average;

	return 0;
}
