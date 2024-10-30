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
        int a,b,c;
        cin >> a;
        string s;
        cin >> s;
        bool chk=false;
        map<string,int>st;
        if(a==1 || a==2)
        {
           cout << "NO" << el;
           continue;
        }
        for (int i=0;i<a-1;i++)
        {
           string sub =s.substr(i,2);
           if(st.count(sub)>0 && st[sub] < i-1)
           {
              chk=true;
              break;
           }
           if(st.count(sub)==0)
           {
              st[sub]=i;
           }
        }
        if(chk==true)
        {
           cout << "YES" << el;
        }
        else
        {
           cout << "NO" << el;
        }

    }
}
