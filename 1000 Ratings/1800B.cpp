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
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        map<char,int>mp1;
        map<char,int>mp2;
        for (int i=0;i<a;i++)
        {
           if(islower(s[i]))
           {
              mp1[s[i]]++;
           }
           else
           {
              mp2[tolower(s[i])]++;
           }
        }
        ll co=0,to=0;
        for (char j='a';j<='z';j++)
        {
           int mini=min(mp1[j],mp2[j]);
           co+=mini;
           mp1[j]-=mini;
           mp2[j]-=mini;
           to+=(mp1[j]+mp2[j])/2;
        }
        co+=min(to,b);
        cout << co << endl;
    }
}
