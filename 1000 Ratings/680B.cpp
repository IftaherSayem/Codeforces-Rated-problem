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
    //ll n;
    //cin >> n;
    //while (n--)
    //{
    int a,b;
    cin >> a >> b;
    vector<int>ar(a+1);
    int sum=0;
    for (int i=1;i<=a;i++)
    {
        cin >> ar[i];
        sum+=ar[i];
    }
    for (int i=1;i<=a;i++)
    {
        if(b-i>=1 && b+i<=a)
        {
            if(ar[b-i]+ar[b+i]==1)
            {
                sum--;
            }
            //if()
        }
    }
    cout << sum << el;
    //}
    
}
