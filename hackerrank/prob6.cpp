//printing a matrix in spiral form
#include<iostream>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>a[i][j];

    int k=0,l=m-1,x=n-1,y=0;
    while(k<x && l>y)
    {
        for(int i=y;i<l;i++)
        cout<<a[k][i]<<" ";

        for(int i=k;i<x;i++)
        cout<<a[i][l]<<" ";

        for(int i=l;i>y;i--)
        cout<<a[x][i]<<" ";

        for(int i=x;i>k;i--)
        cout<<a[i][y]<<" ";

        k++;l--;y++;x--;

    }
}