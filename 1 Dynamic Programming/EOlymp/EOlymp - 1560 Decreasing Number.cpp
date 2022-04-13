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
//n==1e6 && 1Sec

const int mx = 1e6 + 100;
int dp[mx];
int n;

int f(int n)
{
	if (n == 1)
	{
		return 1;
	}

	if (dp[n] != -1 )
		return dp[n];


	int ans1 = 1e9;
	int ans2 = 1e9;
	int ans3 = 1e9;

	if (n % 2 == 0)
	{
		ans1 = 1 + f(n / 2);
	}
	if (n % 3 == 0)
	{
		ans2 = 1 + f(n / 3);
	}
	ans3 = 1 + f(n - 1);

	return dp[n] = min({ans1, ans2, ans3});


}



void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0;
	string s;
	while (cin >> n)
	{
		memset(dp, -1, sizeof(dp));
		cout << f(n) - 1 << endl;

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