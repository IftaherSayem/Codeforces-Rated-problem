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
        vector<vector<int>> ar(a,vector<int>(a-1));
        vector<int>vc;
        for (int i=0;i<a;i++)
        {
            for (int j=0;j<a-1;j++)
            {
                cin >> ar[i][j];
                if(j==0) vc.push_back(ar[i][j]); 
            }
        }
        sort(vc.begin(),vc.end());
        int store;
        
        for (int i=0;i<vc.size()-1;i++)
        {
            if(vc[i]==vc[i+1])
            {
                store=vc[i];
                break;
            }
        }
        int idx=0;
        for (int i=0;i<a;i++)
        {
            if(ar[i][0]!=store) idx=i;
        }
        cout << store << sp;
        for(int i=0;i<a-1;i++)
        {
            cout << ar[idx][i] << sp;
        }
        cout << el;
    }
}
