/*In a test, there are NN problems, each carrying XX marks.
In each problem, Chef either received XX marks or 00 marks.

Determine whether is it possible for Chef to achieve exactly YY marks.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    
	        if(y%x==0){
	            if(n>=y/x)
	            cout<<"YES"<<endl;
	       else
	        cout<<"NO"<<endl;
	    }
	    else{
	       cout<<"NO"<<endl; 
	    }
	}
	return 0;
}
