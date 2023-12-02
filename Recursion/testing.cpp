#include <iostream>
using namespace std;
int dp[1000] = {0};
int fact(int n) {
   if (n >= 0) {
      dp[0] = 1;
      for (int i = 1; i <= n; ++i) {
         dp[i] = i * dp[i - 1];
      }
      return dp[n];
   }
}
int main() {
   int n;
   while (1) {
      cout<<"Enter integer to compute factorial (enter 0 to exit): ";
      cin>>n;
      if (n == 0)
      break;
      cout<<fact(n)<<endl;
   }
   return 0;
}