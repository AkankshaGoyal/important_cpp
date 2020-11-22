#include <iostream>
#include <string>
using namespace std;


class geeks
{
	private:
		int age;
		string first_name;
		string last_name;
		int standard;
    public:
    void setage(int s)
    {
    	age=s;
	}
	void setfirst_name(string f)
	{
		first_name=f;
	}
	void setlast_name(string l)
	{
		last_name =l;
	}	
    void setstandard(int st)
	{
		standard =st;
	}
	

	

	int getage()
	{
		return age;
	}

	string getfirst_name()
	{
		return first_name;
	}	
   string getlast_name()
	{		return last_name;
	
    }
	int getstandard()
	{
		return standard;
	}
	

};

int main()
{
	geeks myobj;
    int a,d;
    string b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
	myobj.setage(a);
	cout<<myobj.getage()<<endl;
	myobj.setlast_name(c);
	cout<<myobj.getlast_name();
    cout<<" ,";
	myobj.setfirst_name(b);
	cout<<myobj.getfirst_name()<<endl;
    myobj.setstandard(d);
    cout<<myobj.getstandard();
    cout<<"\n";
	cout<<myobj.getage();
    cout<<",";
	cout<<myobj.getfirst_name();
    cout<<",";
    cout<<myobj.getlast_name();
    cout<<" ,";
	cout<<myobj.getstandard();
	return 0;
	
	
}


