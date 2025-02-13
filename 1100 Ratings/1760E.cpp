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
        int a,b,c,d;
        string s;
        cin >> a;
        bool chk=false;
        vector<int>ar(a);
        for (int i=0;i<a;i++)
        {
            cin >> ar[i];
        }
        ll co1=0;
        int st=-1;
        for (int i=a-1;i>=(a-1)/2;i--)
        {
            if(ar[i]==1)
            {
                ar[i]=0;
                st=i;
                break;
            }
        }
        ll fs=0;
        for (int i=0;i<a;i++)
        {
            if(ar[i]==1) fs++;
            else co1+=fs;
        }
        if(st!=-1)
        {
            ar[st]=1;
        }
        for (int i=0;i<a/2;i++)
        {
            if(ar[i]==0)
            {
                ar[i]=1;
                break;
            }
        }
        ll co2=0;
        ll ls=0;
        for (int i=0;i<a;i++)
        {
            if(ar[i]==1) ls++;
            else co2+=ls;
        }
        cout << max(co1,co2) << el;
    }
}
