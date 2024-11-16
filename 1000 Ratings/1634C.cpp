/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define el "\n"
#define yes cout << "YES" << el;
#define no cout << "NO" << el;
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
        int a,b;
        cin >> a >> b;
        if(b==1)
        {
            yes
            for (int i=1;i<=a;i++)
            {
                cout << i << el;
            }
        }
        else
        {
            if(a%2==1) no
            else
            {
                yes
                int co1=1,co2=2;
                for (int i=1;i<=a;i++)
                {
                    if(i%2==1)
                    {
                        for (int j=1;j<=b;j++)
                        {
                            cout << co1 << " ";
                            co1+=2;
                        }
                        cout << el;
                    }
                    else
                    {
                        for (int j=1;j<=b;j++)
                        {
                            cout << co2 << " ";
                            co2+=2;
                        }
                        cout << el;
                    }
                }
            }
        }
    }
}
