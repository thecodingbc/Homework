#include <iostream>
using namespace std;
int main()
{
    //define
    int a, a1,a2,a3,a4;
    int b, b1,b2,b3,b4;
    int c1,c2,c3,c4;
    int d1,d2,d3,d4;
    int area;

    
    //cin
    cin>>a1>>a2>>a3>>a4;
    cin>>b1>>b2>>b3>>b4;
    cin>>c1>>c2>>c3>>c4;
    
    
    
    
  //area  
    
    area=(a3-a1)*(a4-a2)+(b3-b1)*(b4-b2);
    int overlap=0;

    
    //first
    for(int x=a1;x<a3;x++)
    {
        
        
    //second
        for (int y=a2+1;y<=a4;y++)
         // y > a2; y <= a4
        // cout<<x<<" "<<y;
        {
        if (x>=c1 && x<c3 && y>c2 && y<=c4)
        overlap++;
        }
    }
    
    //third  
    for(int i=b1;i<b3;i++)
    {
        for (int j=b2+1;j<=b4;j++)
        {
        if (i>=c1 && i<c3 && j>c2 && j<=c4)
            overlap++;
        }
    }

    cout<<area-overlap;
    return 0;
}