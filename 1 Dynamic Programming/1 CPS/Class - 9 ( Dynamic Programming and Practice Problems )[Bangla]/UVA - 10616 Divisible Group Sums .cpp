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


const int MX = 1e5 + 123;


ll a[210];

ll d;

ll n, k;

ll dp[212][22][12];

//vector<int>v;

ll f(ll i, ll sum, ll cnt)
{

    if (sum == 0 && cnt == k)
    {
       return 1;
    }
    if ( cnt > k || i > n)
    {
        return 0;
    }
    if (dp[i][sum][cnt] != -1)
    {
        return dp[i][sum][cnt];
    }
    ll ans = 0;

    int d1 = (sum % d + (a[i] % d)) % d;

    if (d1 < 0)
        d1 = d1 + d;

    ans = ans + f(i + 1, d1 , 1 + cnt);

    ans = ans + f(i + 1, (sum % d), cnt);

    return dp[i][sum][cnt] = ans;

}

void solve()
{

    int i, j = 0, m, x, y, z, c = 0, sum = 0;
    string s;
    int q;

    while (cin >> n >> q)
    {
        j++;
        if (n == 0 && q == 0)
            break;




        for ( i = 1; i <= n ; i++)
        {
            cin >> a[i];

        }

        //SET 1:
        cout << "SET " << j << ":" << endl;

        int xx = 0;

        while (q--)
        {
            xx++;
            cin >> d >> k;
            memset(dp, -1, sizeof(dp));
            //QUERY 1: 2

            cout << "QUERY " << xx << ": ";

            cout << f(1, 0, 0) << endl;
        }



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