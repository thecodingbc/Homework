
#include <iostream>
using namespace std;
int main()
{
    cout<<"enter a number";
    int a[100] = {0};
    for(int i = 0; i<100;i++){
        cin>>a[i];
        a[i] = 20+a[i];
        cout<<a[i];
        return 0;
    }


  
    int sum=0;
    for(int i=0; i<100; i++){
        sum = sum+a[i];
    }
    int max = a[0];
    for(int i = 0; i<100; i++){
        if(a[i]>max) max = a[i];
    }

    
   
    int min = a[0];
    for(int i = 0; i <100; i++){
        if(a[i] <min) min = a[i];
    }
    int counter = 0;
    for(int i = 0; i<100; i++){
        if(a[i] > max) counter++;
    }
    return 0;
    
}

