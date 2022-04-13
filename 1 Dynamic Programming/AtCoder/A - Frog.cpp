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
int a[mx];
int dp[mx];
int n;

int f(int i)
{
	if (i == n)
	{
		return 0;
	}
	if (dp[i] != -1)
	{
		return dp[i];
	}

	ll ans1 = 1e9;
	ll ans2 = 1e9;

	if (i < n)
	{
		ans1 = abs(a[i] - a[i + 1]) + f(i + 1);
	}
	if (i < n - 1)
	{
		ans2 = abs(a[i] - a[i + 2]) + f(i + 2);
	}
	return dp[i] = min(ans1, ans2);




}



void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0;
	string s;
	memset(dp, -1, sizeof(dp));
	cin >> n;
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