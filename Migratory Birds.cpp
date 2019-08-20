#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200009];
    int i,j,k,m=-1;
    int ar[10];
    cin >> n ;
    for(i=0;i<n;i++)
    {
        cin >> a[i] ;
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            ar[0]++;
        }
        else if(a[i]==2)
        {
            ar[1]++;
        }
        else if(a[i]==3)
        {
            ar[2]++;
        }else if(a[i]==4)
        {
            ar[3]++;
        }
        else if(a[i]==5)
        {
            ar[4]++;
        }
    }

    for(j=0;j<5;j++)
    {
        if(ar[j]>m)
        {
            m=ar[j];
            k=j;
        }
    }
    cout << k+1 << endl;

    return 0;
}
