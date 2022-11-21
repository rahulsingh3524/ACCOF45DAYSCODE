#include <iostream>
using namespace std;
void toh (int n, char a, char b,char c){
    if (n<=0){
        cout<<"invalid"<<endl;
    }
    if (n<=1){
        cout<<a<<"------>>"<<c<<endl;
    }
    if (n>1){
    toh( n-1,a,b,c);
    toh(1,a,c,b);
    toh(n-1,b,a,c);
    }
}
int main(){
    int n = 3;
    toh(n,'a','b','c');
}