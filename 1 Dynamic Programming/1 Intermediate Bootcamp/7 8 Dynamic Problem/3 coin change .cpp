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
int coin[mx];
int dp[mx];
int n, target;

int coinchange(int target)
{
	if (target < 0)
		return 0;
	if (target == 0)
		return 1;
	if (dp[target] != -1)
		return dp[target];

	int ans = 0;
	for (int i = 0; i < n ; i++)
	{

		ans = ans + coinchange(target - coin[i]);




	}
	return dp[target] = ans;

}



void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0;
	string s;
	memset(dp, -1, sizeof(dp));
	cin >> n >> target;
	for ( i = 0; i < n ; i++)
	{
		cin >> coin[i];

	}
	cout << coinchange(target);

	/*
	3 5
	1 2 3

	13

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