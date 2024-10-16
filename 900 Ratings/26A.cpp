
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
   for(int i=2;i*i<=a;i++)
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
       ll a;
       cin >> a;
       int to=0;
       for (int i=6;i<=a;i++)///we ignore 2,3,5 as they haven't two distinct divisor
       {
          int co=0;
          for (int j=2;j<i;j++)
          {
             if(i%j==0 && chk(j))
             {
                co++;
             }
          }
          if(co==2)
          {
             to++;
          }
       }
       cout << to << endl;
    //}
}
