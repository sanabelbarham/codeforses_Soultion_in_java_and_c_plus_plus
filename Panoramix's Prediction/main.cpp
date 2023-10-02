
#include <iostream>

using namespace std;

int main()
{
int n,m;
cin>>n>>m;
if(n==2)
{
    if(m==3)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else
    {
        cout<<"NO"<<endl;
        return 0;

    }
}
else
{
   bool test=false;
   int i=n;
       i+=2;
   while(!test){
       int c=0;
     for(int j=1;j<=i;j++)
       {
           if(i%j==0)
           c++;
       }
       if(c==2){

           if(i==m){
           cout<<"YES"<<endl;
           test=true;
           }
           else
           {
           cout<<"NO"<<endl;
           break;

           }
       }

       else
       {
           test =false;
           i+=2;
       }
   }
}

    return 0;
}
