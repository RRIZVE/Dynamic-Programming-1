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

//>>O(n*m)

const int mx = 1e6;
int cut[101];
int cost[101];
int dp[101101];
int m, n;

int f(int n)
{
	if (n == 0)
		return 0;

	if (dp[n] != -1 )
		return dp[n];

	//take the i'th coin

	int ans = 0;
	for (int i = 0; i < m ; i++)
	{
		if (cut[i] <= n)
		{
			ans = max (ans, cost[i] + f(n - cut[i]));
		}

	}



	return dp[n] = ans;




}





void solve()
{

	int i, j, k , n, x, y, z, c = 0, cnt = 0;
	string s;
	memset(dp, -1, sizeof(dp));
	cin >>  m;
	for ( i = 0; i <= m ; i++)
	{
		cut[i] = i + 1;
		cin >> cost[i];

	}
	cout << f(m);

	/*
	3 5
	1 2 3

	>>2

	2 3



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