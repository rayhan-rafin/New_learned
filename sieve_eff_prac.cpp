#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i,j;
    vector<int>arr;
    cin>>n;
    int sqrtN = sqrt(n);
    int ar[n+1];
    for (i=1; i<=n; i=i+2)
    {
        ar[i] = 2;
        ar[i-1] = 0;
    }
    ar[1] = 0;
    ar[2] = 1;
    for (i=3; i<=sqrt(n); i=i+2)
    {
        if (ar[i]==2)
        {
//            ar[i]=1;
//            arr.push_back(i);
            for (j=2*i; j<=n; j=j+i)
            {
                ar[j] = 0;
            }
        }
    }
    for (i=0; i<=n; i++)
    {
        if (ar[i]!=0)
        {
            ar[i]=1;
            arr.push_back(i);
        }
    }
    for (i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
