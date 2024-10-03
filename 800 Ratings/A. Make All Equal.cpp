/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void test()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int finding(char ch)
{
    return ch-'A'+1;
}
int posi(int h)
{
    return h+'a'-1;
}
bool deco(pair <int,int>&a,pair<int,int>&b)
{
    return a.second>b.second;
}
int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    ll n;
    cin >> n;
    while(n--)
    {
        ll a,b,c,d,e,f;
        cin >> a;
        vector <int> ar(a);
        vector <int> freq(101,0);
        for (int i=0;i<a;i++)
        {
           cin >> ar[i];
           freq[ar[i]]++;
        }
        if(a==1)
        {
            cout << 0 << endl;
            continue;
        }
        int ans=a-*max_element(freq.begin(),freq.end());
        cout << ans << endl;
    }
}
