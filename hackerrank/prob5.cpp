/*
problem category:SEARCHING

problem name : Sherlock and array
*/
#include<bits/stdc++.h>
using namespace std;
void check(int a[],int n)
{
    if(n==1)
    {
        cout<<"YES"<<endl;
        return ;
    }
int sum=0,total=0;
for(int i=0;i<n;i++)total += a[i];

for(int i=0;i<n;i++)
{
   
    if(sum==(total-sum-a[i]))
    {
        cout<<"YES"<<endl;
        return;
    }
     sum += a[i];
}
cout<<"NO"<<endl;
    return ;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        check(a,n);
    }
    return 0;
}