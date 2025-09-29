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
bool palindrome(int a)
{
    if (a<0 || (a%10==0 && a!=0)) return false;
    int rev=0;
    while (a>rev)
    {
        rev=rev*10+ a%10;
        a/=10;
    }
    return a==rev || a==rev/10;
}

int main()
{
    FAST_IN_OUT
    // int n;
    // cin >> n;
    // while(n--)
    // {
        int a,b,c,d;
        cin >> a;
        vector<int>ar(a);
        vector<pair<int,int>>pr(a);
        for (int i=0;i<a;i++)
        {
            cin >> ar[i];
        }
        int start=1,stop=0;
        for (int i=0;i<a;i++)
        {
            if(i==0)
            {
                pr[i]={1,ar[i]};
                // cout << "IF CON : " << start << sp << ar[i] << el;
                stop=ar[i];
                // cout << stop << el;
                // cout << "==================\n";
            }
            else
            {
                int fs=start+ar[i-1];
                int ls=ar[i]+stop;
                // cout << fs << sp << ls << el;
                pr[i]={fs,ls};
                start=fs;
                stop=ls;
                // cout << "Start Stop : " << start << sp << stop << el;
            }
        }
        // for (int i=0;i<pr.size();i++)
        // {
        //     cout << pr[i].first << sp << pr[i].second << el;
        // }
        cin >> b;
        vector<int>br(b);
        for (int i=0;i<b;i++)
        {
            cin >> br[i];
        }
        for (int i=0;i<b;i++)
        {
            int l=0,r=a-1,res=-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(br[i]>=pr[mid].first && br[i]<=pr[mid].second)
                {
                    res=mid+1;
                    break;
                }
                else if(br[i]<pr[mid].first)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            cout << res << el;
        }
    // }
}
