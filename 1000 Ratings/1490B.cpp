/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
#define FAST_IN_OUT ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define loop(a,k) for (int i=a;i<k;i++)
#define full(ar) (ar.begin(),ar.end())
#define yes cout << "YES" << el;
#define no cout << "NO" << el;
#define pb push_back
#define ll long long
#define el "\n"
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
    while (n--)
    {
        int a,b;
        cin >> a;
        vector<int>ar(a);
        vector<int>vc(3);
        int co0=0,co1=0,co2=0;
        loop(0,a)
        {
            cin >> ar[i];
            vc[ar[i]%3]++;
        }
        int ans=a/3;
        int res=0;
        loop(0,3)
        {
            if(vc[0]>ans)
            {
                res+=vc[0]-ans;
                vc[1]+=vc[0]-ans;///it add to vc[1] so that it balanced i can add any  one but in 3 condition 3 have to be given
                vc[0]=ans;
            }
            if(vc[1]>ans)
            {
                res+=vc[1]-ans;
                vc[2]+=vc[1]-ans;
                vc[1]=ans;
            }
            if(vc[2]>ans)
            {
                res+=vc[2]-ans;
                vc[0]+=vc[2]-ans;
                vc[2]=ans;
            }
        }
        cout << res << el;
    }
}
