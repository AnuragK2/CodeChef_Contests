/*Chef is given 33 integers A, B,A,B, and CC such that A \lt B \lt CA<B<C.

Chef needs to find the value of max(A, B, C) - min(A, B, C)max(A,B,C)−min(A,B,C).

Here max(A, B, C)max(A,B,C) denotes the maximum value among A, B, CA,B,C while min(A, B, C)min(A,B,C) denotes the minimum value among A, B, CA,B,C.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    cout<<c-a<<endl;
	}
	return 0;
}
