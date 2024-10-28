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
        int a;
        cin >> a;
        vector <int>ar(a);
        for (int i=0; i<a; i++)
        {
          cin >> ar[i];
        }
        int cd=ar[0];
        for (int i=1;i<a;i++)
        {
           cd=__gcd(cd,ar[i]);
        }
        if(cd==1)
        {
           cout << 0 << el;
           continue;
        }
        int mini1=__gcd(cd,__gcd(ar[a-1],a));
        int mini2=__gcd(cd,__gcd(ar[a-2],a-1));
        if(mini1==1) cout << 1 << el;
        else if(mini2==1) cout << 2 << el;
        else cout << 3 << el;
    }
}
