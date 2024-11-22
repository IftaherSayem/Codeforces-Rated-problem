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
    ll n;
    cin >> n;
    while (n--)
    {
        int a;
        string s;
        cin >> s;
        cin >> a;
        string st=s;
        sort(st.rbegin(),st.rend());
        int total=0;
        for(int i=0;i<s.size();i++)
        {
            total+=(s[i]-'0'-48);
        }
        map<char,int>mp;
        for (int i=0;i<s.size();i++)
        {
            if(total>a)
            {
                mp[st[i]]++;
                total-=(st[i]-'0'-48);
            }
        }
        for (int i=0;i<s.size();i++)
        {
            if(mp[s[i]]>0)
            {
                mp[s[i]]--;///already print the ch so we have to decrement it
                continue;///if we are not use continue it it print the whole string maybe
            }
            cout << s[i];
        }
        cout << el;
    }
}
