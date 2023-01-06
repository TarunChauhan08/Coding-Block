#include <iostream>
using namespace std;
int main() {
    int n,div,ans=0,cube;
cin>>n;


  int n1=n;
  while(n>=1){
     int div=n%10;
     cube=div*div*div;
      ans+=cube;
      
      n=n/10;
     
   
  }
if(ans==n1){
    cout<<ans<<" "<<"is Armstrong number";
}
else{
    cout<<ans<<" "<<"is Not an Armstrong number";
}
 
  return 0;
}
