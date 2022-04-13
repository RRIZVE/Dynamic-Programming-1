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
string s;

bool check(int cur, int swapping_pos)
{
	for ( int i = cur; i < swapping_pos ; i++)
	{
		if (s[i] == s[swapping_pos])
		{
			return 0;
		}


	}
	return 1;

}



void uniqpermutation(int pos)
{
	int len = s.size();
	if (pos == (len - 1))
	{
		cout << s << endl;
		return;
	}
	for ( int i = pos; i < len ; i++)
	{
		if (check(pos, i) == 1 || i == pos)
		{
			swap(pos, i);
			uniqpermutation(pos + 1);
			swap(s[pos], s[i]);
		}


	}
}



void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;

	cin >> s;
	uniqpermutation(0);



	/*

	AAB

	AAB
	ABA
	BAA




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