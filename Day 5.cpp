#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int x,y,ans;
	for (int i=1;i<=T;i++){
	    cin>>x>>y;
	    if (y>x){
	    ans=y-x;
	    printf("%d\n",ans);
	    }
	    else{
	        printf("0\n");
	    }
        
	}
	
	return 0;
}
