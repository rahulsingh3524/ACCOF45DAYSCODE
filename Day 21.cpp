#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X;
	cin>>T;
	for (int i=1;i<=T;i++){
	    cin>>X;
	    if ( X>=2000){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
