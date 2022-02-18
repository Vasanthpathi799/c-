#include<iostream>
using namespace std;
int c=0;
void rec(int n){
    if(n>0){
        c+=1;
        rec(n-1);
        cout<<n<<endl;
    }
}
int main(){
    rec(3);
    cout<<c;
}