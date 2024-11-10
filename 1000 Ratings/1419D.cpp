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
    //ll n;
    //cin >> n;
    //while (n--)
    //{
        int a,b,c,d,e;
        cin >> a;
        vector<int>ar(a);
        for (int i=0;i<a;i++)
        {
            cin >> ar[i];
        }
        sort(ar.rbegin(),ar.rend());
        int co=0;
        int middle=ar[a/2];
        if(a%2==0) co=(a/2)-1;
        else co=a/2;
        int j=0;
        int k=a-1;
        cout << co << el;
        for (int i=0;i<a/2;i++)
        {
            cout << ar[j] << " " << ar[k] << " ";
            j++;
            k--;
        }
        if (a%2==1) cout << middle << el;
        
    //}
}
