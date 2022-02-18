#include<iostream>
using namespace std;
void rec(int n){
    if(n>0){
        cout<<n<<" ";
        rec(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    rec(n);
}