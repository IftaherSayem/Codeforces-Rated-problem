/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define el endl;
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
        ll a,b,c,d;
        cin >> a;
        vector <int> ar(a);
        for (int i=0;i<a;i++)
        {
           cin >> ar[i];
        }
        bool chk=false;
        int in=0,de=0;
        for (int i=0;i<a-1;i++)
        {
           if(ar[i]<ar[i+1])
           {
              in++;
           }
           else if(ar[i]>ar[i+1])
           {
              de++;
              if(in>0)
              {
                 chk=true;
                 break;
              }
           }
        }
        if(chk)
        {
           cout << "NO" << el;
        }
        else
        {
           cout << "YES" << el;
        }
    }
}
