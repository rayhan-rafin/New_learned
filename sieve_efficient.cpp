#include<bits/stdc++.h>
using namespace std;
bool isNotPrime[51];

int main ()
{

    int i,j,s=0, n=50;
    int sqrtN = sqrt(n);
    vector<int> primeNumbers;
    isNotPrime[0]=true;
    isNotPrime[1]=true;
    primeNumbers.push_back(2);
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
    for(int i=3;i<=sqrtN;i+=2)
    {
        if(isNotPrime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i*2)
            {
                isNotPrime[j]=true;
            }
        }
    }

    for (i=3; i<=n; i+=2)
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


    cout<<primeNumbers.size()<<endl;
//    int x;
//    cin>>x;
//    if(x==2)
//        cout<<0;
//    else if(x%2==0)
//        cout<<1;
//    else
//    cout<<isNotPrime[x]<<endl;
    return 0;
}
