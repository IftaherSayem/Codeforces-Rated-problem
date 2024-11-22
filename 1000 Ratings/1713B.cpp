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
#define yes cout << "YES" << el;
#define no cout << "NO" << el;
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
    FAST_IN_OUT
    ll n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        vector<int>ar(a);
        int maxi=0;
        int pos=0;
        loop(0,a)
        {
            cin >> ar[i];
            if(ar[i]>maxi)
            {
                maxi=ar[i];
                pos=i;
            }
        }
        if(is_sorted(ar.begin(),ar.end()) || is_sorted(ar.rbegin(),ar.rend()))
        {
            yes;
            continue;
        }
        vector<int>left;
        vector<int>right;
        loop(0,pos)
        {
            left.push_back(ar[i]);
        }
        loop(pos,a)
        {
            right.push_back(ar[i]);
        }
        if(is_sorted(left.begin(),left.end()) && is_sorted(right.rbegin(),right.rend()))
        {
            yes
        }
        else no
    }
}
