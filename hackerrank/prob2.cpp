/*
question category : SEARCHING
question name : ICE CREAM PARLOUR
*/


#include<bits/stdc++.h>
using namespace std;
struct cost{
    int value;
    int index;
};
bool comp(struct cost p, struct cost q)
{
    return (p.value<q.value);
}
int binary(struct cost c[],int n,int k)
{
    int l=0,h=n-1;
    while(l<h)
    {
        int mid=l+(h-l)/2;
        if(c[l].value == k)return c[l].index;

        if(c[h].value == k)return c[h].index;

        if(c[mid].value==k) return c[mid].index;

        else if (c[mid].value>k)
        {
            h=mid-1;
        }
        else 
        l=mid+1;
    }
    return -1;
}

void price(struct cost c[],int n,int m)
{
    if(n==0 || n==1) return ;
     
    int a=0,k,id;

    stable_sort(c,c+n,comp);

    for(int i=0;i<n;i++)
    {
        a=c[i].value;
        k=m-a;
        if(a==k)
        {
            cout<<c[i].index+1<<" "<<c[i].index+2<<endl;
            break;
        }
        id=binary(c,n,k);
        if(id != -1)
        {
            int x=c[i].index+1,y=id+1;
            if(x<y)
            {
               cout<<x<<" "<<y<<endl;
            break;    
            }
            else
            {
                cout<<y<<" "<<x<<endl;
            break;
            }
            
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int m,n;cin>>m>>n;
        struct cost c[n];
        for(int i=0;i<n;i++)
        {
            c[i].index=i;
            cin>>c[i].value;
        }
        price(c,n,m);     
        //cout<<"output is"<<c[10].value<<" "<<c[41].value<<" check"<<c[35].value;
    }
}