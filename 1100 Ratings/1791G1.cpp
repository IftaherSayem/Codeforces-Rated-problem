#include <bits/stdc++.h>
using namespace std;
#define FAST_IN_OUT ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define loop(a,k) for (int i=a;i<k;i++)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define yes cout << "YES" << el;
#define no cout << "NO" << el;
#define gcd(a,b) __gcd(a,b)
#define ll long long
#define el "\n"
#define sp " "
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
    while(n--)
    {
        ll a,b;
        cin >> a >> b;
        vector<int>ar(a);
        for (int i=0;i<a;i++)
        {
            cin >> ar[i];
            ar[i]=i+1+ar[i];
        }
        sort(ar.begin(),ar.end());
        vector<ll>pref(a);
        pref[0]=ar[0];
        for (int i=1;i<a;i++)
        {
            pref[i]=pref[i-1]+ar[i];
        }
        int co=0;
        for (int i=0;i<a;i++)
        {
            if(pref[i]<=b) co++;
            else break;
        }
        cout << co << el;
    }
}
