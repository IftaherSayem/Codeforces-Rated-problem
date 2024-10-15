
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
    string a;
    cin >> a;
    ///SEE THEOREM
    ///8^1=8     last digit : 8
    ///8^2=64                 4
    ///8^3=512                2
    ///8^4=4096               6
    ///8^5=32768              8
    ///8^6=262144             4

    string st="8426";
    int ans=stoll(a)%4;
    if(stoll(a)==0)
    {
        cout << 1 << endl;
    }
    else if(ans%4==0)
    {
        cout << 6 << endl;
    }
    else
    {
        cout << st[ans-1] << endl;
    }
    //}
}
