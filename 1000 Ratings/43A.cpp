
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
    ll n;
    cin >> n;
    int maxi=INT_MIN;
    string team="";
    map<string,int>mp;
    while(n--)
    {
        ll a,b;
        //cin >> a;
        string s;
        cin >> s;
        mp[s]++;
    }
    for(auto it:mp)
    {
        if(it.second>maxi)
        {
            maxi=it.second;
            team=it.first;
        }
    }
    cout << team << endl;
}
