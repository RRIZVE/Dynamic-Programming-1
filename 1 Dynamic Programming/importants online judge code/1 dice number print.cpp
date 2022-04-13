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

const int mx = 1e6 + 200;
int coin[mx];
int dp[mx];
int n, target;

int coinchange(int target, string res = "")
{
	if (target < 0)
		return 0;
	if (target == 0)
	{
		cout << res << endl;
		return 1;
	}

	int ans = 0;
	for (int i = 1; i <= 6 ; i++)
	{
		string x = to_string(i);

		ans = ans + coinchange(target - i, res + x);




	}

	return  ans;

}



void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0;
	string s;
	memset(dp, -1, sizeof(dp));
	cin >> target;

	cout << coinchange(target) << "  <--   ans  ";

	/*

	4


	1111
	112
	121
	13
	211
	22
	31
	4
	8  <--   ans






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