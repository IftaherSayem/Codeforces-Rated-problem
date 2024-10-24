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
    //ll n;
    //cin >> n;
    //while(n--)
    //{
    ll a,b,c,d;
    cin >> a;
    vector <int>ar(a);
    for (int i=0;i<a;i++)
    {
       cin >> ar[i];
    }
    sort(ar.begin(),ar.end());
    bool chk=false;
    for(int i=0;i<a-2;i++)
    {
       if(ar[i]+ar[i+1]>ar[i+2])
       {
          chk=true;
          break;
       }
    }
    if(chk)
    {
       cout << "YES" << endl;
    }
    else
    {
       cout << "NO" <<endl;
    }
    //}
}
