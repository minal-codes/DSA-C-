#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int key;                  //stores that no. that user search for

    bool found = false;

    cout << "Enter 5 elements: \n";
    for(int i =0; i <5; i++){
        cin >> arr[i];
    }

    cout << "Enter number to search:";
    cin>>key;

    for(int i = 0; i < 5; i++){
        if(arr[i] == key){
            found = true;
            break;
        }
    }

    if(found){
        cout << "element found";
    }else{
        cout << "element not found";
    }

    return 0;

}