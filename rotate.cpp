#include<iostream>
using namespace std;

int main()
{
    int n,a[20],d;
    cin>>d;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=d;i<n;i++)
        cout<<a[i];
    for(int i=0;i<d;i++)
        cout<<a[i];
    return 0;
    
}