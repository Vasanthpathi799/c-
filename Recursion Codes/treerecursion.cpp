#include<iostream>
using namespace std;
void rec(int n){
    if(n>0){
        cout<<n<<endl;
        rec(n-1);
        rec(n-1);
    }
}
int main()
{
    rec(4);
}