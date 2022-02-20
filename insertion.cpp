#include<iostream>
using namespace std;
int main()
{
    int i,j,x,a[100],n,pos,key;
    cout<<"Enter the numbers:";
    cin>>n;
    cout<<"`Enter the elements:";
    for(i=1;i<=n;i++)
    cin>>a[i];
    for(i=2;i<=n;i++)
        {
        key=a[i];
        pos=i;
        while(pos>1&a[pos-1]>key)
        {
            a[pos]=a[pos-1];
            pos=pos-1;
            a[pos]=key;
        }
    }
    cout<<"Sorted array";
    for(i=1;i<=n;i++)
    cout<<a[i]<<"\t";
}