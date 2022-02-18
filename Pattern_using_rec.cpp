#include<iostream>
using namespace std;
void pattern_print(int n){
    if (n==0){
        return;
    }
    pattern_print(n-1); //trust
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    
}
int main(){
    pattern_print(2);
}