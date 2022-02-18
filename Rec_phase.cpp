#include<iostream>
using namespace std;
void rec(int n){
    if (n==2){
        cout<<2<<endl;
        return;
    }
    cout<<n<<endl;
    rec(n-1);
    cout<<n<<endl;
}
int main(){
    rec(5);
}