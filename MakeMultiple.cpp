/*Chef has two integers AA and BB (A \leq B)(A≤B).

Chef can choose any non-negative integer XX and add them to both AA and BB. Find whether it is possible to make AA a divisor of BB.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int x;
	    if(b%a){
	        if(b>2*a)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
