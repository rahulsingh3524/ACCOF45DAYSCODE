#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>(t);
	for (int i=1;i<=t;i++){
	    cin>>x;
	    if (x>98){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
