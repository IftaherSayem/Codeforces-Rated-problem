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
    while(n--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        vector <int> ar(a);
        int co=0;
        ll res=0;
        for (int i=0; i<a; i++)
        {
            cin >> ar[i];
            if(ar[i]>c)
            {
                if(co>=b)
                {
                    ll sub=co-b+1;
                    res+=(1LL*sub*(sub+1))/2;
                }
                co=0;
            }
            else
            {
                co++;
            }
        }
        if(co>=b)
        {
            ll sub=co-b+1;
            res+=(1LL*sub*(sub+1))/2;
        }
        cout << res << el;
    }
}
