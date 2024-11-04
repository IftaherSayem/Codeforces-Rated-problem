int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    ll n;
    cin >> n;
    while(n--)
    {
        ll a,b;
        cin >> a;
        vector <int> ar(a);
        for (int i=0;i<a;i++)
        {
           cin >> ar[i];
        }
        int ze=count(ar.begin(),ar.end(),0);
        int oth=abs(a-ze);
        if(ze==a || ze>oth+1)
        {
           int maxi=*max_element(ar.begin(),ar.end());
           if(maxi==1) cout << 2 << el;
           else cout << 1 << el;
        }
        else if(ze<=oth || ze==0 || ze==oth+1) cout << 0 << el;
    }
}
