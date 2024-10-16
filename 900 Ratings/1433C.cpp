
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
    ll n;
    cin >> n;
    while(n--)
    {
       ll a;
       cin >> a;
       vector <int> ar(a);
       map<int,int>fr;
       for (int i=0;i<a;i++)
       {
          cin >> ar[i];
          fr[ar[i]]++;
       }
       int maxi=*max_element(ar.begin(),ar.end());
       int indx=-1;
       for (int i=0;i<a;i++)
       {
          if(maxi==ar[i])
          {
             if(i>0 && ar[i-1]!=maxi)
             {
                indx=i+1;
                break;
             }
             if(i<a-1 && ar[i+1]!=maxi)
             {
                indx=i+1;
                break;
             }
          }
       }
       cout << indx << endl;
    }
}
