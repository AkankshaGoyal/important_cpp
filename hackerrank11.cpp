
#include<iostream>
using namespace std;


class student
{
    public:
    //data members 
    int n;
    int i,sum;
    int j,k;
    int grade;
    int tm[3];
    int scores[5];
    int count;
    void input()
    {
	cin>>n;
    for(i=0;i<n;i++)

    {
      sum = 0; 
	 for(j=0;j<5;j++)
     {
	   cin >>scores[j];
       sum=sum+scores[j];
     }
      tm[i] = sum;
     }
} 	
void calculateTotalScore()
{
    count=0;
	for(i=1;i<3;i++)
     {
	    if(tm[i]>tm[0])
       {
	       count=count+1;
       }   
    }
    grade=count;
    cout<<grade;
}
};

int main()
{
	
    student obj1;
    obj1.input();
    obj1.calculateTotalScore();
    return 0;
}

