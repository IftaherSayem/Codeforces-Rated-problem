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
    ll a,b,c,d;
    cin >> a >> b;
    ll co=(b-a+1)/2;
    ///cout << co << endl;
    if(a==0 || b==0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        ll j=a;
        for (ll i=1; i<=co; i++)
        {
            cout << j << " " << j+1 << endl;
            j+=2;
        }
    }
    //}
}
