
#include <iostream>

using namespace std;

int main()
{
int t,x,c,j;
cin>>t;
while(t--){
   c=0;
   cin>>x;
   int i=x%10;
 c+=((i-1)*10);
   int jc=0;

   while(x!=0){
       x/=10;
       jc++;
        c+=(jc);

   }

   cout<<c<<endl;
}


    return 0;
}
