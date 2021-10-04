#include<bits/stdc++.h>
using namespace std;



long long test(long long t)
{
    if(t==0)
    {
        return 0;
    }
    long long n;
    cin>>n;
    long long k;
    cin>>k;
    long long l;
    cin>>l;
    if(k==1&&n>1)
    {
        cout<<-1<<"\n";
        return test(--t);
    }
    if((k*l)>=n)
    {
        long long j=1;
        for(long long i=1;i<=n;i++)
        {
            if(i>k)
            {
                cout<<j<<" ";
                j++;
                if(j>k)
                {
                    j=1;
                }
            }
            else
            cout<<i<<" ";

        }
    }
    else
    {
        cout<<"-1\n";
    }
    cout<<endl;
    return test(--t);
}

int main()
{
    long long t;
    cin>>t;
    test(t);
    return 0;
}
