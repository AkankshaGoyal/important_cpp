#include <iostream>
using namespace std;

struct Student
{
	int age;
	char first_name[51];
	char last_name[51];
	int standard;
};

int main()
{
	Student s1;
	cin >>s1.age;
	cin >>s1.first_name;
	cin >>s1.last_name;
	cin>>s1.standard;
	
	cout<<s1.age<<" "<<s1.first_name<<" "<<s1.last_name<<" "<<s1.standard;
	return 0;
}
