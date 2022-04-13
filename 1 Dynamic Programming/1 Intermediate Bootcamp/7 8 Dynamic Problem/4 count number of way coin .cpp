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
int dp[101][100100];
int m, n;

int f(int pos, int n)
{
	if (n == 0)
		return 1;
	if (pos >= m)
		return 0;

	if (dp[pos][n] != -1 )
		return dp[pos][n];

	//take the i'th coin

	int ans1 = 0, ans2 = 0;
	if (coins[pos] <= n)
	{
		ans1 = f(pos, n - coins[pos]);
	}




	// do not take the i'th coin

	ans2 = f(pos + 1, n);

	return dp[pos][n] = ans1 + ans2;




}





void solve()
{

	int i, j, k , n, x, y, z, c = 0, cnt = 0;
	string s;
	memset(dp, -1, sizeof(dp));
	cin >> m >> n;
	for ( i = 0; i <= m ; i++)
	{
		cin >> coins[i];

	}
	cout << f(0, n);

	/*
	3 5
	1 2 3

	>>5

	1 1 1 1 1
	1 1 1 2
	1 1 3
	1 2 2
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