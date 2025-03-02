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
bool prfcsq(ll a)
{
    ll squ = sqrt(a);
    return (squ * squ == a);
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
        vector<int>ar(a),br(a);
        set<int>st;
        for (int i=0;i<a;i++)
        {
            cin >> ar[i];
            st.insert(ar[i]);
        }
        for (int i=0;i<a;i++)
        {
            cin >> br[i];
            st.insert(br[i]);
        }
        map<int,int>mp1,mp2;
        for (int i=0;i<a;i++)
        {
            int co1=1;
            while(i<a-1 && ar[i]==ar[i+1])
            {
                co1++;
                i++;
            }
            mp1[ar[i]]=max(mp1[ar[i]],co1);
        }
        for (int i=0;i<a;i++)
        {
            int co2=1;
            while(i<a-1 && br[i]==br[i+1])
            {
                co2++;
                i++;
            }
            mp2[br[i]]=max(mp2[br[i]],co2);
        }
        int res=0;
        for (auto it:st)
        {
            res=max(res,mp1[it]+mp2[it]);
        }
        cout << res << el;
    }
}
