//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//int main()
//{
//	int n,q;
//    cin >> n;
//	vector<int> g1;
//   for(int i=1;i<=n;i++)
//    {
//	g1.push_back(i);
//    }
//    for(auto it = g1.begin();it!=g1.end();++it)
//     {
//	    cout<<*it;
//     }
//    return 0;
//}
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
//int main()
//{
//    // declaration of vector container
//    vector<string> myvector{ "This", "is",
//                             "Geeksforgeeks" };
// 
//    // using begin() to print vector
//    for (auto it = myvector.begin();
//         it != myvector.end(); ++it)
//        cout << ' ' << *it;
//    return 0;
//}
int main() {
  int n,i=0;
  cin>>n;
  vector  <int> v(n);
  while(n--){
  cin >>  v[i++];  
  }
  int p,s,e;
  cin >>  p ;
  v.erase(v.begin()+p-1);
  cin >>  s >>  e ;
  v.erase(v.begin()+s-1,v.begin()+e-1);
  i=0;
  cout  <<  v.size()  <<endl;
  while(v.size()!=i){
    cout  <<  v[i++]  <<  " ";
  }
  return  0;
}
