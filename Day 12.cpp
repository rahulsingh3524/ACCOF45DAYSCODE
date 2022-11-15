#include <iostream>
using namespace std;
void push();
int main() {
   push(); 
}
void push()
{
    int top;
    int n; 
     int stack[9];
    top = -1;
    
    if (top ==9){
        cout<<"stack overflow";
        
    }
    else{
        cout<<"enter value(x)";
        cin>>n;
        top++;
       stack[top]=n;
        cout<<stack[top];
        
    }
}

