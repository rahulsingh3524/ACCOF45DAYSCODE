#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,x,y,a;
	cin>>T;
	for (int i=1;i<=T;i++){
	  cin>>x;
	  cin>>y;
	  cin>>a;
	  
	  if (a<y and a>=x ){
	      cout<<"YES"<<endl;
	  }
	  else {
	      cout<<"NO"<<endl;
	  }
	}
	    
	
	return 0;
}
