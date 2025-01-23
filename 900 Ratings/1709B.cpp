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
    //ll n;
    //cin >> n;
    //while(n--)
    //{
        ll a,b;
        cin >> a >> b;
        vector<ll>ar(a);
        for (int i=0;i<a;i++)
        {
            cin >> ar[i];
        }
        vector<ll>pr1(a-1),pr2(a-1);
        for (int i=0;i<a-1;i++)
        {
            if(ar[i]>ar[i+1])
            {
                pr1[i]=ar[i]-ar[i+1];
            }
            else
            {
                pr2[i]=ar[i+1]-ar[i];
            }
        }
        vector <ll> pref1(a),pref2(a);
        pref1[0]=0;
        pref2[0]=0;
        for (int i=1;i<a;i++)
        {
            pref1[i]=pref1[i-1]-pr1[i-1];
            pref2[i]=pref2[i-1]-pr2[i-1];
        }
        
        while(b--)
        {
            ll x,y;
            cin >> x >> y;
            ll sum=0;
            if(x<=y) sum=pref1[y-1]-pref1[x-1];
            else sum=pref2[x-1]-pref2[y-1];
            cout << abs(sum) << el;
        }
    //}
}
