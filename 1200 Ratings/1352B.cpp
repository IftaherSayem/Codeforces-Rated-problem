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
#define ull unsigned long long
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
bool xsx(vector<int>&ar,int oth)
{
    int l=0,r=ar.size()-1;
    int ans=1;
    while(l<r)
    {
        if(ar[l]==oth)
        {
           l++;
           continue;
        }
        if(ar[r]==oth)
        {
            r--;
            continue;
        }
        if(ar[l]!=ar[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int dig(char c)
{
    return c-'a'+1;
}
ll vis(ll a,ll b)
{
    ll maxi=-1;
    for (ll i=1;i*i<=b;i++)
    {
        if(b%i==0)
        {
            ll mod=b%i;
            ll aki=a*i;
            ll bki=b/i;
            if((aki%2==0 && bki%2==0) || (aki%2==1 && bki%2==1))
            {
                maxi=max(maxi,aki+bki);
            }
            if(i!=b/i)
            {
                ll x=b/i;
                ll akx=a*x;
                ll bkx=b/x;
                if((akx%2==0 && bkx%2==0) || (akx%2==1 && bkx%2==1))
                {
                    maxi=max(maxi,akx+bkx);
                    cout << "X = " << x << el;
                }
            }
        }
    }
    return maxi;
}
int main()
{
    FAST_IN_OUT
    ll n;
    cin >> n;
    while(n--)
    {
        ll a,b,c;
        cin >> a >> b;
        if(a%b==0)///100 4,8 8
        {
            yes
            for (int i=1;i<=b;i++)
            {
                cout << a/b << sp;
            }
            cout << el;
            //continue;
        }
        else if(a>=b && a%2==b%2) /// 5 3
        {
            yes
            for (int i=1;i<=b-1;i++)
            {
                cout << 1 << sp;
            }
            cout << a-b+1 << el;
            //continue;
        }
        else if(a>=2*b && a%2==0 && b%2==1)
        {
            yes
            int st=a/b;
            if(st%2==1)
            { 
                st--;
            }
            for (int i=1;i<=b-1;i++)
            {
                cout << st << sp;
            }
            cout << a-(b-1)*st << el;
            //continue;
        }
        else no
    }
}
