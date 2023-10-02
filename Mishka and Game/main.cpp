#include <iostream>

#include <vector>
using namespace std;

int main()
{
int t,n,m,mishka=0,chris=0;
cin>>t;
while(t--){

    cin>>n>>m;
    if(n>m)
    mishka++;
    else if(m>n)
    chris++;


    }
    if(mishka>chris)
    cout<<"Mishka";
    else if(chris>mishka)
    cout<<"Chris";
    else if(mishka==chris)
    cout<<"Friendship is magic!^^";



    return 0;
}
