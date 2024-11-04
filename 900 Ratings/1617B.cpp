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
       ll a,b;
       cin >> a;
       if(a%2==0)
       {
          ll cd=a/2;
          ll first=cd;
          ll last=cd-1;
          if((first%2==0 && last%2==0) || first%last==0 || last%first==0)
          {
             first--;
             last++;
          }
          cout << first << " " << last << " " << 1 << el;
       }
       else
       {
          ll st=a/2;
          ll fs=st-2;
          ll ls=st+2;
          if((fs%2==0 && ls%2==0) || fs%ls==0 || ls%fs==0)
          {
             fs++;
             ls--;
          }
          cout << fs << " " << ls << " " << 1 << el;
       }
    }
}

