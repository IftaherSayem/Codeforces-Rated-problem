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
        int a, b;
        cin >> a >> b;
        int ar[a][b];
        for (int i=0;i<a;i+=2)
        {
           for (int j=0;j<b;j+=2)
           {
              if((i+j)%4==0)
              {
                 ar[i][j]=0;
                 ar[i+1][j]=1;
                 ar[i][j+1]=1;
                 ar[i+1][j+1]=0;
              }
              else
              {
                 ar[i][j]=1;
                 ar[i+1][j]=0;
                 ar[i][j+1]=0;
                 ar[i+1][j+1]=1;
              }
           }
        }
        for (int i=0;i<a;i++)
        {
           for (int j=0;j<b;j++)
           {
              cout << ar[i][j] << " ";
           }
           cout << el;
        }
    }
}
