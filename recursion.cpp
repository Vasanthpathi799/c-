#include<bits/stdc++.h>
using  namespace std;
void sayhello(int n){
    if (n==0){
        return ;
    }
    cout<<"Hello"<<n<<endl;
    sayhello(n-1);
}
int main(){
    sayhello(10);
}
