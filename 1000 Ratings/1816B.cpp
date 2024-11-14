/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define el endl
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
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    ll n;
    cin >> n;
    while (n--)
    {
        ll a,b,c,d,e;
        cin >> a;
        ///int ar[2][a];
        int first=a*2;
        int diff=first-2;
        vector<int> ar(a+1);
        for (int i=1;i<=a;i++)
        {
            ar[i]=first;
            if(i%2==1)
            {
                first-=diff;
                diff-=2;
            }
            else
            {
                first+=diff;
                diff-=2;
            }
        }
        for(int i=1;i<=a;i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
        int last=1;
        vector <int>br(a+1);
        int diff1=a*2-2;
        for (int i=1;i<=a;i++)
        {
            br[i]=last;
            if(i%2==1)
            {
                last+=diff1;
                diff1-=2;
            }
            else
            {
                last-=diff1;
                diff1-=2;
            }
        }
        if(a>2) swap(br[2],br[a]);
        for (int i=1;i<=a;i++)
        {
            cout << br[i] << " ";
        }
        cout << endl;
    }
}
