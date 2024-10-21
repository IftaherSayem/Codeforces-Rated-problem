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
        vector<int> ar(a);
        for (int i=0;i<a;i++)
        {
           cin >> ar[i];
        }
        cin >> b;
        vector<int> br(b);
        for (int i=0;i<b;i++)
        {
           cin >> br[i];
        }
        int maxi1=0;
        int sum1=0;
        int maxi2=0;
        int sum2=0;
        for (int i=0;i<a;i++)
        {
           sum1+=ar[i];
           maxi1=max(maxi1,sum1);
        }
        for (int i=0;i<b;i++)
        {
           sum2+=br[i];
           maxi2=max(maxi2,sum2);
        }
        cout << max(0,maxi1+maxi2) << endl;
    }
}
