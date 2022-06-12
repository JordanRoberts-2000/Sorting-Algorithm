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


    //Sorting algorithm
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[i]){
                //Swap i and j
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}