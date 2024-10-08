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
        ll a;
        cin >> a;
        ll s1=0;
        ll s2=0;
        vector<int> ar;
        bool chk=false;
        while(a>1)
        {
            if(a%2==0)
            {
                ///cout << "con 1: " << (a+1)/2 << endl;
                //ar.clear();
                chk=true;
                break;
            }
            else if (((a+1)/2)%2==1)
            {
                ar.push_back(1);
                a=(a+1)/2;
            }
            else
            {
                ///cout << "con 2: " << a/2 << endl;
                ar.push_back(2);
                a=(a-1)/2;
            }
        }
        if(chk==true)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ar.size() << endl;
            reverse(ar.begin(),ar.end());
            for (int i=0; i<ar.size(); i++)
            {
                cout << ar[i] << " ";
            }
            cout << endl;
        }
    }
}
