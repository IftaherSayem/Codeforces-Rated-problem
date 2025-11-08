#include <bits/stdc++.h>
using namespace std;

#define sp " "
#define el '\n'
#define ll long long

void Solution()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a,b;
        cin >> a;
        vector<ll>ar(a);
        for (int i=0;i<a;i++)
        {
            cin >> ar[i];
        }
        ll mx=a;
        ll mn=1;
        int l=0,r=a-1;
        bool fnd=false;
        while(l<r)
        {
            if((ar[l]==mx && ar[r]==mn) || (ar[l]==mn && ar[r]==mx))
            {
                l++;
                r--;
                mx--;
                mn++;
            }
            else if(ar[l]==mx)
            {
                l++;
                mx--;
            }
            else if(ar[l]==mn)
            {
                l++;
                mn++;
            }
            else if(ar[r]==mx)
            {
                r--;
                mx--;
            }
            else if(ar[r]==mn)
            {
                r--;
                mn++;
            }
            else
            {
                cout << l+1 << sp << r+1 << el;
                fnd=true;
                break;
            }
        }
        // if(l!=-1 && r!=-1) cout << l+1 << sp << r+1 << el;
        if(!fnd) cout << -1 << el;
    }
}

int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);

      Solution();

      return 0;
}
