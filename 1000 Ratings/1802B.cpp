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
        int a;
        cin >> a;
        vector<int>ar(a);
        for(int i=0;i<a;i++)
        {
            cin >> ar[i];
        }
        if(count(ar.begin(),ar.end(),1)==0)
        {
            cout << 0 << el;
            continue;
        }
        if(count(ar.begin(),ar.end(),2)==0)
        {
            cout << a << el;
            continue;
        }
        int co=0;
        int ko=0;
        int res=0;
        for(int i=0;i<a;i++)
        {
            if(ar[i]==1)
            {
                ko++;
            }
            else
            {
                co+=ko;
                ko=0;
            }
            if(co==0) res=max(res,ko);
            else res=max(res,1+ko+co/2);
        }
        cout << res << el;
    }
}
