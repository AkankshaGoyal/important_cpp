#include <iostream>
using namespace std;



 int max_of_four(int e,int f,int g ,int h)
 {
 	if(e >f && e>g && e>h )
 	{
 		return e;
	 }
	 else if(f>e &&f>g &&f>h)
	 {
	 	return f;
	 }
	 else if(g>h &&g>e&&g>f)
	 {
	 	return g;
	 }
	 else
	 {
	 	return h;
	 }
 }




int main()
{
	int a,b,c,d;
	cin >>a>>b>>c>>d;
	int ans=max_of_four(a,b,c,d);
	cout<<ans;
}
