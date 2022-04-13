//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;


const int MX = 1e7 + 123;

int ans[MX];
bitset<MX> is_prime;
vector<int> prime;

void primeGen ( int n )
{
    //n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;

    for ( int i = 3; i * i <= n; i += 2 )
    {
        if ( is_prime[i] == 1 )
        {
            for ( int j = i * i; j <= n; j += ( i + i ) )
            {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[2] = 1;
    prime.push_back (2);

    for ( int i = 3; i <= n; i += 2 )
    {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}

int n, k;
int dp[260][1300][20];//position ,sum ,k

int f(int i, int sum, int cnt)
{
    if (sum == n && cnt == k )
    {
        return 1;

    }
    if (sum > n || cnt > k || prime[i] > n)
    {
        return 0;
    }

    if (dp[i][sum][cnt] != -1)
    {
        return dp[i][sum][cnt];
    }

    ll ans = 0;

    ans = ans + f(i + 1, sum + prime[i], 1 + cnt);

    ans = ans + f(i + 1, sum, cnt);

    return dp[i][sum][cnt] = ans;






}





void solve()
{

    int i, j, m, x, y, z, c = 0, cnt = 0, sum = 0;
    string s;
    int lim = 1500;
    primeGen ( lim);

    while (cin >> n >> k)
    {
        if (n == 0 && k == 0)
            break;
        memset(dp, -1, sizeof(dp));
        cout << f(0, 0, 0) << endl;
    }


















}



int main()
{

    Alhamdulillah;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;

}