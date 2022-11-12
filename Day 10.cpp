// Chef's computer has NN GB of free space. He wants to save XX files, each of size 1 GB and YY files, each of size 2 GB on his computer. Will he be able to do so?

// Chef can save all the files on his computer only if the total size of the files is less than or equal to the space available on his computer.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,N,X,Y,a;
	cin>>T;
	for (int i=1;i<=T;i++){
	    cin>>N>>X>>Y;
	    a = X + Y * 2;
	    if (a<=N){
	        cout<<"YES"<<endl;
	        
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
