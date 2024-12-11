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
        int a,b;
        string s;
        cin >> s;
        int left=count(s.begin(),s.end(),'L');
        int right=count(s.begin(),s.end(),'R');
        int sz=s.size();
        if(left==sz)
        {
            cout << sz+1 << el;
            continue;
        }
        if(right==sz)
        {
            cout << 1 << el;
            continue;
        }
        vector <int> r;
        r.push_back(0);
        for (int i=0;i<sz;i++)
        {
            if(s[i]=='R')
            {
                r.push_back(i+1);
            }
        }
        r.push_back(sz+1);
        //sort(r.begin(),r.end());
        int ms=0;
        for (int i=1;i<r.size();i++)
        {
            ms=max(ms,abs(r[i]-r[i-1]));
        }
        cout << ms << el;
    }  
}
