#include <bits/stdc++.h>
using namespace std;
#define FAST_IN_OUT ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define loop(a,k) for (int i=a;i<k;i++)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define yes cout << "YES" << el;
#define no cout << "NO" << el;
#define gcd(a,b) __gcd(a,b)
#define ll long long
#define el "\n"
#define sp " "
const int m=1e9 + 7;
void test()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
bool chk(int a)
{
    if(a==2 || a==3 || a==5) return true;
    for(int i=2; i*i<=a; i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}

ll power(ll x, ll y)
{
    ll val = 1;

    while (y > 0)
    {
        if (y % 2 != 0)
            val = val * x;
        y = y / 2;
        x = x * x;
    }
    return val;
}
///in this problem still i have some confusion
int main()
{
    //test();
    FAST_IN_OUT
    ll n;
    cin >> n;
    while(n--)
    {
        int a,b;
        cin >> a;
        vector<int> ar(a+1);
        for (int i=1;i<=a;i++)
        {
            cin >> ar[i];
        }
        vector<int>nw(a+1);
        for (int i=a;i>=1;i--)
        {
            nw[i]=ar[i];
            int tree=i+ar[i];
            if(tree<=a)
            {
                nw[i]+=nw[tree];
            }
        }
        /*
        ///in this problem still i have some confusion
        for (int i=1;i<=a;i++)
        {
            cout << nw[i] << " ";
        }
        cout << el;
        int maxi=0;
        int st=0;
        vector<int>dq(a+1);
        for (int i=1;i<=a;i++)
        {
            dq[i]=ar[i];
            int tree=i+ar[i];
            if(tree<=a) dq[tree]=max(dq[tree],dq[i]+ar[tree]);
            
            int co=0;
            int pos=i;
            while(pos<a)
            {
                co+=ar[pos];
                pos+=ar[pos];
            }
            maxi=max(maxi,co);
            if(tree<=a)
            {   
                int indx=dq[tree-1]+ar[i];
                maxi=max(maxi,indx); 
            }
            else
            {
                maxi=max(maxi,i+ar[i]);
            }*/
        //}
        int total=*max_element(nw.begin(),nw.end());
        cout << total  << el;
    }  
}
