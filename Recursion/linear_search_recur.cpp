#include <iostream>
using namespace std;

int linearS(int a[] , int n , int data  ){
    if(n == 0){
    return -1;
    }
    if(a[0] == data){
        return ;
    }
    else
    linearS(a+1 , n-1 , data);
    
}
int main(){
     int a[5] =  {1,2,3,4,5};

    cout<<linearS(a , 5, 4);

return 0;
}