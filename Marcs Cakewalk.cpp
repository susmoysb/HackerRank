#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100];
    int i,j;
    int b=0;
    long long int sum=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i] ;
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        sum = sum + (a[i]*(pow(2,b)));
        b++;
    }
    cout << sum << endl;
    return 0;
}
