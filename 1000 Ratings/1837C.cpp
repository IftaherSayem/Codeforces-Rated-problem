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
        //cin >> a >> b;
        string s;
        cin >> s;
        for (int i=0; i<s.size(); i++)
        {
           if(s[i]=='?')
           {
              if(i==0)
              {
                 s[i]='0';
              }
              else
              {
                 char l=s[i-1];
                 char r='0';
                 if(i+1<s.size() && s[i+1]!='?') r=s[i+1];
                 if(l=='1' || (l=='0' && r=='1')) s[i]='1';
                 else s[i]='0';
              }
           }
        }
        cout << s << endl;
    }
}
