//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const int mx=101000;
int dp[mx];

int a, b, c, d, e, f;
int fn(int n)
{
    if (n == 0) return a % 10000007;
    if (n == 1) return b % 10000007;
    if (n == 2) return c % 10000007;
    if (n == 3) return d % 10000007;
    if (n == 4) return e % 10000007;
    if (n == 5) return f % 10000007;
    if(dp[n]!=-1)
    {
        return (dp[n] % 10000007);
    }
    return dp[n]=(fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)) % 10000007;
}
int main()
{
    optimize();
    int i,j,k=1,n,t,x,y,z;
    string s;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));

        cin>>a>>b>>c>>d>>e>>f>>n;
        a=a%10000007;
        b=b%10000007;
        c=c%10000007;
        d=d%10000007;
        e=e%10000007;
        f=f%10000007;
        cout<<"Case "<<k<<": "<<fn(n)%10000007<<endl;
        k++;
    }











    return 0;
}
