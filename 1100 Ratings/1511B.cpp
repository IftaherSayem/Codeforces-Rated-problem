#include <bits/stdc++.h>
using namespace std;
#define FAST_IN_OUT ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define loop(a,k) for (int i=a;i<k;i++)
#define onescount(x) __builtin_popcount(x) ///count 1s in a unsigned integer
#define lcm(a,b) (a*b)/__gcd(a,b)
#define yes cout << "YES" << el;
#define no cout << "NO" << el;
#define gcd(a,b) __gcd(a,b)
#define ll long long
#define el "\n"
#define sp " "
#define MOD 998244353
const int m=1e9 + 7;
void test()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
bool chk(ll a)
{
    if (a<2) return false;
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
bool prfcsq(ll a)
{
    ll squ = sqrt(a);
    return (squ * squ == a);
}

int nxpr(int a)
{
    for (int i=a;;i++)
    {
        bool chk=true;
        for (int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                chk=false;
                break;
            }
        }
        if(chk) return i;
    }
}

int main()
{
    FAST_IN_OUT
    int n;
    cin >> n;
    while(n--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        ll mul1=1,mul2=1,mul3=1;
        for (int i=1;i<c;i++) mul1*=10;
        for (int i=1;i<=a-c;i++) mul2*=10;
        for (int i=1;i<=b-c;i++) mul3*=10;
        mul3+=1;
        cout << mul1*mul2 << sp << mul1*mul3 << el; 
        
    }
}
