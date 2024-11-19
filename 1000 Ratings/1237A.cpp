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
    vector<int>ar(n);
    int oth=0;
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
        if(ar[i]%2!=0) oth++;
    }
    oth/=2;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
        {
            if(oth>0)
            {
                oth--;
                ar[i]--;///suppose [10,-5,-5] so for -5 it is = -2-1;=-3
            }
            else ar[i]++;
        }
        cout << ar[i]/2 << el;
    }
}
