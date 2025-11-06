#include <bits/stdc++.h>
using namespace std;

#define sp " "
#define el '\n'

void Solution()
{
    string s1,s2;
    cin >> s1 >> s2;
    int co4=count(s1.begin(),s1.end(),'4');
    int co7=count(s1.begin(),s1.end(),'7');
    int co=0,un=0;
    for (int i=0;i<s1.size();i++)
    {
        if(s1[i]=='4' && s2[i]=='7') co++;
        else if(s1[i]=='7' && s2[i]=='4') un++;
        
    }
    // cout << co << el << un << el;
    cout << max(co,un) << el;
}

int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);

      Solution();

      return 0;
}
