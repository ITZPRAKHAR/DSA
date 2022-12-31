#include <iostream>
using namespace std;

int ceiling(int a[] ,int n ,  int target){
    
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    while (s<=e){
       
       if(a[mid]==target){
        return mid;
       }
       else if (a[mid]>target){
        e = mid-1;
       }
       else{
        s = mid +1;
       }

       mid = (s+e)/2;
     }
    return -1;
}










int main(){


return 0;
}