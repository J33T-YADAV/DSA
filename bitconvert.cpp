#include<iostream>
using namespace std;

int bin(int n){
    while(n!=0){
        int bit = n & 1;
        cout << bit;
        n = n >> 1;
    }
}
//This is nothing to worry abt
int main(){
    int a;
    cin>>a;
    for(int i=1; i<=a; i++){
        cout << i << " => ";
        bin(i);
        cout<<endl;
    }
    return 0;
}
