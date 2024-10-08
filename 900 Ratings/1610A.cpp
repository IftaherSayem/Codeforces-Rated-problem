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
bool oddiv(ll n)
{
    if(n%2==1)
    {
        return true;
    }
    for (ll i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
        {
            return true;
        }
    }
    return false;
}
string dectobin(string s)
{
    string ans="";
    reverse(s.begin(),s.end());
    int con=stoi(s);
    int rem;
    while(con!=0)
    {
        rem=con%2;
        ans+=to_string(rem);
        con/=2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

ll bin(string s)
{
    reverse(s.begin(),s.end());
    ll an=0;
    
    for (int i=0; i<s.length(); i++)
    {
        
        an+=(s[i]-'0')*pow(2,i);
    }
    return an;
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
       if(a==1 && b==1)
       {
           cout << 0 << endl;
       }
       else if(a==1 || b==1)
       {
           cout << 1 << endl;
       }
       else
       {
           cout << 2 << endl;
       }
    }
}
