#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,k,x,c;
	cin>>T;
	for (int i=1;i<=T;i++){
	    cin>>k>>x;
	    k=k*7;
	    c=k-x;
	    cout<<c<<endl;
	}
	return 0;
}
