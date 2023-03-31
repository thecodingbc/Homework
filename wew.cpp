#include <iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int ld=0;
    int he=0;
    for(int i=0;i<n;i++){
        int d,b;
        cin>>d>>b;
        he+=(d-ld-1);
        he+=b;
        ld=d;
    }
    he+=(t-ld);
    cout<<he;
    
    return 0;
}
