#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[9999] ;
    int i,j,k,l,q,fl;
    int counter,z;
    cin >> q ;
    getchar();
    while(q--)
    {
        fl=counter=0;
        cin >> s ;
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]=='1')
            {
                if(s[i+1]=='0')
                {
                    for(j=i+2;;j++)
                    {
                        if(s[j]=='0')
                        {
                            continue;
                        }
                        else if(s[j]=='1')
                        {
                            counter++;
                            break;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        cout << counter << endl;
    }
    return 0;
}
