#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
	vector<int> g1;
	stringstream ss(str);
	char ch;
	int temp;
	while(ss >> temp)
	{
		g1.push_back(temp);
		ss>>ch;
	}
	return g1;
}

int main()
{
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for(int i=0;i < integers.size();i++)
	{
		cout<<integers[i]<<"\n";
	}
	return 0;
}
