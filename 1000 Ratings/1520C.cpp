/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    ll n;
    cin >> n;
    while(n--)
    {
        ll a,b;
        cin >> a;
        if(a==2)
        {
           cout << -1 << endl;
           continue;
        }
        int co=1;
        int ev=2;
        for (int i=1;i<=a*a;i++)
        {
           if(co<=a*a)
           {
              cout << co << " ";
              co+=2;
           }
           else
           {
              cout << ev << " ";
              ev+=2;
           }
           if(i%a==0)
           {
              cout << endl;
           }
        }
    }
}
