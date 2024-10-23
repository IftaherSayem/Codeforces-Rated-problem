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
    ll a,b;
    string c,d;
    cin >> a >> b;
    vector <string> ar(a);
    vector<pair<string,string>> pr;
    for (int i=1;i<=b;i++)
    {
       cin >> c >> d;
       pr.push_back({c,d});
    }
    for (int i=0;i<a;i++)
    {
       cin >> ar[i];
    }
    vector <string> nw;
    for (int i=0;i<a;i++)
    {
       for (int j=0;j<pr.size();j++)
       {
          if(ar[i]==pr[j].first)
          {
             if(pr[j].first.size()<=pr[j].second.size())
             {
                nw.push_back(pr[j].first);
             }
             else
             {
                nw.push_back(pr[j].second);
             }
          }
       }
    }
    for (int i=0;i<nw.size();i++)
    {
       cout << nw[i] << " ";
    }
    cout << endl;
    //}
}
