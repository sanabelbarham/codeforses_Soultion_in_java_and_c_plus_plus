#include <iostream>

#include <vector>
using namespace std;

int main()
{
int t,n,evensum,oddsum,rest;
cin>>t;
while(t--){
    rest=0;
    evensum=0;
    oddsum=0;
    int j=2;
    cin>>n;
    vector<int>even;
    vector<int>odd;
    if(n%4!=0)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<(n/2-1);i++){
            evensum+=j;
                oddsum+=(j-1);
            even.push_back(j);
            odd.push_back(j-1);
            j+=2;
        }
         evensum+=j;
           even.push_back(j);
           rest=evensum-oddsum;
            odd.push_back(rest);
            for(int i=0;i<even.size();i++)
            cout<<even[i]<<" ";

            for(int i=0;i<odd.size();i++)
            cout<<odd[i]<<" ";
            cout<<endl;


    }

}

    return 0;
}
