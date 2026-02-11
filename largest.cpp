#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout << "Enter value of a:";
    cin>>a;

    cout << "Enter value of b:";
    cin>>b;

    if(a>b){
        cout << "a is largest";
    }else{
        cout << "b is largest";
    }

    return 0;
}