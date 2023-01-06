#include <iostream>
using namespace std;
int main() {
    int n,div,ans=0;
cin>>n;
int n1=n;


  while(n>=1){
     int div=n%10;
     ans=ans*10+div;
     
      
      n=n/10;
     
   
  }

if(ans==n1){
    cout<<ans<<" "<<"is Palindrome";
}
else{
   cout<<ans<<" "<<"is not Palindrome";
}
 
  return 0;
}
