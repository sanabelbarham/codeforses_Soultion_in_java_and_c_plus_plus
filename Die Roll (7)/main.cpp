
#include <iostream>

using namespace std;

int main()
{
 int n,k,num,c=0;
 cin>>n>>k;
 for(int i=0;i<n;i++)
 {
     cin>>num;
     if(num+k<=5)
     c++;
 }
 if(c>=3)
 cout<<c/3;
 else
 cout<<"0";


    return 0;
}
