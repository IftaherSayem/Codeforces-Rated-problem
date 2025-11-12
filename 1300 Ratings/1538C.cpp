#include <bits/stdc++.h>
using namespace std;

#define sp " "
#define el '\n'
#define ll long long
//Emon biswas vaiya bootcamp

void Solution()
{
    int n;
    cin >> n;
    while(n--)
    {   
        ll a,b,c;
        cin >> a >> b >> c;
        vector<ll>ar(a);
        for (int i=0;i<a;i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(),ar.end());
        ll i=0;
        ll co=0;
        while(i<a)
        {
            ll x1=b-ar[i];
            ll x2=c-ar[i];
            auto l=lower_bound(ar.begin()+i+1,ar.end(),x1);
            auto r=upper_bound(ar.begin()+i+1,ar.end(),x2);
            co+=(r-l);
            i++;
        }
        cout << co << el;
    }
}
int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);

      Solution();

      return 0;
}
