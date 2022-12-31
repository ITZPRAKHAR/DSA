#include <iostream>
using namespace std;

int  sumdigi(int n){
        if(n == 0)
        return 0;
        else
        return sumdigi(n/10) + n%10;
}
int main(){
int ans = sumdigi(1342);
cout<<ans<<endl;
cout<<10%1;
return 0;
}