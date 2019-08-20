#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10009],r[10009];
    int i,j,l,p;
    int s1,s2;
    int ti,tc;
    cin >> tc ;
    getchar();
    for(ti=1;ti<=tc;ti++)
    {
        cin >> s;
        j=p=0;
        l=strlen(s);
        for(i=l-1;i>=0;i--)
        {
            r[j++]=s[i];
        }

        for(i=1;i<l;i++)
        {
            s1 = s[i]-s[i-1];
            s2 = r[i]-r[i-1];
            if(abs(s1)==abs(s2))
            {
                continue;
            }
            else
            {
                p=5;
                break;
            }
        }
        if(p!=5)
        {
            cout << "Funny" << endl;
        }
        else
        {
            cout << "Not Funny" << endl;
        }

    }

    return 0;
}
