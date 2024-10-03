#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int n,m,a;
    cin >> n >> m >> a;
    long long x = ceil((double)n / a);
    long long y = ceil((double)m / a);
    long long mul = x * y;
    cout << mul << endl;
}
 
