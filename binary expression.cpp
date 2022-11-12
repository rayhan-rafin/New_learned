#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int n,i;
    vector<int>rem;
    cin>>n;
    //for (i=n;i!=0;i=i>>1){
    while(n){
        rem.push_back(n&1);
        n=n>>1;
    }
    for (i=(rem.size()-1);i>=0;i--){
        cout<<rem[i];
    }
    return 0;
}
