#include <iostream>
using namespace std;

int main()
{
    int n,m,sum,car=0;
    cin>>n;
    cin>>m;
    int maxi=max(n,m);
    int a[maxi],b[maxi],c[maxi];
    for(int i=0;i<maxi;i++){
        a[i]=0;
        b[i]=0;
    }
    for(int i=maxi-n;i<maxi;i++)
    {
        cin>>a[i];
    }
    for(int i=maxi-m;i<maxi;i++)
    {
        cin>>b[i];
    }
    for(int i=maxi-1;i>=0;i--){
        sum=a[i]+b[i]+car;
        car=sum/10;
        c[i]=sum%10;
    }
    for(int i=0;i<maxi;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}