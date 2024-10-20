
/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    //ll n;
    //cin >> n;
    //while(n--)
    //{
    ll a,b;
    //cin >> a;
    string s,x;
    cin >> s >> x;
    map<char,int> mp1;
    map<char,int> mp2;
    for (int i=0; i<s.size(); i++)
    {
        mp1[s[i]]++;
    }
    for(int i=0; i<x.size(); i++)
    {
        mp2[x[i]]++;
    }
    if(s==x)
    {
        cout << -1 << endl;
    }
    else if(mp1.size()>mp2.size())
    {
        cout << s.size() << endl;
    }
    else if(mp1.size()<mp2.size())
    {
        cout << x.size() << endl;
    }
    else if(mp1.size()==mp2.size())
    {
        cout << max(s.size(),x.size()) << endl;
        //}
    }
}
