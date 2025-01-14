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
string conv(int n)
{
    if(n==0) return "0";
    string s="";
    while(n>0)
    {
        s=to_string(n%2)+s;
        n/=2;
    }
    return s;
}
int main()
{
    //test();
    FAST_IN_OUT
    ll n;
    cin >> n;
    while(n--)
    {
        ll a,b,c;
        cin >> a >> b;
        map<int,int>mp;
        vector<int>ar(a);
        for (int i=0;i<a;i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        if(a<=b)
        {
            cout << 1 << el;
            continue;
        }
        int maxi=0;
        int stor=0;
        vector<int>freq;
        for (auto it:mp)
        {
            freq.push_back(it.second);
        }
        sort(freq.begin(),freq.end());
        int co=0;
        for (int i=0;i<freq.size();i++)
        {
            if(freq[i]<=b)
            {
                co++;
                b-=freq[i];
            }
        }
        cout << freq.size()-co << el;
    }
}
