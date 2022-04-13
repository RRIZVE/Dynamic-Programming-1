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

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define EPS 1e-9

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

const int mx = 2e5 + 100;
int a[mx];
int dp[mx][2];
int n;

int f(int i, int now)
{
	if (i > n)
		return 0;
	if (dp[i][now] != -1)
	{
		return dp[i][now];
	}
	int ans = 1e9;
	if (!now)
	{
		ans = min(ans, a[i] + f(i + 1, 1));
		if (i + 1 <= n)
		{
			ans = min(ans, a[i] + a[i + 1] + f(i + 2, 1));
		}

	}
	else
	{
		ans = min(ans, f(i + 1, 0));
		if (i + 1 <= n)
		{
			ans = min(ans, f(i + 2, 0));
		}

	}

	return dp[i][now] = ans;
}



void solve()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i, j, k , m, x, y, z, c = 0, cnt = 0;
		string s;
		cin >> n;
		for (int i = 1; i <= n; i++)dp[i][0] = dp[i][1] = -1;
		for ( i = 1; i <= n ; i++)
		{
			cin >> a[i];

		}
		memset(dp, -1, sizeof(dp));
		cout << f(1, 0) << endl;;
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