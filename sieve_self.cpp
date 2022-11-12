#include<bits/stdc++.h>
using namespace std;
bool isNotPrime[11];

int main ()
{

    int i,j,s=0, n=10;
    vector<int> primeNumbers;
    isNotPrime[0]=true;
    isNotPrime[1]=true;
//    for (i=2; i<=n; i++)
//    {
//        for (j=2; j<=sqrt(i); j++)
//        {
//            if (i%j==0)
//            {
//                isNotPrime[i]=true;
//                break;
//            }
//        }
//    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(isNotPrime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                isNotPrime[j]=true;
            }
        }
    }

    for (i=0; i<=n; i++)
    {
        if (isNotPrime[i]==0)
        {
            primeNumbers.push_back(i);
        }
    }
    for (i=0; i<primeNumbers.size(); i++)
    {
        cout<<primeNumbers[i]<<endl;
    }


    //cout<<primeNumbers.size()<<endl;
//    int x;
//    cin>>x;
//    cout<<isNotPrime[x]<<endl;
    return 0;
}
