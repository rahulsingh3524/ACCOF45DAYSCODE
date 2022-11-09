#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,x,y,z,ans;
	cin>>T;
	for (int i=1;i<=T;i++){
	    cin>>x;
	    cin>>y;
	    cin>>z;
	    ans = x * 4 + y * 2 + z * 0;
	    cout<<ans<<endl;
	}
	return 0;
}
