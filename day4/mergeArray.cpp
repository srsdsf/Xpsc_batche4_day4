#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m),c(n+m);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int j=0; j<m; j++)
    {
        cin>>b[j];
    }
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a[i] <= b[j])
        {
            c[k]=a[i];
            k++,i++;
        }
        else
        {
           c[k] =b[j];
           k++,j++;
        }
    }
    while(i<n)
    {
       c[k]=a[i];
       i++;
       k++;
    }
    while(j<m)
    {
       c[k]= b[j];
       j++;
       k++;
    }
    for(int i=0; i<c.size(); i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<'\n';
}