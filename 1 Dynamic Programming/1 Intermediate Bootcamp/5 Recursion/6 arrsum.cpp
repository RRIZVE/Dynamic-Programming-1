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
void input(int n)
{
	if (n == 0)
		return;
	input(n - 1);
	cin >> a[n];

}
void output(int n)
{
	if (n == 0)
		return;
	output(n - 1);
	cout << a[n] << " ";

}

int arrsum(int n)
{
	if (n == 0)
		return 0;
	return a[n] + arrsum(n - 1);

}




void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;
	cin >> n;
	input(n);
	output(n);
	cout << endl;
	cout << arrsum(n) << endl;






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