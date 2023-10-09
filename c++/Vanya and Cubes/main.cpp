#include <iostream>

using namespace std;

int main()
{
    int n,sum=0,c=0,test;
    cin>>n;
    test=n;
    for(int i=1;i<=n;i++){
        sum+=i;
        if(sum<=test){
            c++;
            test-=sum;
        }
        else
        {
            cout<<c<<endl;
            return 0;
        }
    }
    cout<<c<<endl;


    return 0;
}
