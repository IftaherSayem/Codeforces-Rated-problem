int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    //ll n;
    //cin >> n;
    //while(n--)
    //{
    ll a,b,c,d;
    string s;
    cin >> s;
    if(s.size()==1)
    {
       cout << 0 << el;
    }
    else
    {
       int co=0;
       string nw=s;
       while(nw.size()>1)
       {
          int sum=0;
          for (char dg:nw)
          {
             sum+=dg-'0';
          }
          nw=to_string(sum);
          co++;
       }
       cout << co << el;
    }
    //}
}
