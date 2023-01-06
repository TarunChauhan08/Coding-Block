#include <iostream>
using namespace std;
int Num=1;
int no=0;
int main() {
   for(int i=0;i<5;i++){
       for(int j=0;j<=i;j++){
           if(i%2==0){
            cout<<Num;
            Num=1-Num;
           }
           else{
               cout<<no;
               no=1-no;
           }
       }
       cout<<endl;
   }
}
