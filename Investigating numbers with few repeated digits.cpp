#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,t,k;
    long long int i,j,md;
    cin >> m >> t ;
    for(i=1;i<=t;i++)
    {
        cin >> k ;
        md = k%10;

        if(md<=m)
        {
            for(j=1;j<=md;j++)
            {
                cout << "1" ;
            }
            cout << endl;
        }
        else
        {
            for(j=1;j<=md;j++)
            {
                cout << j ;
            }
            cout << endl;
        }
    }
    return 0;
}
