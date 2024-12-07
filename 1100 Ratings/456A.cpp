/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
#define FAST_IN_OUT ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define loop(a,k) for (int i=a;i<k;i++)
#define full(ar) (ar.begin(),ar.end())
#define lcm(a,b) (a*b)/__gcd(a,b)
#define yes cout << "YES" << el;
#define no cout << "NO" << el;
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define ll long long
#define el "\n"
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
    //i tried easy version  first then hard version so i first submitted first easy verson then hard version 
    FAST_IN_OUT
    ll n;
    cin >> n;
    vector<pair<int,int>>pr(n);
    //while(n--)
    for (int i=0;i<n;i++)
    {
        cin >> pr[i].first >> pr[i].second;
    }
    sort(pr.begin(),pr.end());
    bool chk=false;
    for (int i=0;i<n-1;i++)
    {
        if(pr[i].second>pr[i+1].second)
        {
            chk=true;
            break;
        }
    }
    if (chk) cout << "Happy Alex" << el;
    else cout << "Poor Alex" << el;
}
