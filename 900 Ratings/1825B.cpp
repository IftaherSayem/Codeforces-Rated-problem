/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define el endl
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
    ll n;
    cin >> n;
    while (n--)
    {
        ll a,b,c,d;
        cin >> a >> b;
        vector <int>ar(a*b);
        for (int i=0;i<a*b;i++)
        {
           cin >> ar[i];
        }
        sort(ar.begin(),ar.end());
        int fs=ar[a*b-1];
        int ls=ar[a*b-2];
        int on=ar[0];
        int tw=ar[1];
        ll ans1=(a*b-min(a,b))*(fs-on)+(min(a,b)-1)*(ls-on);
        ll ans2=(a*b-min(a,b))*(fs-on)+(min(a,b)-1)*(fs-tw);
        cout << max(ans1,ans2) << el;
    }
}
