#include<bits/stdc++.h>
using namespace std;
bool number[100001];

int main()
{
    int i,j,n,t;
    int sqrtN = sqrt(1000000);
    number[0] = true;
    number[1] = true;
    for (i=3; i<=sqrtN; i=i+2)
    {
        if (!number[i])
        {
            for (j=i*i; j<=1000000; j=j+i)
            {
                number[j]=true;
            }
        }
    }

    cin>>t;
    while(t--)
    {
        cin>>n;
        if (number[n]==false && (n==2 || n%2!=0))
        {
            cout<<n<<" is a prime number."<<endl;
        }
        else
        {
            cout<<n<<" is not a prime number."<<endl;
        }
    }


    return 0;
}
