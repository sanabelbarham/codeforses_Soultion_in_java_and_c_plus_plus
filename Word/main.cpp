/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
 #include <cctype>

using namespace std;

int main()
{
string s;
cin>>s;
int upper=0,lower=0;
string result=" ";
for(int i=0;i<s.length();i++)
{
    if(isupper(s[i]))
    upper++;
    else
    lower++;
}
if(upper>lower)
{
    for(int i=0;i<s.length();i++)
{
      result+= toupper(s[i]);

}
}
else
{
        for(int i=0;i<s.length();i++)
{
   result+= tolower(s[i]);


}
}
cout<<result;

    return 0;
}
