// question 
# include <iostream>
using namespace std;

int main(){
	int n,m,k;
	cout<<"the number of freinds in the friend group (N)"<<endl;
	cin>>n;
	cout<<"the number of student capacity in the course (M)"<<endl;
	cin>>m;
	cout<<"the number of other students (K)"<<endl;
	cin>>k;
	
	int y = n+k;
	if (y<=m){
		printf ("Answer: yes");
	}
	else{
		printf("Answer: no");
	}
	
}
