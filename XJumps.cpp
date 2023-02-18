/*Chef is currently standing at stair 00 and he wants to reach stair numbered XX.

Chef can climb either YY steps or 11 step in one move.
Find the minimum number of moves required by him to reach exactly the stair numbered XX.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int res=x%y;
	    int ans=x/y;
	    if(res==0){
	        cout<<ans<<endl;
	    }else{
	        cout<<res+ans<<endl;
	    }
	}
	return 0;
}
