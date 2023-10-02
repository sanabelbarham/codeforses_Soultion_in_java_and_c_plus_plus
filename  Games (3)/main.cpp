

#include <iostream>

using namespace std;

int main()
{
int x,c=0;
cin>>x;//12
int target=x;//12

while(!(target>=1&&target<=5))
{
    target-=5;
    c++;

}
  c++;
  cout<<c;

    return 0;
}

}
