#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100009];
    int i,j,k;
    cin >> n ;
    for(i=0;i<n;i++)
    {
        cin >> a[i] ;
    }
    int c=1;
    sort(a,a+n);
    k=a[n-1];
    for(j=n-2;j>=0;j--)
    {
        if(k==a[j])
        {
            c++;
        }
        else
        {
            break;
        }
    }
    cout << c << endl;
    return 0;
}
