#include<iostream>
using namespace std;
int rec(int n){
    static int x=0;
    if(n>0){
        x++;
        cout<<x<<endl;
        return x+rec(n-1);
    }
   return 0; 
}
int main(){
    cout<<rec(5);
}