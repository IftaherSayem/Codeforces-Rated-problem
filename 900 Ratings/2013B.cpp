/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void test()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int finding(char ch)
{
    return ch-'A'+1;
}
int posi(int h)
{
    return h+'a'-1;
}
bool deco(pair <int,int>&a,pair<int,int>&b)
{
    return a.second>b.second;
}
int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    ll n;
    cin >> n;
    while(n--)
    {
        ll a,b,c,d,e,f;
        cin >> a;
        vector <ll> ar(a+1);
        for (ll i=1;i<=a;i++)
        {
           cin >> ar[i];
        }
        for(ll i=1;i<=a-2;i++)
        {
           ar[a-1]-=ar[i];
        }
        ll ans=ar[a]-ar[a-1];
        cout << ans << endl;
    }
}
