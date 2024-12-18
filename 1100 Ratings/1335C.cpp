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
        int a;
        cin >> a;
        vector<ll>ar(a);
        map<int,int>mp;
        for(int i=0;i<a;i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        if((mp.size()==a  || mp.size()==1 || a==2) && a>1)
        {
            cout << 1 << el;
            continue;
        }
        if(a==1)
        {
            cout << 0 << el;
            continue;
        }
        int maxi=0;
        for (auto it:mp)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
            }
        }
        int sz=mp.size();
        if(sz-1>=maxi) cout << maxi << el;///1 2 3 3
        else if(abs(maxi-sz+1)==1) cout << maxi-1 << el;/// 1 1 2 2 2 3
        else cout << sz << el;
    }
}
