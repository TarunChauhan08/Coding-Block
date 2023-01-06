#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=0;
    int i=-1;
    int j=n;
    while(k<j){
        if(arr[k]==0){
            i++;
            swap(arr[i],arr[k]);
            k++;
        }
        else if(arr[k]==1){
        k++;
        }
        else{
            j--;
            swap(arr[k],arr[j]);

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}