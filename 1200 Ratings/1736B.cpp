#include <bits/stdc++.h>
using namespace std;

#define sp " "
#define el '\n'
#define ll long long
#define lcm(a,b) (a*b)/__gcd(a,b)

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
        
        vector<ll>br(a+1);
        br[0]=ar[0];
        for (int i=1;i<a;i++)
        {
            br[i]=lcm(ar[i-1],ar[i]);
        }
        br[a]=ar[a-1];
        bool fnd=false;
        for (int i=0;i<a;i++)
        {
            if(ar[i]!=__gcd(br[i],br[i+1]))
            {
                fnd=true;
                break;
            }
        }
        if(fnd) cout << "NO\n";
        else cout << "YES\n";
    }
}

int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);

      Solution();

      return 0;
}
