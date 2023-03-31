#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int moonie = 3;
    int days;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        if(days==0 || d>days+k){
            moonie+=k;
            days = d;
        }
        else{
            d=max(days,d);
        }
    }
    if(days>0){
        moonie+=k;
    }
    cout<<moonie;
    return 0;
}
