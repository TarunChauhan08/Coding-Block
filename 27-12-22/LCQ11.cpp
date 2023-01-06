#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int height[9]={1,8,6,2,5,4,8,3,7};
   

   
  
        int size=sizeof(height)/sizeof(int);
        int area=0;
        int start=0;
        int end=size-1;
        
        while(start<end){
            int width =end-start;
            int high=min({height[start],height[end]});
             int curr_area=high * width;
             area=max({area,curr_area});
            if(height[start]>height[end]){
                end=end-1;
            }
            else{
                start=start+1;
            }
           
            
       
      
    }
     cout<<area;
};
