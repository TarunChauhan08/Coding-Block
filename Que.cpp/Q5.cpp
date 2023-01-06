#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i-1;j++){
            cout<<" ";
        }
        int inc=n-i+1;
        for(int j=1;j<=(n-i+1);j++){
           cout<<" "<<inc;
           inc++;
        }
        int dec=2*n-2*i;
        for(int j=1;j<=n-i;j++){
            cout<<" "<<dec;
            dec--;
        }
        cout<<endl;
    }
}
