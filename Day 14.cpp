#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	int A,B,X,Y,c;
	cin>>T;
	for (int i=1;i<=T;i++){
	    cin>>A;
	    cin>>B;
	    cin>>X;
	    cin>>Y;
	    
	    
	    c = B-A;
	    if ( c >= 0 ){
	        if (c<=X){
	        cout<<"YES"<<endl;
	        }
	        else {
	            cout<<"NO"<<endl;
	        }
	    }
	    else {
	        
	        if (abs(c)<=Y){
	        cout<<"YES"<<endl;
	        }
	        else {
	            cout<<"NO"<<endl;
	        }
	    }
	    
	   
	}
	return 0;
}
