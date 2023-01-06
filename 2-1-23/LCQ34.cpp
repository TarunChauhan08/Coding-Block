#include <iostream>
using namespace std;
firstoccurence(int arr[],int n,int t){
    int start=0;
    int end=n-1;
    int ans=-1;
    for(int i=0;i<n;i++){
        int mid=(start+end)/2;
        if(arr[mid]==t){
			ans=mid;
            end=mid-1;
		}
		else if(arr[mid]<t){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
    }
    return ans;
}
lastoccurence(int arr[],int n,int t){
    int start=0;
    int end=n-1;
    int ans=-1;
    for(int i=0;i<n;i++){
        int mid=(start+end)/2;
        if(arr[mid]==t){
			ans=mid;
            start=mid+1;
		}
		else if(arr[mid]<t){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    cout<<"["<<firstoccurence(arr,n,t)<<lastoccurence(arr,n,t)<<"]";
   


}