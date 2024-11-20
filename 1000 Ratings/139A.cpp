/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define el "\n"
#define yes cout << "YES" << el;
#define no cout << "NO" << el;
const int m=1e9 + 7;
void test()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
bool chk(int a)
{
    if(a==2 || a==3 || a==5) return true;
    for(int i=2; i*i<=a; i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}

ll power(ll x, ll y)
{
    ll val = 1;

    while (y > 0)
    {
        if (y % 2 != 0)
            val = val * x;
        y = y / 2;
        x = x * x;
    }
    return val;
}

int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    //ll n;
    //cin >> n;
    //while (n--)
    //{
    int a,b,c;
    cin >> a;
    vector<int>ar(7);
    for (int i=0;i<7;i++)
    {
        cin >> ar[i];
    }
    vector<int>pref(7);
    pref[0]=ar[0];
    for (int i=1;i<7;i++)
    {
        pref[i]=pref[i-1]+ar[i];
    }
    int mod=a%pref[6];
    if(mod==0) mod=pref[6];
    int co=0;
    for (int i=0;i<7;i++)
    {
        if(pref[i]>=mod)
        {
            co=i;
            break;
        }
    }
    cout << co+1 << el;
    //}
}
// Monday Tuesday Wednesday Thursday Friday Saturday  Sunday
//   15     20     20         15        10      30      45
//  100-15  85-20  65-20      45-15    30-10    20-30
//   =85    =65    =45        =30      =20      =-10*                                   
