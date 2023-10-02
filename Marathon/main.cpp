#include <iostream>
using namespace std;

int main() {
    int t,a,b,c,d,tumoor,count=0;
    cin >> t;

    while (t--) {
        count=0;
    cin>>a;
    tumoor=a;
    cin>>b>>c>>d;
    if(b>a)
    count++;
    if(c>a)
    count++;
    if(d>a)
    count++;
cout<<count<<endl;

}
return 0;
}
