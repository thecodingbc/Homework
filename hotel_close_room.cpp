#include <iostream>
using namespace std;
int main(){
  bool door[101] = {0}; // 0 close 1 open
  for(int att = 1; att<=100;++att){
    for(int opid = att; opid <= 100; opid = opid+att){
      door[opid] = door[opid] == 1?0:1;
     }
  }
  for(int i = 1; i <= 100; ++i){
    if(door[i]){
      cout<<i<<endl;
    }
  }
  
  return 0;
}
