/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int a,b,fashion=0,left=0;

cin>>a>>b;
while(a>0&&b>0){
    fashion++;
    a--;
    b--;
}
while(a>1)
{
    a-=2;
    ++left;

}
while(b>1)
{
    b-=2;
    ++left;

}
cout<<fashion<<" "<<left<<endl;

    return 0;
}
