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

const int mx = 1e5 + 10;
ll a[mx];
ll n, k, z;
ll dp[mx][6];

ll f(int pos, int cnt, int back)
{
	if (pos > n || cnt == k || pos < 1)
	{
		return 0;
	}

	if (dp[pos][back] != -1)
	{
		return dp[pos][back];
	}

	ll ans;

	ans = a[pos] + f(pos + 1, cnt + 1, back);

	if (back < z)
	{
		ans = max(ans,  a[pos] + f(pos - 1, cnt + 1, back + 1));

	}


	return dp[pos][back] = ans;

}



void solve()
{
	int t;
	cin >> t;
_ammu_abbu:
	while (t--)
	{

		ll i, j, m, x, y, c = 0, cnt = 0;
		string s, s1, s2, s3;
		memset(dp, -1, sizeof(dp));
		cin >> n >> k >> z;
		for ( i = 1; i <= n ; i++)
		{
			cin >> a[i];

		}
		x = f(2, 0, 0) ;//pos,k,z
		cout << x + a[1] << endl;



















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