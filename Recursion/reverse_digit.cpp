#include <iostream>
using namespace std;

void revrsedigi(int  n){
    if(n==0){
    return;
    }
    int rev =0;
   

    int rem = n%10;
    rev = rev*10 + rem;
    revrsedigi(n/10);
    
    }
int main(){
revrsedigi(1342);
cout<<
// cout<<ans<<endl;
return 0;
}