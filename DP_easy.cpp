#include<bits/stdc++.h>
using namespace std;
int mem[50][50];

int path (int m,int n)
{
    int tmp;
   if (m==1 || n==1){
    return 1;
   }
   if (mem[m][n]!=-1){
    return mem[m][n];
   }
   tmp = path(m-1,n) + path(m,n-1);
   mem[m][n] = tmp;
   return tmp;
}
int main ()
{
    int m,n;
    cin>>m>>n;
    memset(mem,-1,sizeof(mem));
    cout<<path(m,n)<<endl;
}
