
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

bool inco(pair <ll,ll>&a,pair<ll,ll>&b)
{
    return a.second<b.second;
}
string big_sum(string s)
{
    reverse(s.begin(),s.end());
    string st="9999";
    if(s.size()<st.size())
    {
        swap(s,st);
    }
    string an;
    int co=0;
    for (int i=0; i<st.size(); i++)
    {
        int we=s[i]-'0'+st[i]-'0'+ co;
        an+=we%10 + '0';
        co= we/10;
    }
    for (int i=st.size(); i<s.size(); i++)
    {
        int we=s[i]-'0'+ co;
        an+=we%10 + '0';
        co= we/10;
    }
    if(co>0)
    {
        an+=co+'0';
    }
    reverse(an.begin(),an.end());
    return an;
}

string big_multiply(string s)
{
    reverse(s.begin(), s.end());
    int co= 0;
    string st = "";
    for (int i = 0; i<s.size(); i++)
    {
        int digit=s[i] - '0';
        int we=digit * 9999 + co;
        st+=we % 10 + '0';
        co=we / 10;
    }
    while (co>0)
    {
        st+=co % 10 + '0';
        co/=10;
    }
    reverse(st.begin(), st.end());
    return st;
}
int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    ll n;
    cin >> n;
    while(n--)
    {
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        if((a*d == b*c) || (a==0 && c==0)) cout << 0 << endl;
        else if((a==0 || c==0) || (a*d)%(b*c)==0 || (b*c)%(a*d)==0) cout << 1 << endl;
        else cout << 2 << endl;
    }
}
