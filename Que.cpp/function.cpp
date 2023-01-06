#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<a;
    cout<<b;
    return ;
}
int main() {
    cout<<"Hello World!";
    int f=10;
    int g=43;
   swap(f,g);
   cout<<f;
   cout<<g;
}