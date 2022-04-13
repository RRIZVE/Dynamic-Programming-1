//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define en '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define vc vector<char>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define sei set<int>
#define usei unordered_set<int>
#define ses set<string>
#define sepii set< pair<int,int> >
#define di deque<int>
#define sti stack<int>
#define qi queue<int>
#define pqi priority_queue<int>
#define mpii map<int,int>
#define mpll map<ll,ll>
#define umii unordered_map<int,int>
#define pb push_back
#define in insert
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

const int mx = 1010;
ll a[mx];
ll b[mx];
ll c[mx];
ll w[mx];
ll dp[mx][10010];
ll W;
ll n;

ll f(int i, ll CurWeight)
{
	if (i > n)
	{
		return 0;
	}
	if (dp[i][CurWeight] != -1)
	{
		return dp[i][CurWeight];
	}
	ll ans1 = 0;
	ll ans2 = 0;
	if (CurWeight + a[b[i]] <= W)
	{
		ans1 = c[i] + f( i + 1, CurWeight + a[b[i]]);
	}
	ans2 = f( i + 1, CurWeight);

	return dp[i][CurWeight] = max(ans1, ans2);

}





void solve()
{
	int t, x;
	cin >> t;

	a[1] = 0;
	for (int  i = 1; i <= 1000 ; i++)
	{
		for ( int j = i; j >= 1 ; j--)
		{
			x = i / j;
			if (i + x > 1010)
				break;
			if (a[i + x] == 0)
				a[i + x] = a[i] + 1;
			else
			{
				a[i + x] = min(a[i + x], a[i] + 1);
			}


		}


	}

	while (t--)
	{

		ll i, j, k , m, x, y, z, cnt = 0;
		string s, s1, s2, s3;
		cin >> n >> W;
		memset(dp, -1, sizeof(dp));
		for ( i = 1; i <= n ; i++)
		{
			cin >> b[i];

		}
		for ( i = 1; i <= n ; i++)
		{
			cin >> c[i];

		}
		x = f(1, 0);
		cout << x << endl;





















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