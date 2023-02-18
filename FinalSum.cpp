/*Chef has an array AA of length NN. In one operation, Chef can:

Choose any subarray [L, R][L,R] (1 \leq L \leq R \leq N)(1≤L≤R≤N);
Add 11 to A_LA 
L
​
 , subtract 11 from A_{L+1}A 
L+1
​
 , add 11 to A_{L+2}A 
L+2
​
 , subtract 11 from A_{L+3}A 
L+3
​
  and so on, till A_RA 
R.
Chef performed QQ such operations where the i^{th}i 
the operation was performed on the subarray [L_i, R_i][Li,Ri ].
Determine the final sum of the array after these QQ operations.

Note that a subarray is formed by deleting some (possibly zero) elements from the beginning and some (possibly zero) elements from the end of the array.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    int a[n];
	    long long int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        sum=sum+a[i];
	    }
	    int b[q][2];
	    for(int i=0;i<q;i++){
	        cin>>b[i][0];
	        cin>>b[i][1];
	    }
	    for(int i=0;i<q;i++){
	        int temp=b[i][1]-b[i][0];
	        temp++;
	        if(temp%2==0){
	            continue;
	        }
	        else
	        sum++;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
