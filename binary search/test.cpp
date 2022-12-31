#include <iostream>
using namespace std;
int degree(int arr[] , int n){
int i; 
	    for ( i=0 ; i<n ; i++){
	        if ( i == arr[i]){
	            return arr[i];
	           }
	    } 
}  

int main(){
int a[5] = { 1,0,2,5,6};
cout<<degree(a , 5);

return 0;
}