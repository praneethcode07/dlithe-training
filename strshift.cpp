#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,let="abcdefghijklmnopqrstuvwxyz";
    cin>>s;
    int a[10],j=0,k=0,c=1,m=0;
    for(int i=0;i<s.length();i++){
        cin>>a[i];
    }
    for(int i=0;i<s.length();i++){
        for(int j=0;j<=i;j++){
            for(int k=0;k<let.length();k++){
                 if(s[j]==let[k]){
                    s[j]=let[k+a[m]];
                    k=let.length();
                }
            }
        }
        m++;
    }
    cout<<s;
}