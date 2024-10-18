
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
        cin >> a >> b;
        vector <ll> ar(a),br(a);
        ll maxi=0;
        ll sum=0;
        for (int i=0; i<a; i++)
        {
            cin >> ar[i];
            sum+=ar[i];
            maxi+=(ar[i]+b-1)/b;
        }
        ll mini=(sum+b-1)/b;
        cout << mini << " " << maxi << endl;
    }
}
