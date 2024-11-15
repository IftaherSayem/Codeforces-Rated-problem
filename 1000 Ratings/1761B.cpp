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
        int a;
        cin >> a;
        set<int>st;
        for(int i=0;i<a;i++)
        {
            int b;
            cin >> b;
            st.insert(b);
        }
        if(a==1)
        {
            cout << 1 << el;
            continue;
        }
        if(st.size()!=2)
        {
            cout << a << el;
        }
        else
        {
            cout << ((a-2)/2)+2 << el;
            ///a=8
            ///1 [2] [1] 2 1 2 1 2
            ///if we remove 2 it will automatically delete  adjacent element beacause in question they say that if a element is erase and it's adjacent element ar same in left and right one element remove automatically.so in this case 1 remove
            ///count=1
            ///1 [2] [1] 2 1 2
            ///if we remove 2 it will automatically delete  adjacent element beacause in question they say that if a element is erase and it's adjacent element ar same in left and right one element remove automatically.so in this case 1 remove
            ///count=2
            ///1 [2] [1] 2
            ///if we remove 2 it will automatically delete  adjacent element beacause in question they say that if a element is erase and it's adjacent element ar same in left and right one element remove automatically.so in this case 1 remove
            ///count=3
            ///1 2
            ///This 2 element we remove manually
            ///count=5
            ///so the logic is((a-2)/2)+2
        }
    }
}
