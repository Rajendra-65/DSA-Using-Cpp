#include <iostream>

using namespace std;

int main () {
    int d = 4;
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int temp[d];
    for(int i = 0 ; i < d ; i++){
        temp[i] = arr[i];
    }
    for(int i = 0 ; i < n-d ; i++){
        arr[i] = arr[i+d];
    }
    for(int i = 0 ; i < d ; i++){
        arr[n-d +i] = temp[i];
    }
    for (int i = 0 ; i < n ; i++){
        cout << arr[i];
    }
    return 0;
}