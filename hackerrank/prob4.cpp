//finding the pair problem
#include<bits/stdc++.h>
using namespace std;
void fun(int a[],int n,int k)
{
    sort(a,a+n);
    int c=0,x;
    for(int i=0;i<n;i++)
    {
        x=a[i];
        if(binary_search(a,a+n,x-k))
        c++;
    }
    cout<<c<<endl;
}
int main()
{
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    fun(a,n,k);
    return 0;
}