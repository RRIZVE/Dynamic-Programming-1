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
int totel_element ;
int print_korta_chai ;
int baki ;

void output(int n, int baki)
{
	if (baki == 0)
		return;
	cout << a[n] << " ";
	output(n - 1, baki - 1);


}






void solve()
{

	int i, j , n, m, x, y, z, c = 0, cnt = 0, k;
	string s;
	cin >> n;
	totel_element = n;
	for ( i = 1; i <= n ; i++)
	{
		cin >> a[i];

	}
	cin >> baki;


	output(n, baki);







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