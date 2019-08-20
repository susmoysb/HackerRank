#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100009],i,j,ans;
    long long int minDiff;
    cin >> n ;
    for(i=0; i<n; i++)
    {
        cin >> a[i] ;
    }

    sort(a,a+n);

    minDiff = a[1]-a[0];
    for (i = 2 ; i <n  ; i++)
    {
        minDiff = min(minDiff, a[i]-a[i-1]);
    }

    cout << minDiff << endl;

    return 0;
}
