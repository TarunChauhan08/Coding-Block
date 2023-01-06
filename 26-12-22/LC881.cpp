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
    int end=n-1;
    int boat=0;
    while(start<=end){
        if(arr[start]==arr[end]){
            boat++;
            break;
        }
        else if(arr[start]+arr[end]>=t){
            boat++;
            start++;
            end--;

        }
        else{
            boat++;
            end--;
        }


    }
}