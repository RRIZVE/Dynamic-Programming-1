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
int a[mx];
int n, target;
vector<int>v;

int f(int target)
{
	cout << target << endl;
	if (target == 0) return 0;
	int ans = 1e9;

	for ( auto coin : v)
	{

		if (coin > target)
			continue;
		int baki = target - coin ;
		ans = min(ans, 1 + f(baki));


	}
	cout << endl;
	return ans;
}


void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0;
	string s;
	cin >> n >> target;
	v.resize(n);
	for ( i = 0; i < n ; i++)
	{
		cin >> v[i];


	}

	//cout << "ans   : " << f(target) << endl;
	cout  << f(target) << endl;







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