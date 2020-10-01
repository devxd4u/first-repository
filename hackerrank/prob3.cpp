/*
hackerrank category : SEARCHING
PROBLEM NAME : MISSING NUMBERS
*/


#include<bits/stdc++.h>
using namespace std;
void fun(int a[],int b[],int n,int m)
{
    sort(a,a+n);
    sort(b,b+m);
    int i=0,j=0;

    while(i<n && j<m)
    {
        if(a[i]==b[j])
        {
            i++;j++;
        }
        else
        {
            cout<<b[j]<<" ";
            int x=b[j];
            while(b[j]==x)
            {  
                j++;
            }
        }
    }
    while(j<m)
    {
       cout<<b[j]<<" ";
       int x=b[j];
       while(b[j]==x)
       j++;
    }
}
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int m;cin>>m;
    int b[m];
    for(int i=0;i<m;i++)cin>>b[i];
    fun(a,b,n,m);
    return 0;
}