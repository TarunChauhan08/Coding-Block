#include <iostream>
using namespace std;
int main() {
    int n,even=0,odd=0,ans;
cin>>n;

  while(n>=1){
     int div=n%10;
      if(div%2==0){
          even+=div;
      }
      else{
          odd+=div;
      }
      n=n/10;
     
   
  }
ans=even-odd;
 cout<<ans;
  return 0;
}
