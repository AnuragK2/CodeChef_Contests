/*Chef has an integer NN. It is known that the largest odd divisor of NN does not exceed 10^5105.
Determine two non-negative integers AA and BB such that A^2 + B^2 = N A2+B2=N, or report that no such pair exists.*/

#include<bits/stdc++.h> 
#define int long long 
using namespace std; 
int n,x; 
void solve() { 
   cin >> n;x=0; 
   while(n%2==0) {x++;n/=2;} 
   if(x%2==1) {x--;n*=2;} 
   for(int i=0;i*i<=n;++i) { 
      int y=n-i*i,z=sqrt(y); 
      if(z*z==y) { 
         cout << (z<<(x/2)) << ' ' << (i<<(x/2)) << endl; 
         return; 
      } 
   } 
   puts("-1"); 
} 
signed main() { 
   int T;cin >> T; 
   while(T--) solve(); 
}

