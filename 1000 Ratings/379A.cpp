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
#define FAST_IN_OUT ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
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
    FAST_IN_OUT
    //ll n;
    //cin >> n;
    //while (n--)
    //{
    int a,b,c,d;
    cin >> a >> b;
    int co=a;
    int to=a;
    while(to>=b)
    {
        int cc=to/b;
        co+=cc;
        to=cc+(to%b);
    }
    cout << co << el;
    //}
}
