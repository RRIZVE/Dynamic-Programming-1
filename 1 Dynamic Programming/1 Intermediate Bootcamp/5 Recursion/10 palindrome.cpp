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


int l, r;
string s;

bool IsPalindrome(int l, int r)
{
	if (l >= r)
		return true;
	if (s[l] == s[r])
		return IsPalindrome(l + 1, r - 1);
	else
		return false;

}

void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0;
	cin >> s;
	int len = s.size();
	l = 0;
	r = len - 1;
	if (IsPalindrome(l, r) == true)
	{
		cout << "Palindrome" << endl;
	}
	else
	{
		cout << "Not Palindrome" << endl;
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