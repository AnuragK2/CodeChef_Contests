/*you have a binary string SS. You can perform the following operation on SS:

Select any substring S_{L \dots R}S 
L…R
​
  (1 \le L \le R \le |S|)(1≤L≤R≤∣S∣) which is sorted and remove it from SS. (Both the left and right halves are concatenated after performing the operation)
For e.g. if S = 100011000S=100011000, we can perform the following operation: 100\underline{011}000 \rightarrow 100000100 
011
​
 000→100000

Find the minimum number of operations required so that the final binary string SS is sorted.

Note that a substring is formed by deleting some (possibly zero) characters from the beginning and some (possibly zero) characters from the end of the string.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int ans=0;
	    for(int i=1;i<n;i++){
	        if(s[i]=='0' && s[i-1]=='1')
	            ans++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
