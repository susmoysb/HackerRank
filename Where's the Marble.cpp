#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    int a,b;
    int i,j,k;
    int pos;
    cin >> m >> n ;
    pos=m;
    for(i=1;i<=n;i++)
    {
        cin >> a >> b ;
        if(a==pos)
        {
            pos=b;
        }
        else if(b==pos)
        {
            pos=a;
        }
    }

    cout << pos << endl;
    return 0;
}
