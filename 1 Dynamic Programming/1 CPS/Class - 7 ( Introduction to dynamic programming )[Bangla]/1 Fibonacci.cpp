//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const int mx=1e6;
int dp[mx];

int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    return dp[n]=(fibo(n-1)+fibo(n-2));

}

int main()
{
    //optimize();
    int i;
    for(i=0; i<1000; i++)
    {
        dp[i]=-1;

    }
    while(1)
    {
        int x;
        cin>>x;
        cout<<fibo(x)<<endl;
    }












    return 0;
}
