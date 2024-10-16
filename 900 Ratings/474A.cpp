
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

bool inco(pair <ll,ll>&a,pair<ll,ll>&b)
{
    return a.second<b.second;
}
int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    //ll n;
    //cin >> n;
    //while(n--)
    //{
    string s,d;
    cin >> s;
    cin >> d;
    string first="qwertyuiopasdfghjkl;zxcvbnm,./";
    //string mid="asdfghjkl;";
    //string last="zxcvbnm,./";
    string xd="";
    if(s[0]=='R')
    {
        for (int i=0; i<d.size(); i++)
        {
            int nw=first.find(d[i]);
            xd+=first[nw-1];
        }
    }
    else
    {
        for (int i=0; i<d.size(); i++)
        {
            int nw=first.find(d[i]);
            xd+=first[nw+1];
        }
    }
    cout << xd << endl;
    //}
}
