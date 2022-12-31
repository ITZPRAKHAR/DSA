#include <iostream>
using namespace std;

int getpivot(int a[]  , int  n){
 int s = 0;
//   int n = a.size();
   int e = n-1;
   int mid = s + (e-s)/2;
   while (s<e){
    mid = s + (e-s)/2;
      if (a[mid] >a[mid+1]){
        s = mid+1;
      }
      else {
        e = mid;
      }
    } 
    return s;
}



int main(){

int a[5] = {2,3,4,5,1};
cout<<getpivot(a ,5);

return 0;
}