#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i,j;
    vector<int>arr;
    cin>>n;
    int ar[n+1];
    for (i=0;i<n;i++){
        ar[i] = 2;
    }
    for (i=2;i<=n;i++){
        if (ar[i]==2){
            ar[i]=1;
            arr.push_back(i);
            for (j=2*i;j<=n;j=j+i){
                ar[j] = 0;
            }
        }
    }
    for (i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
