

#include <iostream>

using namespace std;

int main()
{

int n, k, l, c, d, p, nl, np,minemam;
cin>>n>> k>> l>> c>> d>> p>> nl>> np;
int toast=(k*l)/nl;
int salt=p/np;
int limons=c*d;
minemam=min(salt,toast);
minemam=min(minemam,limons);
cout<<minemam/n<<endl;


    return 0;
}
