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
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;///sx=c,sy=d
        ///int x1=abs(c-1);          /// (1,1) (1,2) [1,3]              (1,1) (1,2) (1,3) (1,4) (1,5)
        ///int x2=abs(c+1);          /// (2,1) (2,2) (2,3)              (2,1) (2,2) (2,3) (2,4) (2,5)
        ///int x3=abs(d-1);          /// (3,1) (3,2) (3,3)              (3,1) (3,2) (3,3) [3,4] (3,5)
        ///int x4=abs(d+1);          ///                                (4,1) (4,2) (4,3) (4,4) (4,5)
                                     ///                                (5,1) (5,2) (5,3) (5,4) (5,5)
        if(((c-e)<=1 && (c+e)>=a) || ((d-e)<=1 && (d+e)>=b) || ((c-e)<=1 && (d-e)<=1)|| ((c+e)>=a && (d+e)>=b))
        {
           cout << -1 << el;
        }
        else
        {
           cout << a-1+b-1 << el;
        }
    }
}
