#include <iostream>
using namespace std;
int mountain(int a[] , int n){
    int s = 0;
    int e = n -1;
    int mid = (s+e)/2;
 
     while (s<e){
        mid = (s+e)/2;
        

        if (a[mid] > a[mid +1]){
            e=mid;
        }

        else if(a[mid]< a[mid+1]){
             s= mid+1;
        }
        
     }
     return s;

}

int main(){


 int arr[10] = {12,13,19,41,55,69,70,71,96,72};
 cout<<mountain(arr , 10);
return 0;
}