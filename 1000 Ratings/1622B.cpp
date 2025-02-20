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
#define mod 998244353
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

int power(int x, int y)
{
    int val = 1;

    while (y > 0)
    {
        if (y % 2 != 0)
            val = val * x;
        y = y / 2;
        x = x * x;
    }
    return val;
}

void binary_modular_exponentiation(ll  w,ll x,ll y)
{
    ll ans=1;
    while(x)
    {
        if(x%2==1)
        {
            ans=(ans*w);
            x--;
        }
        else
        {
            w=(w*w);
            x/=2;
        }
    }
    cout << y%ans << el;
}

int Euclid(int x, int y)
{
    while(y!=0)
    {
        int rem=x%y;
        x=y;
        y=rem;
    }
    return x;
}

int main()
{
    //test();
    FAST_IN_OUT
    ll n;
    cin >> n;
    while(n--)
    {
        int a,b,c;
        cin >> a;
        vector<int>ar(a);
        vector<pair<int,int>>vp(a);
        for (int i=0;i<a;i++)
        {
            cin >> ar[i];
            vp[i]={ar[i],i};
        }
        string s;
        cin >> s;
        sort(vp.begin(),vp.end());
        int co=count(s.begin(),s.end(),'1');
        int mx=0;
        int mn=a-co;
        vector<int>res(a);
        for (int i=0;i<a;i++)
        {
            if(s[vp[i].second]=='1')
            {
                mn++;
                res[vp[i].second]=mn;
            }
            else
            {
                mx++;
                res[vp[i].second]=mx;
            }
        
        }
        for (int i=0;i<a;i++)
        {
            cout << res[i] << sp;
        }
        cout << el;
       
    }
}

