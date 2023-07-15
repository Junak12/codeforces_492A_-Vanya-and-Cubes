#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    int n;
    cin>>n;
    int sum=0,cnt=0;
   /* if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }*/
    for(int i=1;i<=n;i++)
    {
        sum+=i;
        if(n>=sum)
        {
            cnt++;
        }
        n=n-sum;
    }
    cout<<cnt<<endl;
    return 0;
}
