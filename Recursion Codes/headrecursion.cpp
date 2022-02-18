#include<iostream>
using namespace std;
void rec(int n){
    if(n>0){
        rec(n-1);
        cout<<n<<" ";
    }
}
int main(){
    int n;
    // cin>>n;
    rec(2);
}