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
        string s1,s2;
        cin >> s1 >> s2;
        int sz1=s1.size()-1;
        int sz2=s2.size()-1;
        if(s1[0]==s2[0])
        {
           cout << "YES\n" << s1[0] << "*" << el;
        }
        else if(s1[sz1]==s2[sz2])
        {
           cout << "YES\n" << "*" << s2[sz2] << el;
        }
        else
        {
           bool chk=false;
           string st;
           for (int i=0;i<sz1;i++)
           {
              for (int j=0;j<sz2;j++)
              {
                 if(s1.substr(i,2)==s2.substr(j,2))
                 {
                    chk=true;
                    st=s1.substr(i,2);
                    break;
                 }
              }
              if(chk) break;
           }
           if(chk) cout << "YES\n" << "*" << st << "*" << el;
           else cout << "NO" << el;
        }
    }
}
