#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j,k,count=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
            if(i%2!=0)
            {
                for(k=1;k<=m;k++)
                {
                    cout<<"#";
                }
            }
            else
            {
                if(i%2==0)
                    count++;
                if(count%2!=0)
                {
                 for(k=1;k<=m-1;k++)
                {

                    cout<<".";
                }
                cout<<"#";
                }
                else
                {
                    cout<<"#";
                    for(k=1;k<=m-1;k++)
                    {
                        cout<<".";
                    }
                }
            }
             cout<<"\n";
    }
}
