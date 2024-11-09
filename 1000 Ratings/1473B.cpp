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
        int a,b,c,d,e;
        //cin >> a >> b >> c;
        string s1,s2;
        cin >> s1;
        cin >> s2;
        string n1=s1;
        string n2=s2;
        while(n1.length()!=n2.length())
        {
            if(n1.length()<n2.length())
            {
                n1+=s1;
            }
            else
            {
                n2+=s2;
            }
        }
        if(n1==n2)
        {
            cout << n1 << el;
        }
        else
        {
            cout << -1 << el;
        }
    }
}
