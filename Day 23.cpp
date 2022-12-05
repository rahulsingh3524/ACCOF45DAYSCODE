#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,H;
	cin>>T;
	for (int i=1;i<=T;i++){
	    cin>>X>>H;
	    if (X>=H){
	        cout<<"YES"<<endl;
	        
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
