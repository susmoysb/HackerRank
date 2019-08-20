#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[]="hackerrank",t[10009];

    int i,j,k,count=0;
    int ls,lt;
    int n;
    cin >> n ;
    getchar();
    for(k=1;k<=n;k++)
    {
        cin >> t ;
        ls=strlen(s);
        lt=strlen(t);
        for(i=0; i<ls; i++)
        {
            for(j=0; j<lt; j++)
            {
                if(s[i]==t[j])
                {
                    i++;
                    count++;
                }
            }
            break;
        }
        if(count==ls)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        count=0;
    }

    return 0;

}
