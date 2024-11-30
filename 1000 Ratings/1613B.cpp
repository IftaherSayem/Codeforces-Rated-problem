int main()
{
    //test();
    FAST_IN_OUT
    ll n;
    cin >> n;
    while(n--)
    {
        ll a,b;
        cin >> a;
        vector <ll> ar(a);
        loop(0,a)
        {
            cin >> ar[i];
        }
        int mini=*min_element(ar.begin(),ar.end());
        int co=0;
        loop(0,a)
        {
            if(ar[i]==mini) continue;
            cout << ar[i] << " " << mini << el;
            co++;
            if(co==a/2) break;
        }
    }
}
