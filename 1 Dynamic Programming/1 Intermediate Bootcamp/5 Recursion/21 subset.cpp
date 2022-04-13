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
int n;

void Subset(int pos, vector<int>res)
{
	if (pos > n)
	{
		for ( auto u : res)
		{

			cout << u << " ";

		}
		cout << endl;
		return;
	}

	// a[pos] element ta nibo
	res.push_back(a[pos]);
	Subset(pos + 1, res);


	// a[pos] element ta nibo na
	res.pop_back();
	Subset(pos + 1, res);
}


void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0;
	string s;
	cin >> n;
	for ( i = 1; i <= n ; i++)
	{
		cin >> a[i];

	}
	vector<int>v;
	Subset(1, v);








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