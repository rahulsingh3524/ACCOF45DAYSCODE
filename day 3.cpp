#include <iostream>
using namespace std;

int main() {

	int t;
	int a,b,c;
	cin>>t;
	
	for (int i=1;i<=t;i++){
	    cin>>(a);
	    cin>>(b);
	    cin>>(c);
	    
	    if(a>b and a>c){
	        printf("Alice\n");
	    }
	    else if (b>a and b>c){
	        printf("Bob\n");
	    }
	    else{
	        printf("Charlie\n");
	    }
	}
	return 0;
}
