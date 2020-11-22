#include <iostream>
#include <string.h>
using namespace std;
int main()
{
   string message;
   char arr[100];
   cin >> arr;
   int b=0, c=0, d =0, f=0, g=0;
   int count1 = 0;
   while(arr[count1]!='\0')
   count1++;
   if(count1==0)
   {
       cout << "Invalid Input";
   }
   else{
  int count = 0;
  if(isdigit(arr[count])){
      cout<<0;
  }
  else{
  while(arr[count] != '\0'){
  char nameChar = arr[count];
  switch(nameChar){
      case 'A' :
      case 'a' :
      b = b+1;
      break;
      case 'E':
      case 'e' :
      c = c+1;
      break;
      case 'I':
      case 'i':
      d = d+1;
      break;
      case 'O':
      case 'o':
      f = f + 1;
      break;
      case 'U':
      case 'u':
      g = g+1;
      break;
  }
	count++;
  }
   cout<<"a:"<<b;
   cout<<"e:"<<c;
   cout<<"i:"<<d;
   cout<<"o:"<<f;
   cout<<"u:"<<g;
  }
}
   return 0;
}
