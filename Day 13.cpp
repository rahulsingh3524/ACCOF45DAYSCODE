#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X;
	cin>>T;
	for (int i=1;i<=T;i++){
	    cin>>X;
	    if(X<=30){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}	    
	return 0;
}
