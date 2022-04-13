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

const int mx = 1e6;
ll a[mx];
ll dp[mx];
ll n, k;

ll f(ll i)
{
	if (i == n)
	{
		return 0;
	}
	if (dp[i] != -1)
	{
		return dp[i];
	}

	ll ans = 1e9;


	for ( int j = 1; j <= k ; j++)
	{
		if (i + j <= n)
		{
			ans = min(ans, abs(a[i] - a[i + j]) + f(i + j));
		}


	}
	return dp[i] = ans;




}



void solve()
{

	ll i, j, m, x, y, z, c = 0, cnt = 0;
	string s;
	memset(dp, -1, sizeof(dp));
	cin >> n >> k;
	for ( i = 1; i <= n ; i++)
	{
		cin >> a[i];

	}
	cout << f(1);







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