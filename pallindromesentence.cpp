#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;


bool checkpalin(string word)
{
	int n=word.length();
    transform(word.begin(), word.end(), word.begin(), ::tolower);
	
	for(int i=0;i<n;i++,n--)
	
		if(word.at(i) != word.at(n-1))
		
			return false;
			
	  return true;
			
		
}

int countpallindrome(string str)
{
	str = str+" ";
	string word = "";
	int count=0;
    
	for(int i=0;i<str.length();i++)
	{
		char ch = str.at(i);
		if(ch !=' ')
		 
		    word=word+ch;
		
		else {
			
			if(checkpalin(word))
			    count++;
			    word = "";
			   
		}
		
		
	}
	return count;
	 
}


int main()
{
	
    cout<<countpallindrome("arora madam is good")<<endl;
    return 0;

}
