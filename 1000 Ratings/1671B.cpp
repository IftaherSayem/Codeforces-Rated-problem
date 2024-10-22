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
        vector <int> ar(a);
        for (int i=0; i<a; i++)
        {
            cin >> ar[i];
        }
        int op1=ar[0];
        int op2=ar[0]+1;
        int op3=ar[0]-1;
        int co=0;
        for (int i=0;i<a;i++)
        {
           if(op1+1 < ar[i])
           {
              co++;
              break;
           }
           op1++;
        }
        for (int i=0;i<a;i++)
        {
           if(op2+1 < ar[i])
           {
              co++;
              break;
           }
           op2++;
        }for (int i=0;i<a;i++)
        {
           if(op3+1 < ar[i])
           {
              co++;
              break;
           }
           op3++;
        }
        if(co<3)
        {
           cout << "YES" << endl;
        }
        else
        {
           cout << "NO" << endl;
        }
    }
}
