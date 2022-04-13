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

#define MOD 1000000007

const int mx = 1e6 + 100;
int r, c;
string grid[1000];
int dp[1110][1110];






int countpaths(int x, int y)
{
	if (x == r - 1 && y == c - 1)
		return 1;
	if (dp[x][y] != -1)
	{
		return dp[x][y];
	}
	if (x == r || y == c)
		return 0;
	if (grid[x][y] == '#')
		return 0;
	return dp[x][y] = ((countpaths(x , y + 1) % MOD) + (countpaths(x + 1, y) % MOD)) % MOD;
	//                            down                +                        right




}



void solve()
{

	int i, j, k , n, m, x, y, z, cnt = 0;
	string s;
	memset(dp, -1, sizeof(dp));
	cin >> r >> c;


	for ( i = 0; i < r ; i++)
	{
		cin >> grid[i];

	}


	cout << countpaths(0, 0) << endl;

	/*
	4 7
	*****#*
	***###*
	*#*#***
	#******

	>>
	3
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