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
int coins[101];
int dp[101101];
int m, n;

int f(int n)
{
	if (n == 0)
		return 0;

	if (dp[n] != -1 )
		return dp[n];

	//take the i'th coin

	int ans = 1e9;
	for (int i = 0; i < m ; i++)//ekta coin ber ber nia jaba
	{
		if (coins[i] <= n)
		{
			ans = min (ans, 1 + f(n - coins[i]));
		}

	}



	return dp[n] = ans;




}





void solve()
{

	int i, j, k , x, y, z, c = 0, cnt = 0;
	string s;
	memset(dp, -1, sizeof(dp));
	cin >> m >> n;
	for ( i = 0; i < m ; i++)
	{
		cin >> coins[i];

	}
	cout << f(n);

	/*
	3 6
	3 5 7

	>>2

	3 3



	*/








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