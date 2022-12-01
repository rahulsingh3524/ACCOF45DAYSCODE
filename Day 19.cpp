#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y;
	cin>>T;
	for (int i=1;i<=T;i++){
	  cin>>X>>Y;
	  if (X<Y){
	      cout<<"FIRST"<<endl;
	      
	  }
	  else if (X>Y){
	      cout<<"SECOND"<<endl;
	  }
	  else {
	      cout<<"ANY"<<endl;
	  }
	}
	return 0;
}
