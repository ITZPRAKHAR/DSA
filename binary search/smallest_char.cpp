#include <iostream>
using namespace std;


char smallchar(char a[] ,int n ,  char target){
    
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    while (s<=e){
       
    if (a[mid]>target){
        e = mid-1;
       }
       else{
        s = mid +1;
       }

       mid = (s+e)/2;
     }

     if(s%n !=0){

    return a[s];
     }
     else{
        return a[s%n];
     }
}

int main(){

    //ceiling of a number means ..a samallest number in the array equal or greater than our target element;
char letters[3] = {'c','f','j'};
char p = smallchar(letters,3,'g');
  cout<<p;

return 0;
}