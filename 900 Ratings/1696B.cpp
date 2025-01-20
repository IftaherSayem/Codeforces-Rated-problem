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
        int a,b;
        cin >> a;
        deque<int>ar;
        map<int,int>mp;
        for (int i=1;i<=a;i++)
        {
            int x;
            cin >> x;
            ar.push_back(x);
            mp[x]++;
        }
        if(mp.size()==1 && ar[0]==0)
        {
            cout << 0 << el;
            continue;
        }
        while(ar.size()>0 && ar.front()==0)
        {
            ar.pop_front();
        }
        while(ar.size()>0 && ar.back()==0)
        {
            ar.pop_back();
        }
        int co=0;
        for (int i=0;i<ar.size();i++)
        {
            if(ar[i]==0)
            {
                co++;
            }
        }
        if(co!=0) cout << 2 << el;
        else cout << 1 << el;
    }
}
