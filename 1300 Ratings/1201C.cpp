#include <bits/stdc++.h>
using namespace std;

#define sp " "
#define el '\n'
#define ll long long
//Emon biswas vaiya bootcamp

void Solution()
{
    // int n;
    // cin >> n;
    // while(n--)
    // {   
        ll a,b;
        cin >> a >> b;
        vector<ll>ar(a);
        for (int i=0;i<a;i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(),ar.end());
        ll l=1;
        ll r=2e9;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            ll mx=0;
            for (int i=a/2;i<a;i++)
            {
                if(ar[i]<mid)
                {
                    mx+=mid-ar[i];
                }
            }
            if(mx<=b) l=mid+1;
            else r=mid-1;
        }
        cout << l-1 << el;
    // }
}
int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);

      Solution();

      return 0;
}
