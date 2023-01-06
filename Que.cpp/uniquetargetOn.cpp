#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int t;
    cin>>t;
    int start=0;
     int j=n-1;

    for(int i=0;i<n;i++){

       
        if(arr[start]+arr[j]>t){
            j--;
        }
        else if(arr[start]+arr[j]<t){
            start++;
        }
        else if(arr[start]+arr[j]==t){
            cout<<arr[start]<<" "<<arr[j];
          
        }
        else{
            cout<<"not found";
        }
        
    }
}