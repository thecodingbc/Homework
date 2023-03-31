#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("shuffe.in", "r", stdin);
	freopen("shuffle.out2", "w", stdout);
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    for (int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i<n; i++)
    {
        cin>>b[i];
    }
    for (int x = 0; x < n; x++)
    {
        c[x]=a[a[a[x]-1]-1]-1;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<b[(c[i])]<<endl;
    }
    
    
    return 0;
}
