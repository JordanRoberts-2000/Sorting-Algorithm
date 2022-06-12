#include <iostream>
#include <cstdlib>
#define MAX 100

using namespace std;

int main(){
    //Input length N
    int n;
    int arr[MAX];
    cout<<"Enter a list size"<<endl;
    cin>>n;

    //Creating random array with length N
    for(int i = 0; i < n; i++){
        arr[i] = rand();
    }

    //Printing created arrow to the console
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}